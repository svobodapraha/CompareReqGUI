#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //set version
    a.setApplicationVersion(APP_VERSION);

    MainWindow w(a.arguments());
    if(!w.boBatchProcessing)w.show();

    return a.exec();
}
