#include <QApplication>
#include <QPushButton> //Creates a clickable button
#include "MainWindow.h"
#include "portaudio.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    MainWindow mainWindow;
    mainWindow.show();
    return app.exec();


}
