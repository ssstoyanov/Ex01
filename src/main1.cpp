/**
 *   Created by Stanislav on 9/8/20.
 */

#include "task1.h"

#include <cstdio>

int main(int n, char *argv[]) {
    if (n <= 0) {
        fprintf(stderr, "ERROR : the number must be greater than zero");
        return 1;
    }
    printf("The %d simple number is %d", n, getPrime(n));
    return 0;
}

