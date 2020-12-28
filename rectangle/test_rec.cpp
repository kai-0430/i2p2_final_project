#include "rectangle.h"
#include <iostream>

int main(void)
{
    Rectangle *rec1, *rec2, *rec3, *rec4, *rec5;
    rec1 = new Rectangle {1, 1, 3, 4};
    rec2 = new Rectangle {2, 1, 3, 4};
    rec3 = new Rectangle {4, 1, 4, 4};  // touch
    rec4 = new Rectangle {2, 4, 3, 4}; 
    rec5 = new Rectangle {2, 5, 4, 4};
    std::cout << Rectangle::isOverlap(rec1, rec2) << std::endl;
    std::cout << Rectangle::isOverlap(rec1, rec3) << std::endl;
    std::cout << Rectangle::isOverlap(rec3, rec1) << std::endl;
    std::cout << Rectangle::isOverlap(rec1, rec4) << std::endl;
    std::cout << Rectangle::isOverlap(rec1, rec5) << std::endl;
    std::cout << Rectangle::isOverlap(rec5, rec1) << std::endl;

    return 0;
}