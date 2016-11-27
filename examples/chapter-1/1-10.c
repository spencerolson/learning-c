#include <stdio.h>

int main() {
  int c, special;

  while ((c = getchar()) != EOF) {
    special = 0;
    if (c == '\t') {
      printf("\\t");
      special = 1;
    }

    if (c == '\b') {
      printf("\\b");
      special = 1;
    }

    if (c == '\\') {
      printf("\\\\");
      special = 1;
    }

    if (special == 0) {
      putchar(c);
    }
  }
}