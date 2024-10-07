#include <iostream>
using namespace std;
#include "Circle.h"

int main() {
    cout << "Area          : " << Circle::getArea(12.56) << endl;
    cout << "Diameter      : " << Circle::getDiameter(13.66) << endl;
    cout << "Circumference : " << Circle::getCircumference(12.56) << endl;
    return 0;
}
