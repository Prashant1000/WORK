#ifndef __exit_h__
#define __exit_h__

#include <QApplication>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QLabel>
#include <QString>



class lineEdit : public QWidget
{
  Q_OBJECT

public:
  lineEdit(QWidget *parent = 0);

private slots:
  void my_handler(void);

private:
  QLabel *label;
  QLineEdit *linedit;
  QPushButton *button;
  QHBoxLayout *layout;
};

#endif
