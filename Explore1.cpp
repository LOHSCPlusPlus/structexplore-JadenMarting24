#include <iostream>
using namespace std;
struct Point {
    double x;
    double y;
};

int main() {
    // First instance of Point, named a
    Point a;
    a.x = 3;
    a.y = 9;
    // Second instance of Point, named b
    Point b;
    b.x = 4.5;
    b.y = 7.8;

    Point c;
    c.x = 7.9;
    c.y = 10.0;

    cout << "Point a: x = " << a.x << ", y = " << a.y << endl;
    cout << "Point b: x = " << b.x << ", y = " << b.y << endl;
    cout << "Point c: x = " << c.x << ", y = " << c.y << endl;

    // Add your changes here.

    return 0;
}


