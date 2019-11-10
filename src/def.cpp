#include "../include/dec.h"

Sort::Sort(int vectorLen)
{
    // resize nums vector to vectorLen and populate it with ints
    nums.resize(vectorLen);
    std::generate_n(nums.begin(), vectorLen, gen);
}

int Sort::gen()
{
    // consecutive ints starting from 1 (will become random ints later)
    static int i = 0;
    return ++i;
}

void Sort::printNums()
{
    // iterates through nums vector and prints contents
    for (std::vector<int>::const_iterator i = nums.begin(); i != nums.end(); ++i)
        std::cout << *i << ' ';
}