#ifndef MYSHOT
#define MYSHOT

#include <QGraphicsRectItem>

class MyShot : public QGraphicsRectItem
{

public:
    void keyPressEvent(QKeyEvent * event);
};

#endif // MYSHOT

