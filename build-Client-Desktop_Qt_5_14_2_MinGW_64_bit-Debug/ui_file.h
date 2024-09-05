/********************************************************************************
** Form generated from reading UI file 'file.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILE_H
#define UI_FILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_File
{
public:
    QHBoxLayout *horizontalLayout;
    QListWidget *file_LW;
    QGridLayout *gridLayout;
    QPushButton *flushFile_PB;
    QPushButton *return_PB;
    QPushButton *mkDir_PB;
    QPushButton *renameFile_PB;
    QPushButton *delDirFile_PB;
    QPushButton *shareFile_PB;
    QPushButton *delFile_PB;
    QPushButton *download_PB;
    QPushButton *mvFile_PB;
    QPushButton *upload_PB;

    void setupUi(QWidget *File)
    {
        if (File->objectName().isEmpty())
            File->setObjectName(QString::fromUtf8("File"));
        File->resize(383, 292);
        horizontalLayout = new QHBoxLayout(File);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 5, 0);
        file_LW = new QListWidget(File);
        file_LW->setObjectName(QString::fromUtf8("file_LW"));
        file_LW->setFrameShape(QFrame::NoFrame);

        horizontalLayout->addWidget(file_LW);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        flushFile_PB = new QPushButton(File);
        flushFile_PB->setObjectName(QString::fromUtf8("flushFile_PB"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(flushFile_PB->sizePolicy().hasHeightForWidth());
        flushFile_PB->setSizePolicy(sizePolicy);
        flushFile_PB->setMinimumSize(QSize(0, 50));
        flushFile_PB->setSizeIncrement(QSize(0, 0));

        gridLayout->addWidget(flushFile_PB, 0, 0, 1, 1);

        return_PB = new QPushButton(File);
        return_PB->setObjectName(QString::fromUtf8("return_PB"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(return_PB->sizePolicy().hasHeightForWidth());
        return_PB->setSizePolicy(sizePolicy1);
        return_PB->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(return_PB, 0, 1, 1, 1);

        mkDir_PB = new QPushButton(File);
        mkDir_PB->setObjectName(QString::fromUtf8("mkDir_PB"));
        mkDir_PB->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(mkDir_PB, 1, 0, 1, 1);

        renameFile_PB = new QPushButton(File);
        renameFile_PB->setObjectName(QString::fromUtf8("renameFile_PB"));
        renameFile_PB->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(renameFile_PB, 1, 1, 1, 1);

        delDirFile_PB = new QPushButton(File);
        delDirFile_PB->setObjectName(QString::fromUtf8("delDirFile_PB"));
        delDirFile_PB->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(delDirFile_PB, 2, 0, 1, 1);

        shareFile_PB = new QPushButton(File);
        shareFile_PB->setObjectName(QString::fromUtf8("shareFile_PB"));
        shareFile_PB->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(shareFile_PB, 2, 1, 1, 1);

        delFile_PB = new QPushButton(File);
        delFile_PB->setObjectName(QString::fromUtf8("delFile_PB"));
        delFile_PB->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(delFile_PB, 3, 0, 1, 1);

        download_PB = new QPushButton(File);
        download_PB->setObjectName(QString::fromUtf8("download_PB"));
        download_PB->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(download_PB, 3, 1, 1, 1);

        mvFile_PB = new QPushButton(File);
        mvFile_PB->setObjectName(QString::fromUtf8("mvFile_PB"));
        mvFile_PB->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(mvFile_PB, 4, 0, 1, 1);

        upload_PB = new QPushButton(File);
        upload_PB->setObjectName(QString::fromUtf8("upload_PB"));
        upload_PB->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(upload_PB, 4, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        retranslateUi(File);

        QMetaObject::connectSlotsByName(File);
    } // setupUi

    void retranslateUi(QWidget *File)
    {
        File->setWindowTitle(QCoreApplication::translate("File", "Form", nullptr));
        flushFile_PB->setText(QCoreApplication::translate("File", "\345\210\267\346\226\260\346\226\207\344\273\266", nullptr));
        return_PB->setText(QCoreApplication::translate("File", "\350\277\224\345\233\236\344\270\212\344\270\200\347\272\247", nullptr));
        mkDir_PB->setText(QCoreApplication::translate("File", "\345\210\233\345\273\272\346\226\207\344\273\266\345\244\271", nullptr));
        renameFile_PB->setText(QCoreApplication::translate("File", "\351\207\215\345\221\275\345\220\215", nullptr));
        delDirFile_PB->setText(QCoreApplication::translate("File", "\345\210\240\351\231\244\346\226\207\344\273\266\345\244\271", nullptr));
        shareFile_PB->setText(QCoreApplication::translate("File", "\345\210\206\344\272\253\346\226\207\344\273\266", nullptr));
        delFile_PB->setText(QCoreApplication::translate("File", "\345\210\240\351\231\244\346\226\207\344\273\266", nullptr));
        download_PB->setText(QCoreApplication::translate("File", "\344\270\213\350\275\275\346\226\207\344\273\266", nullptr));
        mvFile_PB->setText(QCoreApplication::translate("File", "\347\247\273\345\212\250\346\226\207\344\273\266", nullptr));
        upload_PB->setText(QCoreApplication::translate("File", "\344\270\212\344\274\240\346\226\207\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class File: public Ui_File {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILE_H
