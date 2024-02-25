#pragma once
#include<windows.h>
#include<iostream>
class Square {
private:
    double x1, y1, x2, y2; // координати головної діагоналі

public:
    double getSideLength() const;
    double getArea() const;
    double getPerimeter() const;
    void setCoordinates(double x1, double y1, double x2, double y2);
    void getCoordinates(double& x1, double& y1, double& x2, double& y2) const;
};


