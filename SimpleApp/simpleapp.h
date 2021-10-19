#ifndef SIMPLEAPP_H
#define SIMPLEAPP_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class SimpleApp; }
QT_END_NAMESPACE

class SimpleApp : public QMainWindow
{
    Q_OBJECT

public:
    SimpleApp(QWidget *parent = nullptr);
    ~SimpleApp();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::SimpleApp *ui;
};
#endif // SIMPLEAPP_H
