#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

//
// Created by eurms on 12/1/2023.
//
int part1 (char * input_file) {
    char line[2048] = {0};
    int total = 0;
    int total_red = 12;
    int total_green = 13;
    int total_blue = 14;

    FILE * file = fopen(input_file, "r");
    while(fgets(line, 2048, file)) {
        char * string = line;
        int gameNumber = 0;
        string += sscanf(string, "Game %d:", &gameNumber);
        while(*string != '\0' && *string != '\n') {
            char a = 0;
            int count = 0;
            int r = sscanf(string, "%d %c", &count, &a);
            if(r) {
                switch(a) {
                    case 'r':
                        if (total_red < count) goto end;
                        break;
                    case 'g':
                        if (total_green < count) goto end;
                        break;
                    case 'b':
                        if (total_blue < count) goto end;
                }
            }
            string++;
        }
        total += gameNumber;
        end:
    }
    return total;
}

int part2 (char * input_file) {
    char line[2048] = {0};
    int total = 0;
    FILE * file = fopen(input_file, "r");
    while(fgets(line, 2048, file)) {
        char * string = line;
        int total_red = 0;
        int total_green = 0;
        int total_blue = 0;
        while(*string != '\0' && *string != '\n') {
            char a = 0;
            int count = 0;
            int r = sscanf(string, "%d %c", &count, &a);
            if(r) {
                switch(a) {
                    case 'r':
                        if (total_red < count) total_red = count;
                        break;
                    case 'g':
                        if (total_green < count) total_green = count;
                        break;
                    case 'b':
                        if (total_blue < count) total_blue = count;
                }
            }
            string++;
        }
        total += total_red * total_green * total_blue;
    }
    return total;
}

int main() {
    printf("Part 1: %d\n", part1("day2_input"));
    printf("Part 2: %d\n", part2("day2_input"));
}