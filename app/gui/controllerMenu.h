#pragma once
#include <QObject>

class ControllerMenu : public QObject {
    Q_OBJECT
public:
    explicit ControllerMenu(QObject *parent = nullptr);

    Q_INVOKABLE void enableMouseMode();
    Q_INVOKABLE void disconnect();

signals:
    void showControllerMenuRequested();  // <-- Add this line
};
