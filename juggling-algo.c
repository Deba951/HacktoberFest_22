#include<stdio.h> 
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
void ArrayRotate(int A[], int n, int k) {
    int d = -1, i, temp, j;
    for (i = 0; i < gcd(n, k); i++) {
        j = i;
        temp = A[i];
        while (1) {
            d = (j + k) % n;
            if (d == i) break;
            A[j] = A[d];
            j = d;
        }
        A[j] = temp;
    }
}
void displayArray(int A[], int n) {
    int i;
    for (i = 0; i < n; i++) printf("%d  ", A[i]);
    printf("
");
}
int main() {
    int n = 9, i, k = 3;
    printf("The size of the Array %d", n);
    int A[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("The Array elements");
    for (i = 0; i < n; i++) printf("%d ", A[i]);
    printf("The value of k %d", k);
    displayArray(A, n);
    ArrayRotate(A, n, k);
    displayArray(A, n);
    return 0;
}
