#include <iostream>
#include <QMessageBox>
#include <string>
#include "proxyview.h"
#include "ui_proxyview.h"

using namespace std;

ProxyView::ProxyView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ProxyView)
{
    ui->setupUi(this);
    this->setFixedSize(400,300);
    starting();
}

ProxyView::~ProxyView()
{
    delete ui;
}

void ProxyView::starting(){
    ui->line_port->setValidator(new QIntValidator(0,999999999,this));
}

void ProxyView::on_applyProxyButton_clicked()
{
    string proxy=ui->line_proxy->text().toUtf8().constData();
    string port=ui->line_port->text().toUtf8().constData();
    pproxy.removeProxy(cout);
    pproxy.manualProxy(cout,proxy,port);

    QMessageBox pop(this);
    pop.setText("Done..");
    pop.setStandardButtons(QMessageBox::Ok);
    pop.exec();

}

void ProxyView::on_torProxyButton_clicked()
{
    pproxy.removeProxy(cout);
    pproxy.torProxy(cout);

    QMessageBox pop(this);
    pop.setText("Done.., Please make sure you have privoxy and tor running <b>PROPERLY</b>");
    pop.setStandardButtons(QMessageBox::Ok);
    pop.exec();
}

void ProxyView::on_removeProxyButton_clicked()
{
    pproxy.removeProxy(cout);

    QMessageBox pop(this);
    pop.setText("<b>Removed Proxy</b>");
    pop.setStandardButtons(QMessageBox::Ok);
    pop.exec();
}
