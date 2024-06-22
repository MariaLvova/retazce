#include <stdio.h>
#include <stdlib.h>

void generateCombinations(char* result, int index, int n, int l) {
    if (index == l) {
        result[index] = '\0';
        printf("%s\n", result);
        return;
    }

    for (char c = 'a'; c < 'a' + n; c++) {
        result[index] = c;
        generateCombinations(result, index + 1, n, l);
    }
}

void retazce(char n, char l) {
    char* result = (char*)malloc((l + 1) * sizeof(char));
    if (result == NULL) {
        fprintf(stderr, "Alokacia pamate zlyhala\n");
        return;
    }

    generateCombinations(result, 0, n, l);
    free(result);
}
