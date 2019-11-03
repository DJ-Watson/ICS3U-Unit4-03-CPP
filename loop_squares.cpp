// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: DJ Watson
// Created on: November 2019
// this program loops a number to add


#include <iostream>
#include <string>
#include <cmath>

int main() {
    // variables
    int numinput;
    int loopc = 0;
    int answer = 0;
    std::string numcheck;

    // input
    std::cout << "enter number: ";
    std::cin >> numcheck;
    std::cout << "" << std::endl;

    // process and output
    try {
        numinput = std::stoi(numcheck);
        if (numinput > 0) {
            for (loopc = 0; loopc <= numinput; loopc++) {
                answer = pow(loopc, 2);
                std::cout << loopc << "² = " << answer << std::endl;
            }
        } else {
            std::cout << "invalid input";
        }
    } catch (std::invalid_argument) {
        std::cout << "invalid input";
}
}
