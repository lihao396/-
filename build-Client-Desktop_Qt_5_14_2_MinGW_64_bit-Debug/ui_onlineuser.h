/********************************************************************************
** Form generated from reading UI file 'onlineuser.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ONLINEUSER_H
#define UI_ONLINEUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OnlineUser
{
public:
    QHBoxLayout *horizontalLayout;
    QListWidget *onlineUser_LW;

    void setupUi(QWidget *OnlineUser)
    {
        if (OnlineUser->objectName().isEmpty())
            OnlineUser->setObjectName(QString::fromUtf8("OnlineUser"));
        OnlineUser->resize(342, 291);
        horizontalLayout = new QHBoxLayout(OnlineUser);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        onlineUser_LW = new QListWidget(OnlineUser);
        onlineUser_LW->setObjectName(QString::fromUtf8("onlineUser_LW"));

        horizontalLayout->addWidget(onlineUser_LW);


        retranslateUi(OnlineUser);

        QMetaObject::connectSlotsByName(OnlineUser);
    } // setupUi

    void retranslateUi(QWidget *OnlineUser)
    {
        OnlineUser->setWindowTitle(QCoreApplication::translate("OnlineUser", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OnlineUser: public Ui_OnlineUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONLINEUSER_H
