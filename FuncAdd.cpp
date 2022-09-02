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
    std::cout << "(Hey! I double the result...) ";
    return (a + b) * 2;
}