// Copyright 2022 UNN-IASR
#include "fun.h"

int main() {
    const char* str = "Hello World 123 I love programming";

    std::cout << "Количество слов в строке, которые не содержат цифры: " << faStr1(str) << std::endl;
    std::cout << "Количество слов в строке, которые начинаются с заглавной буквы и содержат только строчные буквы и пробелы: " << faStr2(str) << std::endl;
    std::cout << "Средняя длина слов в строке: " << faStr3(str) << std::endl;

    return 0;
}
