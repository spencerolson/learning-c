#include <stdio.h>

int main() {
  int current, last;
  last = EOF;
  while ((current = getchar()) != EOF) {
    if (current != ' ') {
      putchar(current);
    }

    if (current == ' ') {
      if (last != ' ') {
        putchar(current);
      }
    }
    last = current;
  }
}