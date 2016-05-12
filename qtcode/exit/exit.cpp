#include "exit.h"




void lineEdit::my_handler()
{
    QString text = linedit->text();
    if ( text == "exit" )
    {
	this->close();
    }
}

lineEdit::lineEdit(QWidget *parent): QWidget(parent)
{
  label = new QLabel("Write");
  linedit = new QLineEdit;
  button = new QPushButton("Enter");
  layout = new QHBoxLayout;


  setWindowTitle("just a test, ha ha !!!");

  QObject::connect(button, SIGNAL(clicked()), this, SLOT(my_handler()));

  layout->addWidget(label);
  layout->addWidget(linedit);
  layout->addWidget(button);

  setLayout(layout);
}

