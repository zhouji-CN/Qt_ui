/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
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
    QGroupBox *groupBox_3;
    QLabel *lbl_show2;
    QGroupBox *groupBox_2;
    QLabel *lbl_show1;
    QGroupBox *horizontalGroupBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_loadImage;
    QPushButton *btn_Gray;
    QPushButton *btn_Filter;
    QPushButton *btn_Edge;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(740, 464);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(360, 80, 371, 331));
        lbl_show2 = new QLabel(groupBox_3);
        lbl_show2->setObjectName(QString::fromUtf8("lbl_show2"));
        lbl_show2->setGeometry(QRect(0, 20, 371, 311));
        lbl_show2->setFrameShape(QFrame::Panel);
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 80, 341, 331));
        lbl_show1 = new QLabel(groupBox_2);
        lbl_show1->setObjectName(QString::fromUtf8("lbl_show1"));
        lbl_show1->setGeometry(QRect(0, 20, 341, 311));
        lbl_show1->setFrameShape(QFrame::Panel);
        horizontalGroupBox = new QGroupBox(centralwidget);
        horizontalGroupBox->setObjectName(QString::fromUtf8("horizontalGroupBox"));
        horizontalGroupBox->setGeometry(QRect(10, 0, 721, 71));
        horizontalLayout = new QHBoxLayout(horizontalGroupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_loadImage = new QPushButton(horizontalGroupBox);
        btn_loadImage->setObjectName(QString::fromUtf8("btn_loadImage"));

        horizontalLayout->addWidget(btn_loadImage);

        btn_Gray = new QPushButton(horizontalGroupBox);
        btn_Gray->setObjectName(QString::fromUtf8("btn_Gray"));

        horizontalLayout->addWidget(btn_Gray);

        btn_Filter = new QPushButton(horizontalGroupBox);
        btn_Filter->setObjectName(QString::fromUtf8("btn_Filter"));

        horizontalLayout->addWidget(btn_Filter);

        btn_Edge = new QPushButton(horizontalGroupBox);
        btn_Edge->setObjectName(QString::fromUtf8("btn_Edge"));

        horizontalLayout->addWidget(btn_Edge);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 740, 21));
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
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\345\244\204\347\220\206\345\220\216\345\233\276\345\203\217", nullptr));
        lbl_show2->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\345\216\237\345\233\276\346\230\276\347\244\272", nullptr));
        lbl_show1->setText(QString());
        horizontalGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\345\233\276\345\203\217\345\212\237\350\203\275\345\214\272", nullptr));
        btn_loadImage->setText(QCoreApplication::translate("MainWindow", "\345\212\240\350\275\275\345\233\276\345\203\217", nullptr));
        btn_Gray->setText(QCoreApplication::translate("MainWindow", "\347\201\260\345\272\246\345\214\226", nullptr));
        btn_Filter->setText(QCoreApplication::translate("MainWindow", "\345\235\207\345\200\274\346\273\244\346\263\242", nullptr));
        btn_Edge->setText(QCoreApplication::translate("MainWindow", "\350\276\271\347\274\230\346\243\200\346\265\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
