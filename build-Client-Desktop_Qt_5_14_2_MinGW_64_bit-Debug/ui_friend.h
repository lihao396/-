/********************************************************************************
** Form generated from reading UI file 'friend.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRIEND_H
#define UI_FRIEND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Friend
{
public:
    QHBoxLayout *horizontalLayout;
    QListWidget *onlineFriend_LW;
    QVBoxLayout *verticalLayout;
    QPushButton *chat_PB;
    QPushButton *flushFriend_PB;
    QPushButton *delFriend_PB;
    QSpacerItem *verticalSpacer;
    QPushButton *findFriend_PB;
    QPushButton *online_PB;

    void setupUi(QWidget *Friend)
    {
        if (Friend->objectName().isEmpty())
            Friend->setObjectName(QString::fromUtf8("Friend"));
        Friend->resize(345, 293);
        horizontalLayout = new QHBoxLayout(Friend);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 5, 0);
        onlineFriend_LW = new QListWidget(Friend);
        onlineFriend_LW->setObjectName(QString::fromUtf8("onlineFriend_LW"));
        onlineFriend_LW->setFrameShape(QFrame::NoFrame);

        horizontalLayout->addWidget(onlineFriend_LW);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        chat_PB = new QPushButton(Friend);
        chat_PB->setObjectName(QString::fromUtf8("chat_PB"));

        verticalLayout->addWidget(chat_PB);

        flushFriend_PB = new QPushButton(Friend);
        flushFriend_PB->setObjectName(QString::fromUtf8("flushFriend_PB"));

        verticalLayout->addWidget(flushFriend_PB);

        delFriend_PB = new QPushButton(Friend);
        delFriend_PB->setObjectName(QString::fromUtf8("delFriend_PB"));

        verticalLayout->addWidget(delFriend_PB);

        verticalSpacer = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        findFriend_PB = new QPushButton(Friend);
        findFriend_PB->setObjectName(QString::fromUtf8("findFriend_PB"));

        verticalLayout->addWidget(findFriend_PB);

        online_PB = new QPushButton(Friend);
        online_PB->setObjectName(QString::fromUtf8("online_PB"));

        verticalLayout->addWidget(online_PB);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(Friend);

        QMetaObject::connectSlotsByName(Friend);
    } // setupUi

    void retranslateUi(QWidget *Friend)
    {
        Friend->setWindowTitle(QCoreApplication::translate("Friend", "Form", nullptr));
        chat_PB->setText(QCoreApplication::translate("Friend", "\350\201\212\345\244\251", nullptr));
        flushFriend_PB->setText(QCoreApplication::translate("Friend", "\345\210\267\346\226\260\347\224\250\346\210\267", nullptr));
        delFriend_PB->setText(QCoreApplication::translate("Friend", "\345\210\240\351\231\244\347\224\250\346\210\267", nullptr));
        findFriend_PB->setText(QCoreApplication::translate("Friend", "\346\237\245\346\211\276\347\224\250\346\210\267", nullptr));
        online_PB->setText(QCoreApplication::translate("Friend", "\345\234\250\347\272\277\347\224\250\346\210\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Friend: public Ui_Friend {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRIEND_H
