// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Seti Ngabo
// Created on: Sept 2021
// This Program calculates average

#include <iostream>
#include <random>

int main() {
    // This function prints random numbers
    int output[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int randomNumbers = sizeof(output)/sizeof(output[0]);
    int counter;
    float finalSum;
    int number;
    float average;

    // process
    for (counter = 0; counter < 10; counter++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(0, 100);
        number = idist(rgen);
        output[counter] = number;
    }

    for (counter = 0; counter < randomNumbers; counter++) {
        finalSum = finalSum + output[counter];
        std::cout << "The number is: " << output[counter] << std::endl;
    }

    average = finalSum / randomNumbers;

    std::cout << "" << std::endl;
    std::cout << "The average is " << average << std::endl;

    std::cout << "\nDone." << std::endl;
}
