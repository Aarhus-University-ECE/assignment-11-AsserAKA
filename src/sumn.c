#include "sumn.h"

#include<stdio.h>

int sumn (int n)
{
    if (n == 1) /* Base case: The n is 1 */
    {
        return 1; 
    }
    else /* Recursive step: The n is larger than 1 */
    {
        return ((2 * n) - 1) + sumn(n-1); /* Calculating n^2 using recursion  */
    }
}