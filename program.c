#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  if (argc >= 2) {
    if (strcmp(argv[1], "thiago.scalone") == 0) {
      printf("\nCowabunga!\n");
    }

    if (strcmp(argv[1], "patrick.barcelos") == 0) {
      printf("\nLet's go!\n");
    }
  }
}
