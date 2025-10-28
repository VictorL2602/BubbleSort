#ifndef SORT_H
#define SORT_H

#include <stdbool.h>
#include <stddef.h>

/*en type der bruges til at pege på sammenligningsfunktionen*/
typedef bool (*pair_in_order_fn)(char a, char b);

/*bytter to elementer i arrayet*/
void swap(char *x, char *y);

/*sorterer et array med bubble sort of laver en sammenligningsfunktion*/
void bubble_sort(char arr[], size_t n, pair_in_order_fn pair_is_in_order);

/*sammenligner bogstaver uanset om de er store eller små*/
bool letters_in_order(char a, char b);
/*sammenligner tal i stigende rækkefølge*/
bool numbers_in_ascending_order(char a, char b);

#endif