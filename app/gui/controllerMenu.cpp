#include "controllerMenu.h"
#include <QDebug>

ControllerMenu::ControllerMenu(QObject* parent) : QObject(parent) {}

void ControllerMenu::enableMouseMode() {
    qDebug() << "Mouse mode enabled!";
    // TODO: Call actual mouse mode logic
}

void ControllerMenu::disconnect() {
    qDebug() << "Disconnected from stream.";
    // TODO: Call actual stream disconnect logic
}
