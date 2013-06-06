/********************************************************************************
** Form generated from reading UI file 'explorer.ui'
**
** Created: Wed Jun 5 17:42:41 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPLORER_H
#define UI_EXPLORER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListView>
#include <QtGui/QTreeView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Explorer
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QTreeView *treeView;
    QListView *listView;

    void setupUi(QDialog *Explorer)
    {
        if (Explorer->objectName().isEmpty())
            Explorer->setObjectName(QString::fromUtf8("Explorer"));
        Explorer->resize(836, 334);
        widget = new QWidget(Explorer);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 10, 761, 311));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        treeView = new QTreeView(widget);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        horizontalLayout->addWidget(treeView);

        listView = new QListView(widget);
        listView->setObjectName(QString::fromUtf8("listView"));

        horizontalLayout->addWidget(listView);

        treeView->raise();
        listView->raise();
        listView->raise();

        retranslateUi(Explorer);

        QMetaObject::connectSlotsByName(Explorer);
    } // setupUi

    void retranslateUi(QDialog *Explorer)
    {
        Explorer->setWindowTitle(QApplication::translate("Explorer", "Explorer", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Explorer: public Ui_Explorer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPLORER_H
