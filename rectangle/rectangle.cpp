#include "rectangle.h"

int abs(int, int);
bool Rectangle::isOverlap(Rectangle* rec1, Rectangle* rec2)
{
    if ((rec1->x <= rec2->x) && (rec1->y <= rec2->y) &&
        (rec2->x - rec1->x < rec1->width) && (rec2->y - rec1->y < rec1->height)) return true;
    else if ((rec2->x <= rec1->x) && (rec2->y <= rec1->y) &&
            (rec1->x - rec2->x < rec2->width) && (rec1->y - rec2->y < rec2->height)) return true;
    else return false;
}
