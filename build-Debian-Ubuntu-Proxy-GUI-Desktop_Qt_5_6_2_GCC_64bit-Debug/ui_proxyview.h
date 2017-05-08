/********************************************************************************
** Form generated from reading UI file 'proxyview.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROXYVIEW_H
#define UI_PROXYVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProxyView
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *removeProxyButton;
    QPushButton *torProxyButton;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QLineEdit *line_proxy;
    QLineEdit *line_port;
    QPushButton *applyProxyButton;

    void setupUi(QWidget *ProxyView)
    {
        if (ProxyView->objectName().isEmpty())
            ProxyView->setObjectName(QStringLiteral("ProxyView"));
        ProxyView->resize(400, 300);
        label = new QLabel(ProxyView);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 160, 261, 41));
        QFont font;
        font.setPointSize(26);
        label->setFont(font);
        label_2 = new QLabel(ProxyView);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 210, 67, 17));
        label_3 = new QLabel(ProxyView);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(180, 210, 67, 17));
        widget = new QWidget(ProxyView);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 30, 351, 101));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        removeProxyButton = new QPushButton(widget);
        removeProxyButton->setObjectName(QStringLiteral("removeProxyButton"));

        verticalLayout->addWidget(removeProxyButton);

        torProxyButton = new QPushButton(widget);
        torProxyButton->setObjectName(QStringLiteral("torProxyButton"));

        verticalLayout->addWidget(torProxyButton);

        widget1 = new QWidget(ProxyView);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 230, 371, 29));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        line_proxy = new QLineEdit(widget1);
        line_proxy->setObjectName(QStringLiteral("line_proxy"));

        horizontalLayout->addWidget(line_proxy);

        line_port = new QLineEdit(widget1);
        line_port->setObjectName(QStringLiteral("line_port"));
        line_port->setToolTipDuration(4);

        horizontalLayout->addWidget(line_port);

        applyProxyButton = new QPushButton(widget1);
        applyProxyButton->setObjectName(QStringLiteral("applyProxyButton"));

        horizontalLayout->addWidget(applyProxyButton);


        retranslateUi(ProxyView);

        QMetaObject::connectSlotsByName(ProxyView);
    } // setupUi

    void retranslateUi(QWidget *ProxyView)
    {
        ProxyView->setWindowTitle(QApplication::translate("ProxyView", "ProxyView", 0));
        label->setText(QApplication::translate("ProxyView", "Manual Proxy:", 0));
        label_2->setText(QApplication::translate("ProxyView", "Proxy:", 0));
        label_3->setText(QApplication::translate("ProxyView", "Port:", 0));
        removeProxyButton->setText(QApplication::translate("ProxyView", "Remove Proxy", 0));
        torProxyButton->setText(QApplication::translate("ProxyView", "Use Tor Proxy", 0));
#ifndef QT_NO_TOOLTIP
        line_port->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        applyProxyButton->setText(QApplication::translate("ProxyView", "Apply Proxy", 0));
    } // retranslateUi

};

namespace Ui {
    class ProxyView: public Ui_ProxyView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROXYVIEW_H
