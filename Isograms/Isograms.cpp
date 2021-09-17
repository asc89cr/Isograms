// Isograms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Isogram.h"


int main()
{
    bool resultFalse = Isogram::is_isogram("BooO");
    bool resultTrue = Isogram::is_isogram("Dermatoglyphics");

    std::cout << resultFalse;

    std::cout << resultTrue;

    return 0;
}

