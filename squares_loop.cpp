// Copyright (c) 2021 Rodas Nega All rights reserved
//
// Created by: Rodas Nega
// Created on: Sept 2021
// This program asks for a number, then checks if it is
// greater than 1 by continuously multiplying itself by the precedent integers

#include <iostream>


int main() {
    // this function loops until it is less than the user integer
    // and creates a multiplication sequence

    std::string userNumber;
    int userNumberInt;
    // int squareLoop;
    int result;

    // input
    std::cout << "Enter in a positive integer: ";
    std::cin >> userNumber;
    std::cout << std::endl;

    // process & output
    try {
        userNumberInt = std::stoi(userNumber);
        if (userNumberInt < 0) {
            std::cout << "That is an invalid integer" << std::endl;
        }
        for (int squareLoop = 0; squareLoop < userNumberInt + 1; squareLoop++) {
            result = squareLoop * squareLoop;
            std::cout << squareLoop << "² = " << result << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "That is an invalid integer.";
    }

    std::cout << "\nDone." << std::endl;
}
