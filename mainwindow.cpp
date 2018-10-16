#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    populateScene();
    ui->graphicsView->setScene(this->scene);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::populateScene()
{
    // Create the gaphics scene and set the background to light gray
    scene = new QGraphicsScene(this);
    scene->setBackgroundBrush(Qt::lightGray);

    // Specify number of items in x and y
    int numItemsX = 1000;
    int numItemsY = 1000;

    // Add all the items to the scene as blue rectangles
    for (int i = 0; i < numItemsX; ++i)
    {
        for (int j = 0; j < numItemsY; ++j)
        {
            DemoGraphicsRectItem *item = new DemoGraphicsRectItem( i*12.0, j*12.0, 10, 7.0);
            item->setCacheMode(QGraphicsItem::ItemCoordinateCache);
            item->setBrush(Qt::blue);
            scene->addItem(item);
        }
    }
}
