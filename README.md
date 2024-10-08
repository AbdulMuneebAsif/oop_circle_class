# OOP Circle Class Project

Welcome to the OOP Circle Class project! This project is written in C++20 and demonstrates the fundamental principles of Object-Oriented Programming (OOP) through the implementation of a `Circle` class. The project is built using CMake.

## Project Structure

- **CMakeLists.txt**: Configuration file for CMake build system.
- **main.cpp**: The main program file where the `Circle` class is utilized.
- **Circle.h**: Header file containing the declaration of the `Circle` class.
- **Circle.cpp**: Source file containing the implementation of the `Circle` class methods.

## Circle Class

The `Circle` class is designed to encapsulate data and functionality related to circles. The class provides methods to:

- Calculate the area of a circle.
- Calculate the circumference of a circle.
- Set and get the radius of the circle.
- Input and output the circle's properties.

### Example Usage

Here is a brief example of how you might use the `Circle` class in your `main.cpp`:

```cpp
#include <iostream>
#include "Circle.h"

int main() {
    Circle c1;
    c1.setRadius(5.0);

    std::cout << "Radius: " << c1.getRadius() << std::endl;
    std::cout << "Area: " << c1.area() << std::endl;
    std::cout << "Circumference: " << c1.circumference() << std::endl;

    return 0;
}
```

## Building the Project

To build the project, follow these steps:

1. Ensure you have CMake and a C++ compiler installed.
2. Navigate to the project directory.
3. Create a build directory and run CMake:
   ```sh
   mkdir build
   cd build
   cmake ..
   ```
4. Build the project:
   ```sh
   make
   ```
5. Run the executable:
   ```sh
   ./oop_circle_class
   ```

## Requirements

- CMake 3.10 or higher
- A C++20 compatible compiler

## Contributing

Contributions are welcome! Please fork the repository and submit pull requests for any enhancements or bug fixes.

---
