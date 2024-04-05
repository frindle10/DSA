#include <stdio.h>
#include <stdlib.h>

int binarySearch(int* a, int low, int high, int x) {
    if (low > high) {
        return -1;
    }

    int mid = low + (high - low) / 2;

    if (x == a[mid]) {
        return mid;
    }
    else if (x < a[mid]) {
        return binarySearch(a, low, mid - 1, x);
    }
    else {
        return binarySearch(a, mid + 1, high, x);
    }
}

int main(void) {
    int n;
    scanf("%d", &n);

    int* a = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int x;
    scanf("%d", &x);

    int find = binarySearch(a, 0, n - 1, x);

    printf("%d\n", find);

    return 0;
}
