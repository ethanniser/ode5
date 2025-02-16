#include <stdio.h>

int main() {
  char c;

  printf("Enter your name: ");
  scanf("%s", &c);

  if (c == 'Q') {
    printf("Welcome to 0DE5!");
  }

  return 0;
}
