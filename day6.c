//
// Created by eurms on 12/6/2023.
//

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

char* input = "Time:        58     81     96     76\n"
              "Distance:   434   1041   2219   1218\n";


int part1(char* string) {
    int total = 1;
    int val_count = 0;
    char* tmp =string;
    while(*tmp != '\n'){
        if(*tmp++ == ' ') val_count++;
    }
    printf("%d\n", val_count);
    int * times = calloc(val_count, sizeof(int));
    int * distances = calloc(val_count, sizeof(int));
    bool in_num = false;
    for (int i = 0; *string != '\n';) {
        if(isdigit(*string)) {
            if (!in_num) {
                times[i++] = strtol(string, NULL, 0);
            }
            in_num = true;
        } else in_num =false;
        string++;
    }
    string++;
    for (int i = 0; *string != '\n';) {
        if(isdigit(*string)) {
            if (!in_num) {
                distances[i++] = strtol(string, NULL, 0);
            }
            in_num = true;
        } else in_num =false;
        string++;
    }
    for (int i = 0; i < val_count; ++i) printf("%d, %d\n", times[i], distances[i]);
    for (int i = 0; i < val_count; ++i) {
        for (int j = 0; j < times[i]; ++j) {
            if (j*(times[i] - j) > distances[i]) {
                printf("%d\n", times[i] - 2*j + 1);
                total *= times[i] - 2*j +1;
                break;
            }
        }
    }
    return total;
}



unsigned int part2(char* string) {
    unsigned int total = 1;
    int val_count = 1;
    printf("%d\n", val_count);
    unsigned long long * times = calloc(1, sizeof(int));
    unsigned long long * distances = calloc(1, sizeof(int));
    for (; *string != '\n';) {
        if(isdigit(*string)) {
            if (times[0]) times[0] = (times[0]*10) + *string - '0';
            else times[0] = *string - '0';
        }
        string++;
    }
    string++;
    for (; *string != '\n';) {
        if(isdigit(*string)) {
            if (times[0]) distances[0] = (distances[0]*10)+ *string - '0';
            else times[0] = *string - '0';
        }
        string++;
    }
    for (int i = 0; i < val_count; ++i) printf("%llu, %llu\n", times[i], distances[i]);
    for (int i = 0; i < val_count; ++i) {
        for (unsigned long long j = 0; j < times[i]; ++j) {
            if (j*(times[i] - j) > distances[i]) {
                printf("%llu\n", times[i] - 2*j + 1);
                total *= times[i] - 2*j +1;
                break;
            }
        }
    }
    return total;
}

int main() {
    printf("Part 1: %d\n", part1(input));
    printf("Part 2: %u\n", part2(input));
}
