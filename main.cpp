#include <QApplication>
#include <QGraphicsScene>
#include "myRect.h"
#include <QGraphicsView>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QGraphicsScene * scene = new QGraphicsScene();
    myRect * rect = new myRect();
    rect->setRect(0,0,100,100);
    scene->addItem(rect);

    //make rect focusable
    rect->setFlag(QGraphicsItem::ItemIsFocusable);
    rect->setFocus();

    QGraphicsView * view = new QGraphicsView(scene);
    view->show();
    return a.exec();
}
