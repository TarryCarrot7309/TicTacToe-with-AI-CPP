#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QTimer>
#include <algorithm>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Load and verify icons
    xIcon = QIcon(":/images/x.png");
    oIcon = QIcon(":/images/o.png");

    if (xIcon.isNull() || oIcon.isNull()) {
        QMessageBox::warning(this, "Resource Error", "Failed to load game icons. Please ensure resource files are properly installed.");
    }

    // Initialize buttons vector
    buttons = {
        ui->button00, ui->button01, ui->button02,
        ui->button10, ui->button11, ui->button12,
        ui->button20, ui->button21, ui->button22
    };

    // Configure buttons for better icon display
    for (auto button : buttons) {
        button->setIconSize(QSize(60, 60));  // Adjust size as needed
        button->setFlat(true);  // Makes the button background transparent
        button->setStyleSheet(
            "QPushButton { border: none; background-color: transparent; }"
            "QPushButton:hover { background-color: rgba(200, 200, 200, 30); }"
            );
        connect(button, &QPushButton::clicked, this, &MainWindow::onButtonClicked);
    }

    // Set up game controls
    connect(ui->restartButton, &QPushButton::clicked, this, &MainWindow::resetBoard);
    connect(ui->toggleModeButton, &QPushButton::clicked, this, &MainWindow::toggleMode);

    // Initialize game state
    initializeGame();

    // Set window title
    setWindowTitle("Tic Tac Toe");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initializeGame()
{
    // Initialize the game board
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = '_';
        }
    }

    // Clear all button icons
    for (auto button : buttons) {
        button->setIcon(QIcon());
        button->setEnabled(true);
    }

    currentPlayer = true;
    gameOver = false;
}

void MainWindow::onButtonClicked()
{
    if (gameOver) return;

    QPushButton* button = qobject_cast<QPushButton*>(sender());
    int index = buttons.indexOf(button);
    int row = index / 3;
    int col = index % 3;

    if (board[row][col] == '_') {
        // Set the icon with proper scaling
        QIcon currentIcon = currentPlayer ? xIcon : oIcon;
        button->setIcon(currentIcon);

        // Update game state
        board[row][col] = currentPlayer ? 'x' : 'o';

        // Check for win or draw
        if (checkWin()) {
            gameOver = true;
            QString winner = currentPlayer ? "X" : "O";
            QMessageBox::information(this, "Game Over", winner + " Wins!");
            return;
        }

        if (isGameDraw()) {
            gameOver = true;
            QMessageBox::information(this, "Game Over", "It's a Draw!");
            return;
        }

        // Switch player or make AI move
        if (!isAIMode) {
            currentPlayer = !currentPlayer;
        } else if (!gameOver) {
            currentPlayer = false;  // AI's turn
            QTimer::singleShot(500, this, &MainWindow::makeAIMove);
        }
    }
}

bool MainWindow::checkWin()
{
    // Check rows, columns and diagonals
    for (int i = 0; i < 3; i++) {
        if (board[i][0] != '_' && board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return true;
        if (board[0][i] != '_' && board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return true;
    }

    if (board[0][0] != '_' && board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return true;
    if (board[0][2] != '_' && board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return true;

    return false;
}

bool MainWindow::isGameDraw()
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] == '_')
                return false;
    return true;
}

void MainWindow::resetBoard()
{
    // Clear all button icons and reset their appearance
    for (auto button : buttons) {
        button->setIcon(QIcon());
        button->setEnabled(true);
        button->setStyleSheet(
            "QPushButton { border: none; background-color: transparent; }"
            "QPushButton:hover { background-color: rgba(200, 200, 200, 30); }"
            );
    }

    initializeGame();
}

void MainWindow::toggleMode()
{
    isAIMode = !isAIMode;
    ui->toggleModeButton->setText(isAIMode ? "Play vs Player" : "Play vs AI");
    resetBoard();
}

void MainWindow::makeAIMove()
{
    if (gameOver) return;

    Move bestMove = findBestMove();
    int index = bestMove.row * 3 + bestMove.col;

    if (index >= 0 && index < buttons.size()) {
        buttons[index]->setIcon(oIcon);
        board[bestMove.row][bestMove.col] = 'o';

        if (checkWin()) {
            gameOver = true;
            QMessageBox::information(this, "Game Over", "AI Wins!");
            return;
        }

        if (isGameDraw()) {
            gameOver = true;
            QMessageBox::information(this, "Game Over", "It's a Draw!");
            return;
        }

        currentPlayer = true;  // Back to player's turn
    }
}

// AI implementation functions
bool MainWindow::isMovesLeft(char board[3][3])
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] == '_')
                return true;
    return false;
}

int MainWindow::evaluate(char b[3][3])
{
    // Check rows, columns and diagonals
    for (int i = 0; i < 3; i++) {
        if (b[i][0] == b[i][1] && b[i][1] == b[i][2]) {
            if (b[i][0] == 'o') return 10;
            else if (b[i][0] == 'x') return -10;
        }
    }

    for (int i = 0; i < 3; i++) {
        if (b[0][i] == b[1][i] && b[1][i] == b[2][i]) {
            if (b[0][i] == 'o') return 10;
            else if (b[0][i] == 'x') return -10;
        }
    }

    if (b[0][0] == b[1][1] && b[1][1] == b[2][2]) {
        if (b[0][0] == 'o') return 10;
        else if (b[0][0] == 'x') return -10;
    }

    if (b[0][2] == b[1][1] && b[1][1] == b[2][0]) {
        if (b[0][2] == 'o') return 10;
        else if (b[0][2] == 'x') return -10;
    }

    return 0;
}

int MainWindow::minimax(char board[3][3], int depth, bool isMax)
{
    int score = evaluate(board);

    if (score == 10 || score == -10)
        return score;

    if (!isMovesLeft(board))
        return 0;

    if (isMax) {
        int best = -1000;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == '_') {
                    board[i][j] = 'o';
                    best = std::max(best, minimax(board, depth + 1, !isMax));
                    board[i][j] = '_';
                }
            }
        }
        return best;
    } else {
        int best = 1000;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == '_') {
                    board[i][j] = 'x';
                    best = std::min(best, minimax(board, depth + 1, !isMax));
                    board[i][j] = '_';
                }
            }
        }
        return best;
    }
}

MainWindow::Move MainWindow::findBestMove()
{
    int bestVal = -1000;
    Move bestMove = {-1, -1};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == '_') {
                board[i][j] = 'o';
                int moveVal = minimax(board, 0, false);
                board[i][j] = '_';

                if (moveVal > bestVal) {
                    bestMove.row = i;
                    bestMove.col = j;
                    bestVal = moveVal;
                }
            }
        }
    }

    return bestMove;
}
