#include <QApplication>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QLabel>
#include <QString>
#include <exit.h>






int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    lineEdit *l = new lineEdit;
    l->show(); 
    return app.exec();
}


