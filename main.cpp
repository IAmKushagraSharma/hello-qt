#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("TDA QT App Mark 1");
    w.resize(400, 300);
    w.show();
    return a.exec();
}
