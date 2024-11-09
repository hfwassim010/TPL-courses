#include <stdio.h>
#include <stdlib.h>

int saisir() {
    int n;
    do {
        printf("Saisir N (0 < N <= 6): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 6);  // Corrected range check

    return n;
}

void remplir(int a[10], int b[10], int n) {
    for (int i = 0; i < n; i++) {
        do {
            printf("Saisir A[%d]: ", i);
            scanf("%d", &a[i]);  // Use &a[i] to store the input correctly
        } while (a[i] < 0);  // Check that a[i] is non-negative

        do {
            printf("Saisir B[%d]: ", i);
            scanf("%d", &b[i]);  // Use &b[i] to store the input correctly
        } while (b[i] < 0);  // Check that b[i] is non-negative
    }
}

int Somme(int a[10], int b[10], int n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        s += a[i] * b[i];
    }
    return s;
}

int main() {
    int A[10];
    int B[10];

    int n = saisir();
    remplir(A, B, n);
    int s = Somme(A, B, n);
    printf("La somme des produits A[i] * B[i] est: %d\n", s);  // Print the result
    return 0;
}
