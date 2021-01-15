/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QPushButton *addbut;
    QPushButton *subbut;
    QPushButton *multbut;
    QTableView *tableView_3;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *Lw1spinbox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *Lk1spinbox;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QTableView *tableView_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *Lw2spinbox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpinBox *Lk2spinbox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(562, 518);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(200, 270, 341, 194));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        addbut = new QPushButton(layoutWidget);
        addbut->setObjectName(QString::fromUtf8("addbut"));

        verticalLayout_3->addWidget(addbut);

        subbut = new QPushButton(layoutWidget);
        subbut->setObjectName(QString::fromUtf8("subbut"));

        verticalLayout_3->addWidget(subbut);

        multbut = new QPushButton(layoutWidget);
        multbut->setObjectName(QString::fromUtf8("multbut"));

        verticalLayout_3->addWidget(multbut);


        horizontalLayout_5->addLayout(verticalLayout_3);

        tableView_3 = new QTableView(layoutWidget);
        tableView_3->setObjectName(QString::fromUtf8("tableView_3"));

        horizontalLayout_5->addWidget(tableView_3);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 258, 250));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableView = new QTableView(layoutWidget1);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        Lw1spinbox = new QSpinBox(layoutWidget1);
        Lw1spinbox->setObjectName(QString::fromUtf8("Lw1spinbox"));

        horizontalLayout->addWidget(Lw1spinbox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        Lk1spinbox = new QSpinBox(layoutWidget1);
        Lk1spinbox->setObjectName(QString::fromUtf8("Lk1spinbox"));

        horizontalLayout_2->addWidget(Lk1spinbox);


        verticalLayout->addLayout(horizontalLayout_2);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(280, 10, 258, 250));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tableView_2 = new QTableView(layoutWidget2);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));

        verticalLayout_2->addWidget(tableView_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        Lw2spinbox = new QSpinBox(layoutWidget2);
        Lw2spinbox->setObjectName(QString::fromUtf8("Lw2spinbox"));

        horizontalLayout_3->addWidget(Lw2spinbox);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        Lk2spinbox = new QSpinBox(layoutWidget2);
        Lk2spinbox->setObjectName(QString::fromUtf8("Lk2spinbox"));

        horizontalLayout_4->addWidget(Lk2spinbox);


        verticalLayout_2->addLayout(horizontalLayout_4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 562, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        addbut->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        subbut->setText(QCoreApplication::translate("MainWindow", "Subb", nullptr));
        multbut->setText(QCoreApplication::translate("MainWindow", "Mult", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Liczba wierszy", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Liczba kolumn", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Liczba wierszy", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Liczba kolumn", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
