// Copyright (c) 2022 Zaida Hammel All rights reserved
//
// Created by: Zaida Hammel
// Created on: Sep 2022
// This program calculates the area and perimeter of a rectangle
//    with length and width input from user

#include <cmath>
#include <iostream>

int main() {
    // this function calculates the area and perimeter of a circle
    int lengthOfRectangle;
    int widthOfRectangle;
    double areaOfRectangle;
    double perimeterOfRectangle;

    // input
    std::cout << "Enter length of a rectangle (mm): ";
    std::cin >> lengthOfRectangle;
    std::cout << "Enter width of a rectangle (mm): ";
    std::cin >> widthOfRectangle;

    // process
    areaOfRectangle = lengthOfRectangle * widthOfRectangle;
    perimeterOfRectangle = 2 * (lengthOfRectangle + widthOfRectangle);

    // output
    std::cout << "" << std::endl;
    std::cout << "Area is " << areaOfRectangle << " mm²." << std::endl;
    std::cout << "Perimeter is " << perimeterOfRectangle << " mm." << std::endl;

    std::cout << "\nDone." << std::endl;
}
