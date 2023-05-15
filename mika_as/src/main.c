#include <stdio.h>
#include <string.h>
#include "mika_as_strings.h"

int main(int argc, char** argv)
{
  if (
    argc == 2 
    && (strcmp(argv[1], "help\n") == 0 
    || strcmp(argv[1], "help") == 0)
  )
    printf(ARGV_HELP);
  else
    printf(NO_IMPL);

  return 0;
}