#include "sum.h"

#include<stdio.h>
#include<assert.h>

/* Sum integers 1 to n */
int sum (int n)
{
/* pre-condition */
  assert (n >= 1);
/* post-condition */
  if (n > 1)
    return n + sum (n - 1);
  else
    return 1;
}

/* Sum integers 1 to n */
int sumtail (int n, int total)
{
  assert(n >0); /* Pre-condtion */
  
  if (n == 1) /* Base case: n is 1 */
  {
    return 1 + total; /* Return the total added with 1  */
  }
  else /* Recusive step */
  {
    return sumtail(n - 1, n + total); /* Use recursion on n - 1 and adding n to the total. total becoming the sum of n   */
  }

}

/* Sum integers 1 to n */
int sumwhile (int n)
{
  assert(n >0); /* Pre-condition */
  
  int sum = 0; /* sum variable */

  /* Loop calculating sum of n */
  while (n > 0) 
  {
    sum = n + sum; /* Adding n to the sum */

    n--; /* Decrementing n */
  }
  
  return sum;
}

