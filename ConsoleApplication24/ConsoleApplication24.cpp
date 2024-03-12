// ConsoleApplication24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <cmath>

void calculateTriangleProperties(double a, double b, double c, double* area, double* perimeter) {
    double s = (a + b + c) / 2;
    *area = sqrt(s * (s - a) * (s - b) * (s - c));
    *perimeter = a + b + c;
}

int main() {
    double side1, side2, side3;
    std::cout << "Enter the lengths of three sides of the triangle: ";
    std::cin >> side1 >> side2 >> side3;

    double triangleArea, trianglePerimeter;
    calculateTriangleProperties(side1, side2, side3, &triangleArea, &trianglePerimeter);

    std::cout << "Triangle Area: " << triangleArea << std::endl;
    std::cout << "Triangle Perimeter: " << trianglePerimeter << std::endl;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
