import QtQuick 2.0
import QtQuick.Controls 2.2

Popup {
  id: controllerMenu
  width: 300
  modal: true
  focus: true

  background: Rectangle {
    color: "#CC000000"
    radius: 8
  }

  Column {
    anchors.centerIn: parent
    spacing: 12
    padding: 20

    Button {
      text: "Enable Mouse Mode"
      onClicked: ControllerMenu.enableMouseMode()
    }

    Button {
      text: "Disconnect Stream"
      onClicked: ControllerMenu.disconnect()
    }

    Button {
      text: "Cancel"
      onClicked: controllerMenu.close()
    }
  }
}