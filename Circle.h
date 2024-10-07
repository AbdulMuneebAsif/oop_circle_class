
#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
    private:
    double radius = 0;
    const double PI = 3.1415;

    public:

    Circle();
    explicit Circle(double radius);

    double getRadius() const;
    void setRadius(double);

    static double getArea(double radius);
    static double getDiameter(double radius);

    static double getCircumference(double radius);

};

#endif //CIRCLE_H
