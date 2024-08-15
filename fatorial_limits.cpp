#include <stdio.h>
#include <gmp.h>

void calculate_factorial(int n) {
    mpz_t result;
    mpz_init(result);
    mpz_set_ui(result, 1);

    for (int i = 2; i <= n; i++) {
        mpz_mul_ui(result, result, i);
    }

    gmp_printf("%Zd\n", result);
    mpz_clear(result);
}

int main() {
    int n = 100;
    calculate_factorial(n);
    return 0;
}