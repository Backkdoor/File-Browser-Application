#include <QApplication>

#include "window.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Window Mainwindow;
    Mainwindow.show();
    return app.exec();
}
