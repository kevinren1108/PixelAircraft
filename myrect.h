#ifndef MYRECT_H
#define MYRECT_H
#include <QObject>
#include <QGraphicsRectItem>

class myRect: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    void keyPressEvent(QKeyEvent *event);
public slots:
    void spawn();
};


#endif // MYRECT_H
