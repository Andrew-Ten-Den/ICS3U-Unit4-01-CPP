// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Andrew-Ten-Den
// Created on: April 2022
// This program calculates the sum of consecutive integers

#include <iostream>

int main() {
    // this function calculates the sum of consecutive integers
    std::string positiveIntegerAsString;
    int positiveInteger;
    int loopCounter = 0;
    int totalSum = 0;

    // input
    std::cout << "Enter an integer: ";
    std::cin >> positiveIntegerAsString;

    // process
    try {
        positiveInteger = std::stoi(positiveIntegerAsString);
        while (loopCounter <= positiveInteger) {
            totalSum = loopCounter + totalSum;
            loopCounter = loopCounter + 1;
        }
        std::cout << "The sum is " << totalSum << std::endl;
    } catch (std::invalid_argument) {
            std::cout << "That is not an integer" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
