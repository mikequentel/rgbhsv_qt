/********************************************************************************
** Form generated from reading UI file 'rgbhsv_qt.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RGBHSV_QT_H
#define UI_RGBHSV_QT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSlider>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGroupBox *groupBox_rgb;
    QSlider *horizontalSlider_r;
    QSlider *horizontalSlider_g;
    QSlider *horizontalSlider_b;
    QLabel *label_r;
    QLabel *label_g;
    QLabel *label_b;
    QGroupBox *groupBox_hsv;
    QSlider *horizontalSlider_h;
    QSlider *horizontalSlider_s;
    QSlider *horizontalSlider_v;
    QLabel *label_h;
    QLabel *label_s;
    QLabel *label_v;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(476, 355);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(110, 238, 142, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        Dialog->setPalette(palette);
        Dialog->setAutoFillBackground(false);
        groupBox_rgb = new QGroupBox(Dialog);
        groupBox_rgb->setObjectName(QString::fromUtf8("groupBox_rgb"));
        groupBox_rgb->setGeometry(QRect(20, 150, 211, 191));
        groupBox_rgb->setFlat(false);
        groupBox_rgb->setCheckable(false);
        horizontalSlider_r = new QSlider(groupBox_rgb);
        horizontalSlider_r->setObjectName(QString::fromUtf8("horizontalSlider_r"));
        horizontalSlider_r->setGeometry(QRect(11, 41, 170, 28));
        horizontalSlider_r->setOrientation(Qt::Horizontal);
        horizontalSlider_g = new QSlider(groupBox_rgb);
        horizontalSlider_g->setObjectName(QString::fromUtf8("horizontalSlider_g"));
        horizontalSlider_g->setGeometry(QRect(10, 140, 170, 28));
        horizontalSlider_g->setOrientation(Qt::Horizontal);
        horizontalSlider_b = new QSlider(groupBox_rgb);
        horizontalSlider_b->setObjectName(QString::fromUtf8("horizontalSlider_b"));
        horizontalSlider_b->setGeometry(QRect(10, 90, 170, 28));
        horizontalSlider_b->setOrientation(Qt::Horizontal);
        label_r = new QLabel(groupBox_rgb);
        label_r->setObjectName(QString::fromUtf8("label_r"));
        label_r->setGeometry(QRect(50, 60, 62, 20));
        label_g = new QLabel(groupBox_rgb);
        label_g->setObjectName(QString::fromUtf8("label_g"));
        label_g->setGeometry(QRect(50, 110, 62, 20));
        label_b = new QLabel(groupBox_rgb);
        label_b->setObjectName(QString::fromUtf8("label_b"));
        label_b->setGeometry(QRect(50, 160, 62, 20));
        groupBox_hsv = new QGroupBox(Dialog);
        groupBox_hsv->setObjectName(QString::fromUtf8("groupBox_hsv"));
        groupBox_hsv->setGeometry(QRect(260, 150, 211, 191));
        groupBox_hsv->setFlat(false);
        groupBox_hsv->setCheckable(false);
        horizontalSlider_h = new QSlider(groupBox_hsv);
        horizontalSlider_h->setObjectName(QString::fromUtf8("horizontalSlider_h"));
        horizontalSlider_h->setGeometry(QRect(11, 41, 170, 28));
        horizontalSlider_h->setOrientation(Qt::Horizontal);
        horizontalSlider_s = new QSlider(groupBox_hsv);
        horizontalSlider_s->setObjectName(QString::fromUtf8("horizontalSlider_s"));
        horizontalSlider_s->setGeometry(QRect(10, 140, 170, 28));
        horizontalSlider_s->setOrientation(Qt::Horizontal);
        horizontalSlider_v = new QSlider(groupBox_hsv);
        horizontalSlider_v->setObjectName(QString::fromUtf8("horizontalSlider_v"));
        horizontalSlider_v->setGeometry(QRect(10, 90, 170, 28));
        horizontalSlider_v->setOrientation(Qt::Horizontal);
        label_h = new QLabel(groupBox_hsv);
        label_h->setObjectName(QString::fromUtf8("label_h"));
        label_h->setGeometry(QRect(50, 60, 62, 20));
        label_s = new QLabel(groupBox_hsv);
        label_s->setObjectName(QString::fromUtf8("label_s"));
        label_s->setGeometry(QRect(50, 110, 62, 20));
        label_v = new QLabel(groupBox_hsv);
        label_v->setObjectName(QString::fromUtf8("label_v"));
        label_v->setGeometry(QRect(50, 160, 62, 20));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Colour Demo", 0, QApplication::UnicodeUTF8));
        groupBox_rgb->setTitle(QApplication::translate("Dialog", "RGB", 0, QApplication::UnicodeUTF8));
        label_r->setText(QApplication::translate("Dialog", "R = ", 0, QApplication::UnicodeUTF8));
        label_g->setText(QApplication::translate("Dialog", "G =", 0, QApplication::UnicodeUTF8));
        label_b->setText(QApplication::translate("Dialog", "B = ", 0, QApplication::UnicodeUTF8));
        groupBox_hsv->setTitle(QApplication::translate("Dialog", "HSV", 0, QApplication::UnicodeUTF8));
        label_h->setText(QApplication::translate("Dialog", "H = ", 0, QApplication::UnicodeUTF8));
        label_s->setText(QApplication::translate("Dialog", "S = ", 0, QApplication::UnicodeUTF8));
        label_v->setText(QApplication::translate("Dialog", "V = ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RGBHSV_QT_H
