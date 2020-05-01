#include "myicon.hpp"

MyIcon::MyIcon(QObject *parent) : QObject(parent)
{
    
}

void MyIcon::setIcons(QList<QAction *> &actList, bool isDark)
{
    QIcon icon;
    if (isDark) {
        icon.addFile(QString::fromUtf8(
                         ":/breeze-icons-master/icons-dark/actions/32/document-open.svg"),
                     QSize(),
                     QIcon::Normal,
                     QIcon::Off);
        actList.at(0)->setIcon(icon);
        icon.addFile(QString::fromUtf8(
                         ":/breeze-icons-master/icons-dark/actions/32/trim-to-selection.svg"),
                     QSize(),
                     QIcon::Normal,
                     QIcon::Off);
        actList.at(0)->setIcon(icon);
        icon.addFile(QString::fromUtf8(":/breeze-icons-master/icons-dark/actions/32/edit-undo.svg"),
                     QSize(),
                     QIcon::Normal,
                     QIcon::Off);
        actList.at(0)->setIcon(icon);
        icon.addFile(QString::fromUtf8(":/breeze-icons-master/icons-dark/actions/32/edit-redo.svg"),
                     QSize(),
                     QIcon::Normal,
                     QIcon::Off);
        actList.at(0)->setIcon(icon);
        icon.addFile(QString::fromUtf8(
                         ":/breeze-icons-master/icons-dark/actions/32/zoom-fit-best.svg"),
                     QSize(),
                     QIcon::Normal,
                     QIcon::Off);
        actList.at(0)->setIcon(icon);
        icon.addFile(QString::fromUtf8(":/breeze-icons-master/icons-dark/actions/32/zoom-in.svg"),
                     QSize(),
                     QIcon::Normal,
                     QIcon::Off);
        actList.at(0)->setIcon(icon);
        icon.addFile(QString::fromUtf8(":/breeze-icons-master/icons-dark/actions/32/zoom-out.svg"),
                     QSize(),
                     QIcon::Normal,
                     QIcon::Off);
        actList.at(0)->setIcon(icon);
        icon.addFile(QString::fromUtf8(
                         ":/breeze-icons-master/icons-dark/actions/32/document-new.svg"),
                     QSize(),
                     QIcon::Normal,
                     QIcon::Off);
        actList.at(0)->setIcon(icon);
        icon.addFile(QString::fromUtf8(
                         ":/breeze-icons-master/icons-dark/actions/32/document-close.svg"),
                     QSize(),
                     QIcon::Normal,
                     QIcon::Off);
        actList.at(0)->setIcon(icon);
        icon.addFile(
            QString::fromUtf8(
                ":/breeze-icons-master/icons-dark/actions/32/document-edit-decrypt-verify.svg"),
            QSize(),
            QIcon::Normal,
            QIcon::Off);
        actList.at(0)->setIcon(icon);
        icon.addFile(QString::fromUtf8(
                         ":/breeze-icons-master/icons-dark/actions/32/view-refresh.svg"),
                     QSize(),
                     QIcon::Normal,
                     QIcon::Off);
        actList.at(0)->setIcon(icon);
    } else {
        icon.addFile(QString::fromUtf8(":/breeze-icons-master/icons/actions/32/document-open.svg"),
                     QSize(),
                     QIcon::Normal,
                     QIcon::Off);
        actList.at(0)->setIcon(icon);
        icon.addFile(QString::fromUtf8(
                         ":/breeze-icons-master/icons/actions/32/trim-to-selection.svg"),
                     QSize(),
                     QIcon::Normal,
                     QIcon::Off);
        actList.at(0)->setIcon(icon);
        icon.addFile(QString::fromUtf8(":/breeze-icons-master/icons/actions/32/edit-undo.svg"),
                     QSize(),
                     QIcon::Normal,
                     QIcon::Off);
        actList.at(0)->setIcon(icon);
        icon.addFile(QString::fromUtf8(":/breeze-icons-master/icons/actions/32/edit-redo.svg"),
                     QSize(),
                     QIcon::Normal,
                     QIcon::Off);
        actList.at(0)->setIcon(icon);
        icon.addFile(QString::fromUtf8(":/breeze-icons-master/icons/actions/32/zoom-fit-best.svg"),
                     QSize(),
                     QIcon::Normal,
                     QIcon::Off);
        actList.at(0)->setIcon(icon);
        icon.addFile(QString::fromUtf8(":/breeze-icons-master/icons/actions/32/zoom-in.svg"),
                     QSize(),
                     QIcon::Normal,
                     QIcon::Off);
        actList.at(0)->setIcon(icon);
        icon.addFile(QString::fromUtf8(":/breeze-icons-master/icons/actions/32/zoom-out.svg"),
                     QSize(),
                     QIcon::Normal,
                     QIcon::Off);
        actList.at(0)->setIcon(icon);
        icon.addFile(QString::fromUtf8(":/breeze-icons-master/icons/actions/32/document-new.svg"),
                     QSize(),
                     QIcon::Normal,
                     QIcon::Off);
        actList.at(0)->setIcon(icon);
        icon.addFile(QString::fromUtf8(":/breeze-icons-master/icons/actions/32/document-close.svg"),
                     QSize(),
                     QIcon::Normal,
                     QIcon::Off);
        actList.at(0)->setIcon(icon);
        icon.addFile(QString::fromUtf8(
                         ":/breeze-icons-master/icons/actions/32/document-edit-decrypt-verify.svg"),
                     QSize(),
                     QIcon::Normal,
                     QIcon::Off);
        actList.at(0)->setIcon(icon);
        icon.addFile(QString::fromUtf8(":/breeze-icons-master/icons/actions/32/view-refresh.svg"),
                     QSize(),
                     QIcon::Normal,
                     QIcon::Off);
        actList.at(0)->setIcon(icon);
    }
}