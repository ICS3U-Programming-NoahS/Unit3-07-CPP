// Copyright (c) 2023 Noah Smith All rights reserved.
//
// Created by: Noah Smith
// Date: Oct. 29th, 2023
// This program asks the user to enter their age
// and tells the user if they are allowed to date their grandchild
#include <iostream>

    int main() {
    // Declare variables
    int userAgeInt;
    std::string userAgeString;

    // Get the user's age
    std::cout << "Enter your age: ";
    std::cin >> userAgeString;

    try {
        // convert the user's guess to an int
        userAgeInt = std::stoi(userAgeString);

        // Check if the user can date my grandchild
        if (userAgeInt > 25 && userAgeInt < 40) {
            std::cout << "You can date my grandchild." << std::endl;
        } else if (userAgeInt >= 120 || userAgeInt <= 0) {
            std::cout << userAgeInt << " is not a valid age!" << std::endl;
        } else if (userAgeInt >= 40) {
            std::cout << "You are too old to date my grandchild." << std::endl;
        } else {
            std::cout << "You are too young ";
            std::cout << "to date my grandchild." << std::endl;
        }
    } catch (std::exception) {
        // The user did not enter an integer
        std::cout << userAgeString << " is not an integer!\n";
    }
}
