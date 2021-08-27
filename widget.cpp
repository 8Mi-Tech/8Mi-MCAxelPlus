#include "widget.h"
#include "ui_widget.h"
#include <DMessageBox>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    QMessageBox::about(this, "不知道该说啥", "给您表演劈个叉吧（doge）");

}

