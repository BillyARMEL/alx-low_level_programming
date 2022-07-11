#include "main.h"
/**
 *swap_int -  function that swaps the values of two integers.
 *@a : first pointer
 *@b : second pointer
 *return : nothing
 */

void swap_int(int *a, int *b)
{

int x = *a;

*a = *b;

*b = x;

}
