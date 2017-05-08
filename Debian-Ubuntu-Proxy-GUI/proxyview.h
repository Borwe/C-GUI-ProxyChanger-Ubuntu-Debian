#ifndef PROXYVIEW_H
#define PROXYVIEW_H
#include "proxier.h"

#include <QWidget>

namespace Ui {
class ProxyView;
}

class ProxyView : public QWidget
{
    Q_OBJECT

public:
    Proxify pproxy;
    explicit ProxyView(QWidget *parent = 0);
    ~ProxyView();

private slots:
    void on_applyProxyButton_clicked();

    void on_torProxyButton_clicked();

    void on_removeProxyButton_clicked();

private:
    Ui::ProxyView *ui;
    void starting();
};

#endif // PROXYVIEW_H
