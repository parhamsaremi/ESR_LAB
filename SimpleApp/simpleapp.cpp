#include "simpleapp.h"
#include "ui_simpleapp.h"

SimpleApp::SimpleApp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SimpleApp)
{
    ui->setupUi(this);
}

SimpleApp::~SimpleApp()
{
    delete ui;
}


void SimpleApp::on_pushButton_clicked()
{
    ui->textBrowser->setText("Hi this is groups 1&5:\nFateme Khashei 97101586\nSara Khosravi: 97101586\nParham Saremi: 97101959\n");
}


void SimpleApp::on_pushButton_2_clicked()
{
    ui->textBrowser->setText("");
}

