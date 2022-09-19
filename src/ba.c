#include "gsa.h"
#include <stdio.h>
#include <string.h>
#include <assert.h>

void border_array(size_t n, const char x[n], int ba[n])
{
    // FIXME
    int c = 0, i = 1;
    int len = strlen(x);
    ba[0] = 0;
    while (i < len) {
        if (x[c] == x[i]) {
            c++;
            ba[i] = c;
            i++;
        }
        else {
            if(c > 0) {
                c = ba[(c-1)];
            } 
            else {
                ba[i] = 0;
                i++;
            }
        }
    }
}

void strict_border_array(size_t n, const char x[n], int ba[n])
{
    // FIXME

    // lazy solution
    border_array(n, x, ba);

    for (int i = 0 ; i < n ; i++) {
        if(ba[i-1] == ba[i]-1) ba[i] = 0;
    }
    
}