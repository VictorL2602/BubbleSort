# Bubble Sort
Dette program sorterer enten bogstaver eller tal ved hjælp af bubble sort.  
Brugeren vælger selv, om de vil sortere bogstaver eller tal, og indtaster derefter 8 værdier.

## Indhold
Projektet består af tre filer:
main.c: Indeholder programmet der spørger brugeren og viser resultatet
sort.c: Indeholder selve bubble sort-algoritmen og hjælpefunktioner
sort.h: Indeholder funktionserklæringer og typer (headerfil)

## Funktioner
- swap bytter to elementer i et array  
- letters_in_order sammenligner to bogstaver (uden forskel på store/små)  
- numbers_in_ascending_order sammenligner to tal i stigende rækkefølge  
- bubble_sort sorterer et array ved at bytte elementer, indtil alt står i orden

## Sådan virker programmet
1. Brugeren vælger datatype (bogstaver eller tal).  
2. Brugeren indtaster 8 værdier.  
3. Programmet viser data før og efter sortering.  
4. Sorteringen sker med bubble sort, som sammenligner naboer og bytter dem, indtil alt er sorteret.