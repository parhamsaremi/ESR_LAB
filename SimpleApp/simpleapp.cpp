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

