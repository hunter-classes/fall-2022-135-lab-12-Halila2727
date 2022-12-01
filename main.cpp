/*
  Author: Halil Akca
  Course: CSCI-135
  Instructor: Mike Zamansky
  Assignment: Lab 12
  This program will call the functions made in other .cpp files
*/

#include <iostream>
#include <string>
#include <vector>
#include "funcs.h"

int main()
{
    std::vector<int> test = makeVector(6);
    std::cout << "\nTask A: Make Vector 0 to n-1\nVector Length: 6\nVector is ";
    printVector(test);
    std::cout << "\n------------------\n";

    std::vector<int> original = {-1, -5, 4, -5, -6, 4, 2, 27, -548, 45};
    std::cout << "\nTask B: Remove Vector's Negative Integers";
    std::cout << "\nOriginal Vector is [-1, -5, 4, -5, -6, 4, 2, 27, -548, 45]\nNew Vector is ";
    test = goodVibes(original);
    printVector(test);
    std::cout << "\n------------------\n";

    std::vector<int> v1 = {32, 4, -5, -6, 2, 1, 0};
    std::vector<int> v2 = {4, 63, 27, -6364, -43};
    std::cout << "\nTask C: Push_back Second Vector to First Vector and Clear Second Vector";
    std::cout << "\nVector 1: [32, 4, -5, -6, 2, 1, 0]\nVector 2: [4, 63, 27, -6364, -43]\n";
    std::cout << "New Vector 1: ";
    gogeta(v1, v2);
    printVector(v1);
    std::cout << "New Vector 2: ";
    printVector(v2);
    std::cout << "\n------------------\n";

    v1 = {32, 4, -5, -6, 2, 1, 10};
    v2 = {4, 12, 27, 3, -43};
    std::cout << "\nTask D: Add pairs of Vector 1 and 2 into one Vector";
    std::cout << "\nVector 1: [32, 4, -5, -6, 2, 1, 10]\nVector 2: [4, 12, 27, 3, -43]\n";
    std::cout << "New Vector is: ";
    test = sumPairWise(v1, v2);
    printVector(test);
    std::cout << "\n";
    
    return 0;
}