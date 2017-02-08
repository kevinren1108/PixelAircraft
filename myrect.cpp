#include "myRect.h"
#include <QKeyEvent>
#include <QDebug>

void myRect::keyPressEvent(QKeyEvent *event)
{
    //qDebug() << "My Rect knows that you press a key";
    if(event->key() == Qt::Key_Left)
    {
        setPos(x()-10,y());
    }
    else if(event->key() == Qt::Key_Right)
    {
        setPos(x()+10,y());
    }
    else if(event->key() == Qt::Key_Up)
    {
        setPos(x(),y()-10);
    }
    else if(event->key() == Qt::Key_Down)
    {
        setPos(x(),y()+10);
    }
}
