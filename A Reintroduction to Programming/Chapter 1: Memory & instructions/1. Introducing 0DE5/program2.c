#include <limits.h>
#include <stdio.h>

int main() {
  int count = 0;

  while (count < INT_MAX - 1) {
    count++;
    printf("Not yet...\n");
  }

  int name = 0x0DE5;
  name--;
  printf("Welcome to the %04X Membership Programme\n", name);
}
