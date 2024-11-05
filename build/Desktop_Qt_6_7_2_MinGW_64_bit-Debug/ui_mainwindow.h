/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *button12;
    QPushButton *button00;
    QPushButton *button02;
    QPushButton *button10;
    QFrame *line_5;
    QFrame *line_7;
    QPushButton *button20;
    QPushButton *button22;
    QFrame *line_4;
    QFrame *line_9;
    QPushButton *button01;
    QFrame *line_3;
    QPushButton *button21;
    QFrame *line;
    QFrame *line_10;
    QPushButton *button11;
    QFrame *line_6;
    QFrame *line_8;
    QFrame *line_2;
    QFrame *line_11;
    QFrame *line_12;
    QPushButton *restartButton;
    QPushButton *toggleModeButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(943, 785);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(120, 90, 651, 571));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        button12 = new QPushButton(gridLayoutWidget);
        button12->setObjectName("button12");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(button12->sizePolicy().hasHeightForWidth());
        button12->setSizePolicy(sizePolicy);
        button12->setStyleSheet(QString::fromUtf8("QPushButton:pressed {\n"
"    background-color: transparent;\n"
"}\n"
""));
        button12->setIconSize(QSize(80, 80));
        button12->setFlat(true);

        gridLayout->addWidget(button12, 2, 4, 1, 1);

        button00 = new QPushButton(gridLayoutWidget);
        button00->setObjectName("button00");
        sizePolicy.setHeightForWidth(button00->sizePolicy().hasHeightForWidth());
        button00->setSizePolicy(sizePolicy);
        button00->setStyleSheet(QString::fromUtf8("QPushButton:pressed {\n"
"    background-color: transparent;\n"
"}\n"
""));
        button00->setIconSize(QSize(80, 80));
        button00->setFlat(true);

        gridLayout->addWidget(button00, 0, 0, 1, 1);

        button02 = new QPushButton(gridLayoutWidget);
        button02->setObjectName("button02");
        sizePolicy.setHeightForWidth(button02->sizePolicy().hasHeightForWidth());
        button02->setSizePolicy(sizePolicy);
        button02->setStyleSheet(QString::fromUtf8("QPushButton:pressed {\n"
"    background-color: transparent;\n"
"}\n"
""));
        button02->setIconSize(QSize(80, 80));
        button02->setFlat(true);

        gridLayout->addWidget(button02, 0, 4, 1, 1);

        button10 = new QPushButton(gridLayoutWidget);
        button10->setObjectName("button10");
        sizePolicy.setHeightForWidth(button10->sizePolicy().hasHeightForWidth());
        button10->setSizePolicy(sizePolicy);
        button10->setStyleSheet(QString::fromUtf8("QPushButton:pressed {\n"
"    background-color: transparent;\n"
"}\n"
""));
        button10->setIconSize(QSize(80, 80));
        button10->setFlat(true);

        gridLayout->addWidget(button10, 2, 0, 1, 1);

        line_5 = new QFrame(gridLayoutWidget);
        line_5->setObjectName("line_5");
        line_5->setFrameShape(QFrame::Shape::HLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_5, 3, 0, 1, 1);

        line_7 = new QFrame(gridLayoutWidget);
        line_7->setObjectName("line_7");
        line_7->setFrameShape(QFrame::Shape::HLine);
        line_7->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_7, 1, 2, 1, 1);

        button20 = new QPushButton(gridLayoutWidget);
        button20->setObjectName("button20");
        sizePolicy.setHeightForWidth(button20->sizePolicy().hasHeightForWidth());
        button20->setSizePolicy(sizePolicy);
        button20->setStyleSheet(QString::fromUtf8("QPushButton:pressed {\n"
"    background-color: transparent;\n"
"}\n"
""));
        button20->setIconSize(QSize(80, 80));
        button20->setFlat(true);

        gridLayout->addWidget(button20, 4, 0, 1, 1);

        button22 = new QPushButton(gridLayoutWidget);
        button22->setObjectName("button22");
        sizePolicy.setHeightForWidth(button22->sizePolicy().hasHeightForWidth());
        button22->setSizePolicy(sizePolicy);
        button22->setStyleSheet(QString::fromUtf8("QPushButton:pressed {\n"
"    background-color: transparent;\n"
"}\n"
""));
        button22->setIconSize(QSize(80, 80));
        button22->setFlat(true);

        gridLayout->addWidget(button22, 4, 4, 1, 1);

        line_4 = new QFrame(gridLayoutWidget);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::Shape::HLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_4, 3, 4, 1, 1);

        line_9 = new QFrame(gridLayoutWidget);
        line_9->setObjectName("line_9");
        line_9->setFrameShape(QFrame::Shape::VLine);
        line_9->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_9, 2, 3, 1, 1);

        button01 = new QPushButton(gridLayoutWidget);
        button01->setObjectName("button01");
        sizePolicy.setHeightForWidth(button01->sizePolicy().hasHeightForWidth());
        button01->setSizePolicy(sizePolicy);
        button01->setStyleSheet(QString::fromUtf8("QPushButton:pressed {\n"
"    background-color: transparent;\n"
"}\n"
""));
        button01->setIconSize(QSize(80, 80));
        button01->setFlat(true);

        gridLayout->addWidget(button01, 0, 2, 1, 1);

        line_3 = new QFrame(gridLayoutWidget);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_3, 1, 0, 1, 1);

        button21 = new QPushButton(gridLayoutWidget);
        button21->setObjectName("button21");
        sizePolicy.setHeightForWidth(button21->sizePolicy().hasHeightForWidth());
        button21->setSizePolicy(sizePolicy);
        button21->setStyleSheet(QString::fromUtf8("QPushButton:pressed {\n"
"    background-color: transparent;\n"
"}\n"
""));
        button21->setIconSize(QSize(80, 80));
        button21->setFlat(true);

        gridLayout->addWidget(button21, 4, 2, 1, 1);

        line = new QFrame(gridLayoutWidget);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line, 3, 3, 2, 1);

        line_10 = new QFrame(gridLayoutWidget);
        line_10->setObjectName("line_10");
        line_10->setFrameShape(QFrame::Shape::VLine);
        line_10->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_10, 0, 3, 1, 1);

        button11 = new QPushButton(gridLayoutWidget);
        button11->setObjectName("button11");
        sizePolicy.setHeightForWidth(button11->sizePolicy().hasHeightForWidth());
        button11->setSizePolicy(sizePolicy);
        button11->setStyleSheet(QString::fromUtf8("QPushButton:pressed {\n"
"    background-color: transparent;\n"
"}\n"
""));
        button11->setIconSize(QSize(80, 80));
        button11->setFlat(true);

        gridLayout->addWidget(button11, 2, 2, 1, 1);

        line_6 = new QFrame(gridLayoutWidget);
        line_6->setObjectName("line_6");
        line_6->setFrameShape(QFrame::Shape::HLine);
        line_6->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_6, 3, 2, 1, 1);

        line_8 = new QFrame(gridLayoutWidget);
        line_8->setObjectName("line_8");
        line_8->setFrameShape(QFrame::Shape::HLine);
        line_8->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_8, 1, 4, 1, 1);

        line_2 = new QFrame(gridLayoutWidget);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::VLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_2, 2, 1, 1, 1);

        line_11 = new QFrame(gridLayoutWidget);
        line_11->setObjectName("line_11");
        line_11->setFrameShape(QFrame::Shape::VLine);
        line_11->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_11, 4, 1, 1, 1);

        line_12 = new QFrame(gridLayoutWidget);
        line_12->setObjectName("line_12");
        line_12->setFrameShape(QFrame::Shape::VLine);
        line_12->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_12, 0, 1, 1, 1);

        restartButton = new QPushButton(centralwidget);
        restartButton->setObjectName("restartButton");
        restartButton->setGeometry(QRect(710, 0, 211, 41));
        toggleModeButton = new QPushButton(centralwidget);
        toggleModeButton->setObjectName("toggleModeButton");
        toggleModeButton->setGeometry(QRect(0, 0, 141, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 943, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        button12->setText(QString());
        button00->setText(QString());
        button02->setText(QString());
        button10->setText(QString());
        button20->setText(QString());
        button22->setText(QString());
        button01->setText(QString());
        button21->setText(QString());
        button11->setText(QString());
        restartButton->setText(QCoreApplication::translate("MainWindow", "Restart Game", nullptr));
        toggleModeButton->setText(QCoreApplication::translate("MainWindow", "PlayVSAI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
