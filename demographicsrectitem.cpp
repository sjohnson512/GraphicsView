#include "demographicsrectitem.h"

DemoGraphicsRectItem::DemoGraphicsRectItem(qreal x, qreal y, qreal width, qreal height) :
    QGraphicsRectItem(x,y,width,height)
{
    setAcceptHoverEvents(true);
}

void DemoGraphicsRectItem::hoverEnterEvent(QGraphicsSceneHoverEvent *event)
{
    // Change the color to white when the mouse enters
    QBrush whiteBrush(Qt::white, Qt::SolidPattern);
    setBrush(QBrush(whiteBrush));
    update();

    // Pass the event to the base class
    QGraphicsRectItem::hoverEnterEvent(event);
}

void DemoGraphicsRectItem::hoverLeaveEvent(QGraphicsSceneHoverEvent *event)
{
    // Change the color back to blue when the mouse leaves
    QBrush blueBrush(Qt::blue, Qt::SolidPattern);
    setBrush(QBrush(blueBrush));
    update();

    // Pass the event to the base class
    QGraphicsRectItem::hoverLeaveEvent(event);
}
