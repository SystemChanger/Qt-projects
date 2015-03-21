#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;
    double  result;

public slots:
    void onClicked();
    void showResult();
private slots:
    void on_comboBox_activated(int index);
    void on_lineEdit_cursorPositionChanged(int arg1, int arg2);
};

#endif // WIDGET_H
