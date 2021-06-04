
#include <iostream> #include <cmath> using namespace std; class Point {
public:
Point(int sid1, int sid2) {
x = sid1;
y = sid2; }
double distance() {
return sqrt(x * x + y * y);
} protected:
int x, y; };
class Circle : public Point { public:
Circle(int x, int y, int r) :Point(x, y) { radius = r;
}
double area() {
return 3.14 * radius * radius; }
protected: int radius;
};
class Cylinder : public Circle { public:
Cylinder(int x, int y, int r, int h) :Circle(x, y, r) {
height = h; }
double surfaceArea() {
return 2 * 3.14 * radius * height + 2 * 3.14 *
radius * radius; }
double volume() {
return 3.14 * radius * radius * height;
} private:
int height;
1
};
int main(){
Cylinder cylinder(1, 3, 4, 7); Circle circle(5, 15, 25);
Point point(6, 11);
cout << "Distance of point: " << point.distance() <<endl;
cout << "Area of circle: " << circle.area() << endl;
cout << "Surface area of cylinder: " << cylinder.surfaceArea() << endl;
cout << "Volume of cylinder: " << cylinder.volume()<< endl;
return 0; }
