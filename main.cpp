#include <QApplication>
#include <QGraphicsScene>
#include <MyShot.h>
#include <QGraphicsView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    QGraphicsScene * scene = new QGraphicsScene();

    MyShot * rect = new MyShot ();
    rect->setRect(0,0,100,100);


    scene->addItem(rect);

    //foucousble
    rect->setFlag(QGraphicsItem :: ItemIsFocusable);
    rect->setFocus();

    //set view
    QGraphicsView * view = new QGraphicsView(scene);
    view->show();


    return a.exec();
}
