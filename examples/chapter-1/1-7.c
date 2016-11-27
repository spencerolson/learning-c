#include <stdio.h>

/* copy input to output; 1st version */
int main() {
  int c;

  printf("EOF is equal to %d\n", EOF);
  while (1 == 1) {
    c = getchar();
    printf("Equal to EOF? %d\n", (c != EOF));
  }
}