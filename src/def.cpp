#include "../include/dec.h"
#include <random>
#include <ctime>

/*CONSTRUCTOR*/
Sort::Sort(int vectorLen)
{
    // populates nums vector with vectorLen random ints: [1,100]
    std::mt19937 mers(time(NULL));                 // seed the generator with system time
    std::uniform_int_distribution<> distr(1, 100); // define the range
    for (int i = 0; i < vectorLen; ++i)
        nums.push_back(distr(mers)); // populate vector
}

/*GENERAL METHODS*/
void Sort::printNums()
{
    // iterates through nums vector and prints contents
    for (std::vector<int>::const_iterator i = nums.begin(); i != nums.end(); ++i)
        std::cout << *i << ' ';
}

bool Sort::isSorted()
{
    // iterates through nums vector and determines whether its sorted
    for (int i = 0; i < nums.size() - 1; ++i)
        if (nums[i + 1] < nums[i])
            return false;
    return true;
}

/*SORTING ALGORITHMS*/
void Sort::quickSort()
{
}

/*ALGORITHM ASSISTING FUNCTIONS*/
