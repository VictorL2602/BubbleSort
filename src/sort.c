#include "sort.h"
#include <ctype.h>
#include <stdbool.h>

/*but værdierne på to adresser*/
void swap(char *x, char *y) {
  char temp = *x; // gem værdien på x
  *x = *y;        // flyt y ind på x
  *y = temp;      // flyt den gemte x værdi ind på y
}

/*sammenligner to bogstaver ad gangen uden forskel på stort og småt*/
bool letters_in_order(char a, char b) {
  // tolower gør bogstavet lille så a og A er det samme
  char lower_a = tolower((unsigned char)a);
  char lower_b = tolower((unsigned char)b);
  return lower_a <= lower_b; // true hvis a er før/lig b alfabetisk
}

/*sammenligner to tal i stigende rækkeføge*/
bool numbers_in_ascending_order(char a, char b) {
  // signed char gør at negative tal behandles korrekt
  return (signed char)a <= (signed char)b;
}

/*selve bubble sort:
sammenligner to naboer, hvis de står forkert byttes de, og den gentages indtil
der ikke kan byttes mere*/
void bubble_sort(char *arr, size_t n, pair_in_order_fn pair_is_in_order) {
  bool swapped = true; // husker om der blev byttet i sidste runde

  while (swapped) {  // gentag så længe der byttes
    swapped = false; // antag først at alt er sorteret

    /*denne tog en time at fejlsøge fordi der stod i>n i stedet for i<n...*/
    for (size_t i = 1; i < n; i++) { // gå igennem alle nabopar
      if (!pair_is_in_order(arr[i - 1], arr[i])) {
        swap(&arr[i - 1], &arr[i]); // byt dem
        swapped = true;             // marker at de er byttet
      }
    }
  }
}