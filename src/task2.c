// License: CC BY-NC-SA 4.0
/*
 * task2.c
 *
 * Files
 *
 * Written by AlexeyFilich
 * 10 mar 2021
 */

#include <stdio.h>

#include "Interactions.h"

int main(int argc, char* args[]) {
    // Read name of the file
    char filename[128];
    int tmp, sum = 0, count = 0;
    aScanCheck("File name: ", "%s", &filename);

    // Read and print
    FILE * file = fopen(filename, "r+");
    printf("File data:\n");
    while (fscanf(file, "%d", &tmp) == 1) {
        printf("%d ", tmp);
        sum += tmp;
        count++;
    }
    printf("\n");
    printf("Average (of %d items) is %.3f\n", count, (float)sum / (float)count);
    fclose(file);
    return 0;
}
