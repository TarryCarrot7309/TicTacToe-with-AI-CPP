// mainwindow.h
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QVector>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QIcon xIcon;
    QIcon oIcon;
    bool currentPlayer = true;  // true for X, false for O
    bool gameOver = false;
    bool isAIMode = false;

    struct Move {
        int row, col;
    };

    char board[3][3];
    QVector<QPushButton*> buttons;

    bool checkWin();
    bool isGameDraw();
    void resetBoard();
    void initializeGame();
    void makeAIMove();
    Move findBestMove();
    int minimax(char board[3][3], int depth, bool isMax);
    bool isMovesLeft(char board[3][3]);
    int evaluate(char board[3][3]);

private slots:
    void onButtonClicked();
    void toggleMode();
};

#endif // MAINWINDOW_H
