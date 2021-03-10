// License: CC BY-NC-SA 4.0
/*
 * task3.c
 *
 * Files
 *
 * Written by AlexeyFilich
 * 10 mar 2021
 */

#define STORAGE_OPTIMAL

#include <stdio.h>

#include "storage/Storage.h"
#include "Interactions.h"

int main(int argc, char* args[]) {
    // Read name of the file
    char filename[128];
    int tmp;
    Array array;
    aArrayInit(&array, 0, int);
    aScanCheck("File name: ", "%s", &filename);

    // Read
    FILE * file = fopen(filename, "r+");
    while (fscanf(file, "%d", &tmp) == 1)
        aArrayPush(&array, &tmp);
    fclose(file);

    // Rewrite
    file = fopen(filename, "w+");
    fprintf(file, "%d ", aArrayGetAs(&array, array.size - 1, int));
    for (int i = 1; i < array.size - 1; i++)
        fprintf(file, "%d ", aArrayGetAs(&array, i, int));
    fprintf(file, "%d ", aArrayGetAs(&array, 0, int));
    fclose(file);
    return 0;
}
