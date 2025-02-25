#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int temp[n];
    for (int size = 1; size < n; size *= 2) {
        for (int left_start = 0; left_start < n - 1; left_start += 2 * size) {
            int mid = left_start + size - 1;
            int right_end = (left_start + 2 * size - 1 < n - 1) ? left_start + 2 * size - 1 : n - 1;

            int left = left_start, right = mid + 1, index = left_start;

            while (left <= mid && right <= right_end) {
                if (arr[left] <= arr[right]) {
                    temp[index++] = arr[left++];
                } else {
                    temp[index++] = arr[right++];
                }
            }

            while (left <= mid) {
                temp[index++] = arr[left++];
            }
            while (right <= right_end) {
                temp[index++] = arr[right++];
            }

            for (int i = left_start; i <= right_end; i++) {
                arr[i] = temp[i];
            }
        }
    }

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
