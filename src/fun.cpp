// Copyright 2022 UNN-IASR
#include "fun.h"

unsigned int faStr1(const char *str) {
unsigned int count = 0;
bool isWord = true;
    while (*str) {
    if (isspace(*str)) {
        isWord = true;
    } else {
        if (isWord) {
            const char *temp = str;
            while (*temp && !isdigit(*temp)) {
                temp++;
            }
            if (!*temp) {
                count++;
            }
            isWord = false;
        }
    }
    str++;
}
return count;
}

unsigned int faStr2(const char *str) {
unsigned int count = 0;
    while (*str) {
    if (isupper(*str)) {
        const char *temp = str + 1;
        while (*temp && (islower(*temp) || isspace(*temp))) {
            if (!islower(*temp) && !isspace(*temp)) {
                break;
            }
            temp++;
        }
        if (!*temp) {
            count++;
        }
    }
    str++;
}
return count;
}

unsigned int faStr3(const char *str) {
unsigned int count = 0;
unsigned int sum = 0;
bool isWord = false;
    while (*str) {
    if (isalpha(*str)) {
        sum++;
        if (!isWord) {
            count++;
            isWord = true;
        }
    } else {
        isWord = false;
    }
    str++;
}

if (count > 0) {
    return sum / count;
} else {
    return 0;
}
}
