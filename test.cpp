#include <iostream>

class Point {
public:
    int x, y;

    Point(int x, int y) : x(x), y(y) {}

    // Overload the + operator
    Point operator*(const Point& other) const {
        return Point(x + other.x, y + other.y);
    }
};

int main() {
    Point p1(1, 2);
    Point p2(3, 4);
    Point p3 = p1 * p2; // Uses the overloaded + operator

    std::cout << "p3: (" << p3.x << ", " << p3.y << ")" << std::endl;
    return 0;
}