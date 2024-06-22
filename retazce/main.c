#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)

// Pomocná rekurzívna funkcia na generovanie a výpis všetkých kombinácií
void generateCombinations(char* result, int index, int n, int l) {
    // Ak sme dosiahli požadovanú dĺžku, vypíšeme reťazec
    if (index == l) {
        result[index] = '\0';
        printf("%s\n", result);
        return;
    }
    // Generujeme všetky možné písmená na aktuálnej pozícii
    for (char c = 'a'; c < 'a' + n; c++) {
        result[index] = c;
        generateCombinations(result, index + 1, n, l);
    }
}

void retazce(char n, char l) {
    // Dynamická alokácia poľa na uloženie reťazca
    char* result = (char*)malloc((l + 1) * sizeof(char));
    if (result == NULL) {
        fprintf(stderr, "Alokacia pamate zlyhala\n");
        return;
    }
    // Spustíme rekurzívnu generáciu kombinácií
    generateCombinations(result, 0, n, l);
    // Uvoľníme alokovanú pamäť
    free(result);
}

int main() {
    int n, l;

    // Načítanie hodnot z klávesnice
    printf("Zadajte pocet prvych malych pismen latinskej abecedy (n): ");
    scanf("%d", &n);

    printf("Zadajte dlzku retazcov (l): ");
    scanf("%d", &l);

    // Volanie funkcie na generovanie a výpis kombinácií
    retazce((char)n, (char)l);
    return 0;
}