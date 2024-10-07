#include "Circle.h"

#include <numbers>

Circle::Circle() = default;

Circle::Circle(double radius) {
    this->radius = radius;
}

double Circle::getRadius() const {
    return radius;
}

void Circle::setRadius(const double radius) {
    this->radius = radius;
}

double Circle::getArea(double radius) {
    return radius * 2;
}

double Circle::getDiameter(double radius) {
    return radius * 2;
}

double Circle::getCircumference(double radius) {
    return 2 * std::numbers::pi * radius;
}

auto getArea(double radius) -> double {
    return std::numbers::pi * radius * radius;
}

