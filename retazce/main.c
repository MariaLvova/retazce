#include <stdio.h>

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
