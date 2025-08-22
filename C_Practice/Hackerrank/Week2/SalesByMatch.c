#include <stdio.h>

int sockMerchant(int n, int arr[]) {
    int pairs = 0;
    int count[101] = {0};
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
        if (count[arr[i]] % 2 == 0) {
            pairs++;
        }
    }
    return pairs;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d\n", sockMerchant(n,arr));
    return 0;
}
