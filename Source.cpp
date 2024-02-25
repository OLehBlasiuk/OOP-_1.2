#include <iostream>
#include " вадрат.h"
using namespace std;

int main() {
    Square square;

    double x1, y1, x2, y2;
    cout << "Enter coordinates of the main diagonal (x1 y1 x2 y2): ";
    cin >> x1 >> y1 >> x2 >> y2;

    square.setCoordinates(x1, y1, x2, y2);

    cout << "Side length: " << square.getSideLength() << endl;
    cout << "Area: " << square.getArea() << endl;
    cout << "Perimeter: " << square.getPerimeter() << endl;

    return 0;
}
