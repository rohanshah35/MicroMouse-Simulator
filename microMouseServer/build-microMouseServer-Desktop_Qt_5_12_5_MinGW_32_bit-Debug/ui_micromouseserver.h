/********************************************************************************
** Form generated from reading UI file 'micromouseserver.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MICROMOUSESERVER_H
#define UI_MICROMOUSESERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_microMouseServer
{
public:
    QAction *actionSave_Maze;
    QAction *menu_startRun;
    QAction *actionTest;
    QAction *menu_loadMaze;
    QAction *menu_saveMaze;
    QAction *menu_connect2Mouse;
    QAction *actionConnect_to_Remote_Mouse;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGraphicsView *graphics;
    QTabWidget *tabWidget;
    QWidget *tb_status;
    QHBoxLayout *horizontalLayout_2;
    QTextBrowser *txt_status;
    QWidget *tb_debug;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *txt_debug;
    QMenuBar *menuBar;
    QMenu *menuSystem;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *microMouseServer)
    {
        if (microMouseServer->objectName().isEmpty())
            microMouseServer->setObjectName(QString::fromUtf8("microMouseServer"));
        microMouseServer->resize(800, 1000);
        actionSave_Maze = new QAction(microMouseServer);
        actionSave_Maze->setObjectName(QString::fromUtf8("actionSave_Maze"));
        menu_startRun = new QAction(microMouseServer);
        menu_startRun->setObjectName(QString::fromUtf8("menu_startRun"));
        actionTest = new QAction(microMouseServer);
        actionTest->setObjectName(QString::fromUtf8("actionTest"));
        menu_loadMaze = new QAction(microMouseServer);
        menu_loadMaze->setObjectName(QString::fromUtf8("menu_loadMaze"));
        menu_saveMaze = new QAction(microMouseServer);
        menu_saveMaze->setObjectName(QString::fromUtf8("menu_saveMaze"));
        menu_connect2Mouse = new QAction(microMouseServer);
        menu_connect2Mouse->setObjectName(QString::fromUtf8("menu_connect2Mouse"));
        actionConnect_to_Remote_Mouse = new QAction(microMouseServer);
        actionConnect_to_Remote_Mouse->setObjectName(QString::fromUtf8("actionConnect_to_Remote_Mouse"));
        actionConnect_to_Remote_Mouse->setVisible(false);
        centralWidget = new QWidget(microMouseServer);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        graphics = new QGraphicsView(centralWidget);
        graphics->setObjectName(QString::fromUtf8("graphics"));

        verticalLayout->addWidget(graphics);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMaximumSize(QSize(16777215, 200));
        tb_status = new QWidget();
        tb_status->setObjectName(QString::fromUtf8("tb_status"));
        horizontalLayout_2 = new QHBoxLayout(tb_status);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        txt_status = new QTextBrowser(tb_status);
        txt_status->setObjectName(QString::fromUtf8("txt_status"));

        horizontalLayout_2->addWidget(txt_status);

        tabWidget->addTab(tb_status, QString());
        tb_debug = new QWidget();
        tb_debug->setObjectName(QString::fromUtf8("tb_debug"));
        horizontalLayout = new QHBoxLayout(tb_debug);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        txt_debug = new QTextBrowser(tb_debug);
        txt_debug->setObjectName(QString::fromUtf8("txt_debug"));

        horizontalLayout->addWidget(txt_debug);

        tabWidget->addTab(tb_debug, QString());

        verticalLayout->addWidget(tabWidget);

        microMouseServer->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(microMouseServer);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        menuSystem = new QMenu(menuBar);
        menuSystem->setObjectName(QString::fromUtf8("menuSystem"));
        microMouseServer->setMenuBar(menuBar);
        mainToolBar = new QToolBar(microMouseServer);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        microMouseServer->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menuSystem->menuAction());
        menuSystem->addAction(menu_startRun);
        menuSystem->addSeparator();
        menuSystem->addAction(menu_loadMaze);
        menuSystem->addAction(menu_saveMaze);
        menuSystem->addSeparator();
        menuSystem->addAction(menu_connect2Mouse);
        menuSystem->addAction(actionConnect_to_Remote_Mouse);

        retranslateUi(microMouseServer);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(microMouseServer);
    } // setupUi

    void retranslateUi(QMainWindow *microMouseServer)
    {
        microMouseServer->setWindowTitle(QApplication::translate("microMouseServer", "microMouseServer", nullptr));
        actionSave_Maze->setText(QApplication::translate("microMouseServer", "Save Maze", nullptr));
        menu_startRun->setText(QApplication::translate("microMouseServer", "Start Run", nullptr));
        actionTest->setText(QApplication::translate("microMouseServer", "test", nullptr));
        menu_loadMaze->setText(QApplication::translate("microMouseServer", "Load Maze", nullptr));
        menu_saveMaze->setText(QApplication::translate("microMouseServer", "Save Maze", nullptr));
        menu_connect2Mouse->setText(QApplication::translate("microMouseServer", "Connect to Local Mouse", nullptr));
        actionConnect_to_Remote_Mouse->setText(QApplication::translate("microMouseServer", "Connect to Remote Mouse", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tb_status), QApplication::translate("microMouseServer", "Status", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tb_debug), QApplication::translate("microMouseServer", "Debug", nullptr));
        menuSystem->setTitle(QApplication::translate("microMouseServer", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class microMouseServer: public Ui_microMouseServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MICROMOUSESERVER_H
