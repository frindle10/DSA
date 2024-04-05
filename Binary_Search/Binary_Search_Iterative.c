#include <stdio.h>
#include <stdlib.h>

int binarySearch(int* a, int n, int x) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (x == a[mid]) {
            return mid;
        }
        else if (x < a[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return -1;
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

    int find = binarySearch(a, n, x);

    printf("%d\n", find);

    return 0;
}
