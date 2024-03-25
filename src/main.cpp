// Copyright 2022 UNN-IASR
#include "fun.h"

int main() {
    const char *str = "This is a 123 string With 456numbers 789";
    std::cout << "1: " << faStr1(str) << std::endl;
    std::cout << "2: " << faStr2(str) << std::endl;
    std::cout << "3: " << faStr3(str) << std::endl;
    return 0;
}
