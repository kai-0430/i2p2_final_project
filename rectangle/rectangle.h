#ifndef RECTANGLE_H_INCLUDE
#define RECTANGLE_H_INCLUDE

class Rectangle {
public:
    Rectangle() {}
    Rectangle(int x, int y, int w, int h) : x{x}, y{y}, width{w}, height{h} {}
    static bool isOverlap(Rectangle*, Rectangle*);      // static??
private:
    int x;   // x of the bottom left corner 
    int y;   // y of the bottom left corner
    int width;
    int height;
};


#endif