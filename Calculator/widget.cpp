#include "widget.h"
#include "ui_widget.h"
#include <cmath>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this, SLOT(onClicked()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::onClicked()
{
    if (ui->comboBox->currentText() == "+")
    {
        double addendum1, addendum2;
        addendum1 = ui->lineEdit->text().toDouble();
        addendum2 = ui->lineEdit_2->text().toDouble();

        result = addendum1 + addendum2;
        showResult();
    }

    if (ui->comboBox->currentText() == "-")
    {
        double addendum1, addendum2;
        addendum1 = ui->lineEdit->text().toDouble();
        addendum2 = ui->lineEdit_2->text().toDouble();

        result = addendum1 - addendum2;
        showResult();
    }

    if (ui->comboBox->currentText() == "*")
    {
        double addendum1, addendum2;
        addendum1 = ui->lineEdit->text().toDouble();
        addendum2 = ui->lineEdit_2->text().toDouble();

        result = addendum1 * addendum2;
        showResult();
    }

    if (ui->comboBox->currentText() == "/")
    {
        double addendum1, addendum2;
        addendum1 = ui->lineEdit->text().toDouble();
        addendum2 = ui->lineEdit_2->text().toDouble();

        result = addendum1 / addendum2;
        showResult();
    }

    if (ui->comboBox->currentText() == "sin")
    {
        double addendum2;
        addendum2 = ui->lineEdit_2->text().toDouble();

        result = sin(addendum2);
        showResult();
    }

    if (ui->comboBox->currentText() == "cos")
    {
        double addendum2;
        addendum2 = ui->lineEdit_2->text().toDouble();

        result = cos(addendum2);
        showResult();
    }

    if (ui->comboBox->currentText() == "tg")
    {
        double addendum2;
        addendum2 = ui->lineEdit_2->text().toDouble();

        result = tan(addendum2);
        showResult();
    }

    if (ui->comboBox->currentText() == "ctg")
    {
        double addendum2;
        addendum2 = ui->lineEdit_2->text().toDouble();

        result = 1/tan(addendum2);
        showResult();
    }

    if (ui->comboBox->currentText() == "^")
    {
        double addendum1, addendum2;
        addendum1 = ui->lineEdit->text().toDouble();
        addendum2 = ui->lineEdit_2->text().toDouble();

        result = pow(addendum1,addendum2);
        showResult();
    }

    if (ui->comboBox->currentText() == "√")
    {
        double addendum2;
        addendum2 = ui->lineEdit_2->text().toDouble();

        result = sqrt(addendum2);
        showResult();
    }
}

void Widget::showResult()
{
    ui->textBrowser->setText(QString::number(result));
}


void Widget::on_comboBox_activated(int index)
{
    if (index == 5 || index == 6 || index == 7 || index == 8 || index == 9 || index == 10)
        ui->lineEdit->setEnabled(false);
    else
        ui->lineEdit->setEnabled(true);

    ui->textBrowser->setText(" ");
}
