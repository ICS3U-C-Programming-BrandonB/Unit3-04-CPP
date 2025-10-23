// Copyright (c) 2025 Brandon All rights reserved.
// Created By : Brandon
// Date : October 20th, 2025
// This program displays and calculates the circumference and area of a circle

#include <iostream>
#include <random>

int main() {
    // variables
    int userGuess;

    // gets users number
    std::cout << "Enter A Number: ";
    std::cin >> userGuess;
    std::cout << "";

    // determine whether or not the user guessed correctly
    if (userGuess > 0) {
        std::cout << "You have entered a positive number " << std::endl;
    } else if (userGuess < 0) {
        std::cout << "You have entered a negative number " << std::endl;
    } else {
        std::cout << "Your number is zero " << std::endl;
    }
}
