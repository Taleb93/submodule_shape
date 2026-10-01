#pragma once
//hey bro
// Einfache Klasse fuer einen Kreis
class Circle {
public:
    Circle(double radius) : radius(radius) {}

    double area() const {
        return 3.14159 * radius * radius;
    }

private:
    double radius;
};
