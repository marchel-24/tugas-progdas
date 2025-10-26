#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.1416;

double distance_xy(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));  
}

double radius(double cx, double cy, double px, double py) {
    return distance_xy(cx, cy, px, py);
}

double circumference(double r) {
    return 2.0 * PI * r;
}

double area(double r) {
    return PI * r * r;
}

int main() {
    double cx, cy, px, py;
    cout << "Masukkan koordinat pusat lingkaran cx, cy: ";
    cin >> cx>> cy;
    cout << "Masukkan koordinat sebuah titik pada keliling px, py: ";
    cin >> px >> py;

    double r  = radius(cx, cy, px, py);
    double d  = 2.0 * r;               
    double c  = circumference(r);      
    double A  = area(r);               

    cout << "\nHasil perhitungan:\n";
    cout << "Radius       : " << r << '\n';
    cout << "Diameter     : " << d << '\n';
    cout << "Circumference: " << c << '\n';
    cout << "Area         : " << A << '\n';

    return 0;
}
