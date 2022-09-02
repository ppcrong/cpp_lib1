#include <iostream>
#include "FuncAdd.h"

FuncAdd::FuncAdd()
{
}

FuncAdd::~FuncAdd()
{
}

int32_t FuncAdd::add(int32_t a, int32_t b)
{
    std::cout << "(FuncAdd is lib1-v5.0...) ";
    return a + b;
}