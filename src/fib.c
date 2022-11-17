/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */
int fib (int n, int p, int pp)
{
    assert(n >= 1); /* Pre-condition */

    if (n == 1) /* Base case: n is 1 */
    {
        return p;
    }
    else if (n == 2) /* Base case: n is 2 */
    {
        return pp;
    }
    else /* Recursive step: n is larger than 2 */
    {
        return fib(n - 1, pp, pp + p); /* Use recusion on n - 1 (decrementing), assigning p the value of pp and adding p to pp */
    }
}
