#include <stdio.h>

/* copy input to output; 1st version */
int main() {
  int c;
  while((c = getchar())) {
    printf("End of file? %d\n", (c == EOF));
  }
}