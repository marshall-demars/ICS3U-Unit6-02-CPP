// Copyright (c) 2022 Marshall Demars All rights reserved

// Created by: Marshall Demars
// Created on: Dec 2022
// This program finds the largest number is an array of
    // randomly generated numbers

#include <time.h>

#include <array>
#include <iostream>
#include <random>

template <size_t N>
int findLargestNumber(std::array<int, N> listOfNumbers) {
    // This function finds the largest number
    int largestNumber = listOfNumbers[0];

    for (int counter = 0; counter < listOfNumbers.size(); counter++) {
        if (listOfNumbers[counter] > largestNumber) {
            largestNumber = listOfNumbers[counter];
        }
    }
    return largestNumber;
}

int main() {
    std::array<int, 10> randomNumbers;
    int singleRandomNumber;
    int largestNumber;

    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 100);
    for (int counter = 0; counter < 10; counter++) {
        singleRandomNumber = idist(rgen);
        randomNumbers[counter] = singleRandomNumber;
        std::cout << "The random number " << counter + 1 << " is: "
                  << singleRandomNumber << std::endl;
    }
    // calls function
    largestNumber = findLargestNumber(randomNumbers);
    std::cout << "\nThe largest number is " << largestNumber << std::endl;

    std::cout << "\nDone." << std::endl;
}
