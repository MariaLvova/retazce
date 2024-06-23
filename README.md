README pre kód na generovanie kombinácií reťazcov:

---
### Úloha 7.4.11: Generovanie kombinácií reťazcov

#### Popis úlohy

Cieľom úlohy je naprogramovať funkciu `retazce` s nasledujúcim prototypom:

```c
void retazce(char n, char l);
```

Funkcia `retazce` má generovať a vypisovať na obrazovku všetky kombinácie reťazcov dĺžky `l`, ktoré sa skladajú z prvých `n` malých písmen latinskej abecedy.

#### Popis riešenia

Program využíva rekurzívnu funkciu na generovanie kombinácií. Na začiatku sa alokuje dynamická pamäť pre pole `result`, do ktorého sa postupne ukladajú jednotlivé kombinácie. Po generovaní a vypísaní kombinácií sa uvoľní alokovaná pamäť.

### Štruktúra kódu

1. **Funkcia `generateCombinations`**

    - Táto rekurzívna funkcia generuje a vypisuje všetky kombinácie reťazcov.
    - **Parametre:**
        - `result`: Pole na uchovávanie aktuálne generovaného reťazca.
        - `index`: Aktuálna pozícia v reťazci.
        - `n`: Počet písmen, ktoré sa majú použiť (od 'a' po 'a' + n - 1).
        - `l`: Požadovaná dĺžka generovaných reťazcov.

2. **Funkcia `retazce`**

    - Táto funkcia riadi generovanie kombinácií:
        - Alokácia pamäte pre `result`.
        - Volanie `generateCombinations` s počiatočnými hodnotami.
        - Uvoľnenie alokovanej pamäte po skončení generovania.

3. **Hlavná funkcia `main`**

    - Načíta hodnoty `n` (počet písmen) a `l` (dĺžka reťazcov) z klávesnice.
    - Volá funkciu `retazce` s načítanými hodnotami.


#### Spustenie programu

Pred spustením uistite sa, že máte nainštalovaný kompilátor pre jazyk C (napr. GCC pre Linux alebo MinGW pre Windows). Program očakáva vstup od používateľa pri spustení, kde sa zadajú hodnoty `n` (počet písmen) a `l` (dĺžka reťazcov).


#### Príklad vstupu a výstupu

Pri spustení programu sa používateľovi zobrazí výzva na zadanie hodnôt `n` a `l`. Na základe týchto hodnôt program vygeneruje a vypíše všetky možné kombinácie reťazcov.

```plaintext
Zadajte pocet prvych malych pismen latinskej abecedy (n): 2
Zadajte dlzku retazcov (l): 3

Výstup:
aaa
aab
aba
abb
baa
bab
bba
bbb
```

Program očakáva, že používateľ zadá hodnoty `n` a `l` pri spustení programu. Tieto hodnoty určujú, koľko písmen sa má použiť a aká má byť dĺžka generovaných reťazcov.
V príklade vyššie `n = 2` a `l = 3` generuje všetky kombinácie reťazcov dĺžky 3, ktoré sa skladajú z písmen 'a' a 'b'.




