#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar liball.a *.o
ranlib liball.a
