#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {
  int *p = (int*)malloc(sizeof(int));
  *p = 0;
  *p = 1;
  int x = *p;
}
