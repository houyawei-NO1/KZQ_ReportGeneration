/********************************************************************************
** Form generated from reading UI file 'kzq_reportgeneration.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KZQ_REPORTGENERATION_H
#define UI_KZQ_REPORTGENERATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KZQ_ReportGeneration
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_14;
    QProgressBar *progressBar;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_10;
    QRadioButton *radioButton;
    QSpinBox *spinBox;
    QSpacerItem *horizontalSpacer_5;
    QRadioButton *radioButton_2;
    QSpinBox *spinBox_2;
    QLabel *label_2;
    QSpinBox *spinBox_3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_2;
    QLabel *label_7;
    QLineEdit *lineEdit_5;
    QLabel *label_8;
    QLineEdit *lineEdit_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_11;
    QLineEdit *lineEdit_7;
    QPushButton *pushButton_3;
    QLabel *label_10;
    QLineEdit *lineEdit_8;
    QLabel *label_9;
    QLineEdit *lineEdit_9;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_14;
    QLineEdit *lineEdit_10;
    QPushButton *pushButton_4;
    QLabel *label_13;
    QLineEdit *lineEdit_11;
    QLabel *label_12;
    QLineEdit *lineEdit_12;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_17;
    QLineEdit *lineEdit_13;
    QPushButton *pushButton_5;
    QLabel *label_16;
    QLineEdit *lineEdit_14;
    QLabel *label_15;
    QLineEdit *lineEdit_15;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *KZQ_ReportGeneration)
    {
        if (KZQ_ReportGeneration->objectName().isEmpty())
            KZQ_ReportGeneration->setObjectName("KZQ_ReportGeneration");
        KZQ_ReportGeneration->resize(763, 577);
        centralwidget = new QWidget(KZQ_ReportGeneration);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(20, 50, 731, 421));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(20);
        label->setFont(font);

        horizontalLayout_4->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        progressBar = new QProgressBar(verticalLayoutWidget);
        progressBar->setObjectName("progressBar");
        progressBar->setValue(24);

        horizontalLayout_14->addWidget(progressBar);


        verticalLayout->addLayout(horizontalLayout_14);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        radioButton = new QRadioButton(verticalLayoutWidget);
        buttonGroup = new QButtonGroup(KZQ_ReportGeneration);
        buttonGroup->setObjectName("buttonGroup");
        buttonGroup->addButton(radioButton);
        radioButton->setObjectName("radioButton");
        QFont font1;
        font1.setPointSize(15);
        radioButton->setFont(font1);
        radioButton->setChecked(true);
        radioButton->setAutoRepeat(false);

        horizontalLayout_10->addWidget(radioButton);

        spinBox = new QSpinBox(verticalLayoutWidget);
        spinBox->setObjectName("spinBox");
        spinBox->setFont(font1);
        spinBox->setMaximum(99999);

        horizontalLayout_10->addWidget(spinBox);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_5);

        radioButton_2 = new QRadioButton(verticalLayoutWidget);
        buttonGroup->addButton(radioButton_2);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setFont(font1);

        horizontalLayout_10->addWidget(radioButton_2);

        spinBox_2 = new QSpinBox(verticalLayoutWidget);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setFont(font1);
        spinBox_2->setMaximum(99999);

        horizontalLayout_10->addWidget(spinBox_2);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        horizontalLayout_10->addWidget(label_2);

        spinBox_3 = new QSpinBox(verticalLayoutWidget);
        spinBox_3->setObjectName("spinBox_3");
        spinBox_3->setFont(font1);
        spinBox_3->setMaximum(99999);

        horizontalLayout_10->addWidget(spinBox_3);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_9->addWidget(label_3);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout_9->addWidget(lineEdit);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setFont(font1);

        horizontalLayout_9->addWidget(pushButton);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_9->addWidget(label_4);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout_9->addWidget(lineEdit_2);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName("label_5");

        horizontalLayout_9->addWidget(label_5);

        lineEdit_3 = new QLineEdit(verticalLayoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");

        horizontalLayout_9->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName("label_6");

        horizontalLayout_8->addWidget(label_6);

        lineEdit_4 = new QLineEdit(verticalLayoutWidget);
        lineEdit_4->setObjectName("lineEdit_4");

        horizontalLayout_8->addWidget(lineEdit_4);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setFont(font1);

        horizontalLayout_8->addWidget(pushButton_2);

        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName("label_7");

        horizontalLayout_8->addWidget(label_7);

        lineEdit_5 = new QLineEdit(verticalLayoutWidget);
        lineEdit_5->setObjectName("lineEdit_5");

        horizontalLayout_8->addWidget(lineEdit_5);

        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName("label_8");

        horizontalLayout_8->addWidget(label_8);

        lineEdit_6 = new QLineEdit(verticalLayoutWidget);
        lineEdit_6->setObjectName("lineEdit_6");

        horizontalLayout_8->addWidget(lineEdit_6);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_11 = new QLabel(verticalLayoutWidget);
        label_11->setObjectName("label_11");

        horizontalLayout_7->addWidget(label_11);

        lineEdit_7 = new QLineEdit(verticalLayoutWidget);
        lineEdit_7->setObjectName("lineEdit_7");

        horizontalLayout_7->addWidget(lineEdit_7);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setFont(font1);

        horizontalLayout_7->addWidget(pushButton_3);

        label_10 = new QLabel(verticalLayoutWidget);
        label_10->setObjectName("label_10");

        horizontalLayout_7->addWidget(label_10);

        lineEdit_8 = new QLineEdit(verticalLayoutWidget);
        lineEdit_8->setObjectName("lineEdit_8");

        horizontalLayout_7->addWidget(lineEdit_8);

        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName("label_9");

        horizontalLayout_7->addWidget(label_9);

        lineEdit_9 = new QLineEdit(verticalLayoutWidget);
        lineEdit_9->setObjectName("lineEdit_9");

        horizontalLayout_7->addWidget(lineEdit_9);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_14 = new QLabel(verticalLayoutWidget);
        label_14->setObjectName("label_14");

        horizontalLayout_12->addWidget(label_14);

        lineEdit_10 = new QLineEdit(verticalLayoutWidget);
        lineEdit_10->setObjectName("lineEdit_10");

        horizontalLayout_12->addWidget(lineEdit_10);

        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setFont(font1);

        horizontalLayout_12->addWidget(pushButton_4);

        label_13 = new QLabel(verticalLayoutWidget);
        label_13->setObjectName("label_13");

        horizontalLayout_12->addWidget(label_13);

        lineEdit_11 = new QLineEdit(verticalLayoutWidget);
        lineEdit_11->setObjectName("lineEdit_11");

        horizontalLayout_12->addWidget(lineEdit_11);

        label_12 = new QLabel(verticalLayoutWidget);
        label_12->setObjectName("label_12");

        horizontalLayout_12->addWidget(label_12);

        lineEdit_12 = new QLineEdit(verticalLayoutWidget);
        lineEdit_12->setObjectName("lineEdit_12");

        horizontalLayout_12->addWidget(lineEdit_12);


        verticalLayout->addLayout(horizontalLayout_12);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_17 = new QLabel(verticalLayoutWidget);
        label_17->setObjectName("label_17");

        horizontalLayout_5->addWidget(label_17);

        lineEdit_13 = new QLineEdit(verticalLayoutWidget);
        lineEdit_13->setObjectName("lineEdit_13");

        horizontalLayout_5->addWidget(lineEdit_13);

        pushButton_5 = new QPushButton(verticalLayoutWidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setFont(font1);

        horizontalLayout_5->addWidget(pushButton_5);

        label_16 = new QLabel(verticalLayoutWidget);
        label_16->setObjectName("label_16");

        horizontalLayout_5->addWidget(label_16);

        lineEdit_14 = new QLineEdit(verticalLayoutWidget);
        lineEdit_14->setObjectName("lineEdit_14");

        horizontalLayout_5->addWidget(lineEdit_14);

        label_15 = new QLabel(verticalLayoutWidget);
        label_15->setObjectName("label_15");

        horizontalLayout_5->addWidget(label_15);

        lineEdit_15 = new QLineEdit(verticalLayoutWidget);
        lineEdit_15->setObjectName("lineEdit_15");

        horizontalLayout_5->addWidget(lineEdit_15);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        pushButton_7 = new QPushButton(verticalLayoutWidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setFont(font1);

        horizontalLayout_13->addWidget(pushButton_7);

        pushButton_6 = new QPushButton(verticalLayoutWidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setFont(font1);

        horizontalLayout_13->addWidget(pushButton_6);


        verticalLayout->addLayout(horizontalLayout_13);

        KZQ_ReportGeneration->setCentralWidget(centralwidget);
        menubar = new QMenuBar(KZQ_ReportGeneration);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 763, 21));
        KZQ_ReportGeneration->setMenuBar(menubar);
        statusbar = new QStatusBar(KZQ_ReportGeneration);
        statusbar->setObjectName("statusbar");
        KZQ_ReportGeneration->setStatusBar(statusbar);

        retranslateUi(KZQ_ReportGeneration);

        QMetaObject::connectSlotsByName(KZQ_ReportGeneration);
    } // setupUi

    void retranslateUi(QMainWindow *KZQ_ReportGeneration)
    {
        KZQ_ReportGeneration->setWindowTitle(QCoreApplication::translate("KZQ_ReportGeneration", "\346\262\263\345\215\227\345\215\227\351\203\275\346\261\275\350\275\246\347\224\265\345\255\220-\346\216\247\345\210\266\345\231\250\346\212\245\350\241\250\347\224\237\346\210\220\347\263\273\347\273\237", nullptr));
        label->setText(QCoreApplication::translate("KZQ_ReportGeneration", "\346\216\247\345\210\266\345\231\250\346\212\245\350\241\250\347\224\237\346\210\220", nullptr));
        radioButton->setText(QCoreApplication::translate("KZQ_ReportGeneration", "\345\215\225\346\216\247\345\210\266\345\231\250\345\272\217\345\210\227\345\217\267\357\274\232E", nullptr));
        radioButton_2->setText(QCoreApplication::translate("KZQ_ReportGeneration", "\346\211\271\351\207\217\345\272\217\345\217\267\346\216\247\345\210\266\345\231\250\357\274\232E", nullptr));
        label_2->setText(QCoreApplication::translate("KZQ_ReportGeneration", "\350\207\263\357\274\232E", nullptr));
        label_3->setText(QCoreApplication::translate("KZQ_ReportGeneration", "\351\224\241\350\206\217\345\215\260\345\210\267\346\200\273\345\233\276\346\226\207\344\273\266\345\244\271\350\267\257\345\276\204", nullptr));
        pushButton->setText(QCoreApplication::translate("KZQ_ReportGeneration", "\351\200\211\346\213\251\346\226\207\344\273\266\345\244\271", nullptr));
        label_4->setText(QCoreApplication::translate("KZQ_ReportGeneration", "\346\223\215\344\275\234\344\272\272\345\221\230", nullptr));
        label_5->setText(QCoreApplication::translate("KZQ_ReportGeneration", "\347\241\256\350\256\244\344\272\272", nullptr));
        label_6->setText(QCoreApplication::translate("KZQ_ReportGeneration", "\344\270\211\351\230\262\346\243\200\346\265\213\346\200\273\345\233\276\346\226\207\344\273\266\345\244\271\350\267\257\345\276\204", nullptr));
        pushButton_2->setText(QCoreApplication::translate("KZQ_ReportGeneration", "\351\200\211\346\213\251\346\226\207\344\273\266\345\244\271", nullptr));
        label_7->setText(QCoreApplication::translate("KZQ_ReportGeneration", "\346\223\215\344\275\234\344\272\272\345\221\230", nullptr));
        label_8->setText(QCoreApplication::translate("KZQ_ReportGeneration", "\347\241\256\350\256\244\344\272\272", nullptr));
        label_11->setText(QCoreApplication::translate("KZQ_ReportGeneration", "\346\225\243\347\203\255\350\203\266\346\200\273\345\233\276\346\226\207\344\273\266\345\244\271\350\267\257\345\276\204", nullptr));
        pushButton_3->setText(QCoreApplication::translate("KZQ_ReportGeneration", "\351\200\211\346\213\251\346\226\207\344\273\266\345\244\271", nullptr));
        label_10->setText(QCoreApplication::translate("KZQ_ReportGeneration", "\346\223\215\344\275\234\344\272\272\345\221\230", nullptr));
        label_9->setText(QCoreApplication::translate("KZQ_ReportGeneration", "\347\241\256\350\256\244\344\272\272", nullptr));
        label_14->setText(QCoreApplication::translate("KZQ_ReportGeneration", "\345\257\206\345\260\201\350\203\266\346\200\273\345\233\276\346\226\207\344\273\266\345\244\271\350\267\257\345\276\204", nullptr));
        pushButton_4->setText(QCoreApplication::translate("KZQ_ReportGeneration", "\351\200\211\346\213\251\346\226\207\344\273\266\345\244\271", nullptr));
        label_13->setText(QCoreApplication::translate("KZQ_ReportGeneration", "\346\223\215\344\275\234\344\272\272\345\221\230", nullptr));
        label_12->setText(QCoreApplication::translate("KZQ_ReportGeneration", "\347\241\256\350\256\244\344\272\272", nullptr));
        label_17->setText(QCoreApplication::translate("KZQ_ReportGeneration", "\351\200\217\346\260\224\351\230\200\345\256\211\350\243\205\346\200\273\345\233\276\346\226\207\344\273\266\345\244\271\350\267\257\345\276\204", nullptr));
        pushButton_5->setText(QCoreApplication::translate("KZQ_ReportGeneration", "\351\200\211\346\213\251\346\226\207\344\273\266\345\244\271", nullptr));
        label_16->setText(QCoreApplication::translate("KZQ_ReportGeneration", "\346\223\215\344\275\234\344\272\272\345\221\230", nullptr));
        label_15->setText(QCoreApplication::translate("KZQ_ReportGeneration", "\347\241\256\350\256\244\344\272\272", nullptr));
        pushButton_7->setText(QCoreApplication::translate("KZQ_ReportGeneration", "\347\224\237\346\210\220", nullptr));
        pushButton_6->setText(QCoreApplication::translate("KZQ_ReportGeneration", "\344\277\256\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KZQ_ReportGeneration: public Ui_KZQ_ReportGeneration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KZQ_REPORTGENERATION_H
