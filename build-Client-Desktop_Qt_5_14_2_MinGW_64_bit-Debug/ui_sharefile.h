/********************************************************************************
** Form generated from reading UI file 'sharefile.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHAREFILE_H
#define UI_SHAREFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShareFile
{
public:
    QHBoxLayout *horizontalLayout;
    QListWidget *onlineFriend_LW;
    QVBoxLayout *verticalLayout;
    QPushButton *allSelect_PB;
    QPushButton *cancelAllSelect_PB;
    QSpacerItem *verticalSpacer;
    QPushButton *ok_PB;

    void setupUi(QWidget *ShareFile)
    {
        if (ShareFile->objectName().isEmpty())
            ShareFile->setObjectName(QString::fromUtf8("ShareFile"));
        ShareFile->resize(400, 300);
        horizontalLayout = new QHBoxLayout(ShareFile);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        onlineFriend_LW = new QListWidget(ShareFile);
        onlineFriend_LW->setObjectName(QString::fromUtf8("onlineFriend_LW"));
        onlineFriend_LW->setSelectionMode(QAbstractItemView::MultiSelection);

        horizontalLayout->addWidget(onlineFriend_LW);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        allSelect_PB = new QPushButton(ShareFile);
        allSelect_PB->setObjectName(QString::fromUtf8("allSelect_PB"));

        verticalLayout->addWidget(allSelect_PB);

        cancelAllSelect_PB = new QPushButton(ShareFile);
        cancelAllSelect_PB->setObjectName(QString::fromUtf8("cancelAllSelect_PB"));

        verticalLayout->addWidget(cancelAllSelect_PB);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        ok_PB = new QPushButton(ShareFile);
        ok_PB->setObjectName(QString::fromUtf8("ok_PB"));

        verticalLayout->addWidget(ok_PB);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(ShareFile);

        QMetaObject::connectSlotsByName(ShareFile);
    } // setupUi

    void retranslateUi(QWidget *ShareFile)
    {
        ShareFile->setWindowTitle(QCoreApplication::translate("ShareFile", "Form", nullptr));
        allSelect_PB->setText(QCoreApplication::translate("ShareFile", "\345\205\250\351\200\211", nullptr));
        cancelAllSelect_PB->setText(QCoreApplication::translate("ShareFile", "\345\217\226\346\266\210\345\205\250\351\200\211", nullptr));
        ok_PB->setText(QCoreApplication::translate("ShareFile", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShareFile: public Ui_ShareFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHAREFILE_H
