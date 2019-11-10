#pragma once
#include <vector>
#include <algorithm>

class Sort
{
public:
    Sort(int vectorLen); // initializes vector of numbers
    static int gen();    // generator function for numbers
    void printNums();    // prints nums vector

private:
    std::vector<int> nums;
};