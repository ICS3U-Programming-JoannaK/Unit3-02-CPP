// Copyright 2025 Joanna Keza All rights reserved
//
// Created by: Joanna Keza
// Data: March 18, 2025
// This program asks the user to enter
// number between 0 and 0 and try to guess
// the correct number

#include <iostream>

int main() {
    // declare constant
    const int NUMBER = 2;
    int numberPicked;

    // get number from user
    std::cout << "Enter the number: ";
    std::cin >> numberPicked;

    // check if user guess is correct
    if (numberPicked == NUMBER) {
        std::cout << "Good job, that is right";
    }

    // check if user guess is not correct
    if (numberPicked != NUMBER) {
        std::cout << "Not quite, try again ";
    }
}
