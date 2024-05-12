#include <stdio.h>
#include <string.h>

void print_matrix (int c, int (*a)[3]);

void print_matrix_1 (int m, int n, int *a)
{
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf ("%d ", a[i * n + j]);
        }
        printf ("\n");
    }
}

void print_matrix_2 (int m, int n, int a[][n])
{
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf ("%d ", a[i][j]);
        }
        printf ("\n");
    }
}

int main(void) {
    int m[2][3] = {{1,2,3},{4,5,6}};
    print_matrix_1(2,3,&m[0][0]);
    print_matrix_2(2,3,m);
    //~ print_matrix(2,3,m);
    return 0;
}

