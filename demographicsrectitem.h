#ifndef DEMOGRAPHICSRECTITEM_H
#define DEMOGRAPHICSRECTITEM_H

#include <QGraphicsItem>
#include <QBrush>


class DemoGraphicsRectItem : public QObject, public QGraphicsRectItem
{
public:
    DemoGraphicsRectItem(qreal x, qreal y, qreal width, qreal height);

protected:
    void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);
};

#endif // DEMOGRAPHICSRECTITEM_H
