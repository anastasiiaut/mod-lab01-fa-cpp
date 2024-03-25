// Copyright 2022 UNN-IASR
#include "fun.h"
#include <iostream>
#include <cstring>
#include <cctype>
#include <sstream>

unsigned int faStr1(const char* str) {
    unsigned int count = 0;
    char* strCopy = new char[strlen(str) + 1];
    snprintf(strCopy, str);
    char* word = strtok_r(strCopy, " ");
    while (word != NULL) {
        bool valid = true;
        for (size_t i = 0; i < strlen(word); i++) {
            if (isdigit(word[i])) {
                valid = false;
                break;
            }
        }
        if (valid) {
            count++;
        }
        word = strtok_r(NULL, " ");
    }
    delete[] strCopy;
    return count;
}
unsigned int faStr2(const char* str) {
    unsigned int count = 0;
    char* strCopy = new char[strlen(str) + 1];
    snprintf(strCopy, str);
    char* word = strtok_r(strCopy, " ");
    while (word != NULL) {
        if (isupper(word[0])) {
            bool valid = true;
            for (size_t i = 1; i < strlen(word); i++) {
                if (!islower(word[i]) && !isspace(word[i])) {
                    valid = false;
                    break;
                }
            }
            if (valid) {
                count++;
            }
        }
        word = strtok_r(NULL, " ");
    }
    delete[] strCopy;
    return count;
}
unsigned int faStr3(const char* str) {
    unsigned int wordCount = 0;
    unsigned int totalLength = 0;
    std::istringstream iss(str);
    std::string word;
    while (iss >> word) {
        wordCount++;
        totalLength += word.length();
    }
    return wordCount == 0 ? 0 : totalLength / wordCount;
}
