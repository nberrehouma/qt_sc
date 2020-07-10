#include "mainwindow.h"
#include "systemc.h"
#include <QApplication>

int sc_main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
