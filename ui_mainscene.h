/********************************************************************************
** Form generated from reading UI file 'mainscene.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINSCENE_H
#define UI_MAINSCENE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainScene
{
public:
    QAction *actionExit;
    QAction *actionExit_2;
    QAction *actionQuit;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuStart;

    void setupUi(QMainWindow *MainScene)
    {
        if (MainScene->objectName().isEmpty())
            MainScene->setObjectName(QString::fromUtf8("MainScene"));
        MainScene->resize(400, 300);
        actionExit = new QAction(MainScene);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionExit_2 = new QAction(MainScene);
        actionExit_2->setObjectName(QString::fromUtf8("actionExit_2"));
        actionQuit = new QAction(MainScene);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        centralWidget = new QWidget(MainScene);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainScene->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainScene);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 26));
        menuStart = new QMenu(menuBar);
        menuStart->setObjectName(QString::fromUtf8("menuStart"));
        MainScene->setMenuBar(menuBar);

        menuBar->addAction(menuStart->menuAction());
        menuStart->addAction(actionQuit);

        retranslateUi(MainScene);

        QMetaObject::connectSlotsByName(MainScene);
    } // setupUi

    void retranslateUi(QMainWindow *MainScene)
    {
        MainScene->setWindowTitle(QCoreApplication::translate("MainScene", "MainScene", nullptr));
        actionExit->setText(QCoreApplication::translate("MainScene", "ss ", nullptr));
        actionExit_2->setText(QCoreApplication::translate("MainScene", "Exit", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainScene", "Exit", nullptr));
        menuStart->setTitle(QCoreApplication::translate("MainScene", "Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainScene: public Ui_MainScene {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINSCENE_H
