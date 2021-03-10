// License: CC BY-NC-SA 4.0
/*
 * task1.c
 *
 * Files
 *
 * Written by AlexeyFilich
 * 10 mar 2021
 */

#include <stdio.h>

#include "Interactions.h"

int main(int argc, char* args[]) {
    // Read name of the file and size
    char filename[128];
    aScanCheck("File name: ", "%s", &filename);
    int size, tmp;
    aScanCheck("Size: ", "%d", &size);

    // Write to file
    FILE * file = fopen(filename, "w+");
    for (int i = 0; i < size; i++) {
        aScanCheck("Number: ", "%d", &tmp);
        fprintf(file, "%d ", tmp);
    }
    fclose(file);

    // Read and print
    file = fopen(filename, "r+");
    printf("File data:\n");
    while (fscanf(file, "%d", &tmp) == 1)
        printf("%d ", tmp);
    printf("\n");
    fclose(file);
    return 0;
}
