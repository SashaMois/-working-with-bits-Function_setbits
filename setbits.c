/* Function 'setbits' return argument 'x' that have 
 * 'n' bits starting from 'p' pozition are equal 'n'
 * extreme right bits of argument 'y' and the rest of
 * the bits are untouched.
 */

#include <stdio.h>

int setbits(x, p, n, y);

int setbits(x, p, n, y)
{
    int a;
    a = (y & ~(~0 << n)) << p; /* take extreme right bits of argument 'y' 
                                      and move it on 'p' pozitions */
    x = x | a;

    return x;
}