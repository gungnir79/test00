/**
 * test.c
 * sample C code
 * written by gungnir79
 * 2016.02.27
 */
#include <stdio.h>

int main(int argc, char* argv[]) {
  printf("Hello C!!\n");

  for(int i = 0; i < argc; i++) {
    printf("%02d: %s\n", i, argv[i]);
  }

  return 0;
}

/* EOF */
