#include <stdio.h>
#include <wctype.h>

const int HEIGHT = 10;
const int WIDTH = 10;
char field[HEIGHT + 2][WIDTH + 2] = {};

void setfield() {
  for (int i = 0; i < HEIGHT + 2; ++i) {
    for (int j = 0; j < WIDTH + 2; ++j) {
      field[i][j] = ' ';
    }
  }
  for (int i = 0; i < WIDTH + 2; ++i) {
    field[0][i] = '#';
    field[HEIGHT + 1][i] = '#';
  }
  for (int i = 0; i < HEIGHT + 2; ++i) {
    field[i][0] = '#';
    field[i][WIDTH + 1] = '#';
  }
}
void printfield() {
  for (int i = 0; i < HEIGHT + 2; ++i) {
    for (int x = 0; x < WIDTH + 2; ++x) {
      printf("%c", field[i][x]);
    }
    printf("\n");
  }
}

int main() {
  setfield();
  printfield();
}
