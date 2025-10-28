#include "sort.h"
#include <stddef.h>
#include <stdio.h>

#define SIZE 8 // antal værdier som skal indtastes

// til print af bogstav array
void print_letters(const char arr[], size_t n) {
  for (size_t i = 0; i < n; i++) {
    printf("%c", arr[i]);
  }
  printf("\n");
}

// til print af tal array
void print_numbers(const char arr[], size_t n) {
  for (size_t i = 0; i < n; i++) {
    printf("%d", arr[i]);
  }
  printf("\n");
}

int main(void) {
  int choice;         // til valg af bogstaver og tal
  char letters[SIZE]; // plads til 8 bogstaver
  char numbers[SIZE]; // plads til 8 tal

  // spørger bruger hvad de vil sortere
  printf("Vælg datatype\n");
  printf("1=Bogstaver\n");
  printf("2=Tal\n");
  printf("Dit valg: ");
  scanf("%d", &choice);

  // hvis brugeren vælger bogstaver
  if (choice == 1) {
    printf("Indtast %d bogstaver, adskilt med mellemrum:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
      scanf(" %c", &letters[i]); // mellemrum før %c fjerner enter/mellemrum
    }
    printf("Før sortering:\n");
    print_letters(letters, SIZE);

    // sorter bogstaver ved hjælp af letters_in_order
    bubble_sort(letters, SIZE, letters_in_order);

    printf("Efter sortering:\n");
    print_letters(letters, SIZE);

    // hvis brugeren vælger tal
  } else if (choice == 2) {
    printf("Indtast %d hele tal, adskilt med mellemrum\n", SIZE);
    int temp;
    for (int i = 0; i < SIZE; i++) {
      scanf("%d", &temp);      // læs tallet som int
      numbers[i] = (char)temp; // gem det som char i arrayet
    }
    printf("Før sortering:\n");
    print_numbers(numbers, SIZE);

    // sorter tal ved hjælp af numbers_in_ascending_order
    bubble_sort(numbers, SIZE, numbers_in_ascending_order);

    printf("Efter sortering:\n");
    print_numbers(numbers, SIZE);
    // hvis brugeren vælger et forkert tal
  } else {
    printf("Ugyldigt valg\n");
  }
  return 0;
}