This project is a quick demonstration of how to use the Qt Graphics View Framework to draw one million shapes.  This example draws a 1000 by 1000 grid of blue rectangles on a gray background.  The color of a rectangle changes to white when the mouse overs over it.

Files in this project:
QGraphicsView.pro          - qmake build file
demographicsrectitem.h/cpp - subclass of QGraphicsRectItem that supports changing color when moused over
mainwindow.h/cpp           - contains the MainWindow class that defines an application containing a QGraphicsView
main.cpp                   - contains main() method that launches the qt application
mainwindow.ui              - xml file that describes mainwindow.  Created using QtDesigner/QtCreator

Build Instructions (tested with Qt 5.9.3 on Windows 10)
1. Open GraphicsView.pro with QtCreator
2. Ensure that a release build is selected on the project tab
3. Press F5 to build and run the project
