// Copyright 2022 UNN-IASR
#include "fun.h"

unsigned int faStr1(const char *str) {
 unsigned int count = 0;
    const char* word = strtok(const_cast<char*>(str), " ");

    while (word != NULL) {
        bool valid = true;
        for (int i = 0; i < strlen(word); i++) {
            if (isdigit(word[i])) {
                valid = false;
                break;
            }
        }

        if (valid) {
            count++;
        }

        word = strtok(NULL, " ");
    }

    return count;
}

unsigned int faStr2(const char *str) {
unsigned int count = 0;
    const char* word = strtok(const_cast<char*>(str), " ");

    while (word != NULL) {
        if (isupper(word[0])) {
            bool valid = true;
            for (int i = 1; i < strlen(word); i++) {
                if (!islower(word[i]) && !isspace(word[i])) {
                    valid = false;
                    break;
                }
            }

            if (valid) {
                count++;
            }
        }

        word = strtok(NULL, " ");
    }

    return count;
}

unsigned int faStr3(const char *str) {
unsigned int wordCount = 0;
    unsigned int totalLength = 0;
    const char* word = strtok(const_cast<char*>(str), " ");

    while (word != NULL) {
        wordCount++;
        totalLength += strlen(word);

        word = strtok(NULL, " ");
    }

    return totalLength / wordCount;
}
