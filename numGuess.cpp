// Copyright (c) 2026 Victor V-C Name All rights reserved.
// .
// Created by: Victor Victor Calixte
// Date: 10/9/2026
// This code asks the user to guess a number from a range.
// The program will tell the user if their guess was correct or incorrect.

#include <iostream>
#include <string>

int const CORRECT_NUM = 3;
int const SMALLEST = 0;
int const LARGEST = 9;

int main() {
    // Setting necessary variables.
    int randomNumber;
    std::string result;

    // Asking the user to take a guess from a number range,
    // and assigning the input to randomNumber.
    std::cout << "Guess a random number in the range from "
    << SMALLEST
    << "-"
    << LARGEST
    << ": ";

    std::cin >> randomNumber;

    // Checking in the input is inside the number range
    // If it's not, then it'll tell the user that the guess
    // is outside the number range.
    if (randomNumber > LARGEST) {
        result = "Guessed number is outside of number range!";
    }

    if (randomNumber < SMALLEST) {
        result = "Guessed number is outside of number range!";
    }

    // This will check if the guessed number is the same as the correct number.
    // Then it'll tell the user whether they're correct or not.
    if (randomNumber == CORRECT_NUM) {
        result = "You Guessed Correctly!";
    }

    if (randomNumber != CORRECT_NUM) {
        result = "You Guessed Incorrectly";
    }

    std::cout << result << "\n";

    return 0;
}
