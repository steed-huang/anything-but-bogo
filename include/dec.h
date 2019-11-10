#pragma once
#include <vector>
#include <algorithm>

class Sort
{
public:
    Sort(int vectorLen); // initializes vector of random numbers

    // general methods
    void printNums(); // prints nums vector
    bool isSorted();  // whether nums is sorted

    // sorting algorithms
    void quickSort();
    void mergeSort();
    void heapSort();
    void shellSort();
    void insertionSort();
    void selectionSort();
    void bubbleSort();
    void miracleSort();

    // algorithm assisting methods

private:
    std::vector<int> nums;
};