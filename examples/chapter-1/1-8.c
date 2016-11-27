#include <stdio.h>

int main() {
  int c, blanks, tabs, newlines;

  blanks = 0;
  tabs = 0;
  newlines = 0;
  while ((c = getchar()) != EOF) {

    if (c == ' ') {
      ++blanks;
    }

    if (c == '\t') {
      ++tabs;
    }


    if (c == '\n') {
      ++newlines;
    }
  }

  printf("blanks: %d\ntabs: %d\nnew-lines: %d\n", blanks, tabs, newlines);
}