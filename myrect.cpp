#include "myRect.h"
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QDebug>
#include "bullet.h"
#include "enemy.h"

void myRect::keyPressEvent(QKeyEvent *event)
{
    //qDebug() << "My Rect knows that you press a key";
    if(event->key() == Qt::Key_Left)
    {
        if(pos().x() > 0)
        {
        setPos(x()-10,y());
        }
    }
    else if(event->key() == Qt::Key_Right)
    {
        if(pos().x()  < 100 )
        {
        setPos(x()+10,y());
        }
    }
    /*else if(event->key() == Qt::Key_Up)
    {
        setPos(x(),y()-10);
    }
    else if(event->key() == Qt::Key_Down)
    {
        setPos(x(),y()+10);
    }*/
    else if(event->key() == Qt::Key_Space)
    {
       // create a bullet
        Bullet * bullet = new Bullet();
        bullet->setPos(x(),y());
        scene()->addItem(bullet);
    }
}

void myRect::spawn()
{
    Enemy * enemy = new Enemy();
    scene()->addItem(enemy);
}
