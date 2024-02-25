#include "Квадрат.h"
#include <cmath>
#include<windows.h>
#include<iostream>
double Square::getSideLength() const {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double Square::getArea() const {
    double side = getSideLength();
    return side * side;
}

double Square::getPerimeter() const {
    return 4 * getSideLength();
}

void Square::setCoordinates(double x1, double y1, double x2, double y2) {
    // Встановлюємо координати головної діагоналі, перевіряючи коректність
    this->x1 = x1;
    this->y1 = y1;
    this->x2 = x2;
    this->y2 = y2;
}

void Square::getCoordinates(double& x1, double& y1, double& x2, double& y2) const {
    // Повертаємо координати головної діагоналі
    x1 = this->x1;
    y1 = this->y1;
    x2 = this->x2;
    y2 = this->y2;
}