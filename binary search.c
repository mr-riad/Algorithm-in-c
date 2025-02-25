#include <stdio.h>

int main() {
    int number, arr[100], target;

    printf("Enter the number of elements: ");
    scanf("%d", &number);

    printf("Enter the sorted array: ");
    for (int i = 0; i < number; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the searching value: ");
    scanf("%d", &target);

    int low = 0, high = number - 1, mid, found = -1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == target) {
            found = mid;
            break;
        } else if (arr[mid] < target) {
            low = mid + 1;
            high = mid - 1;
        } else {
        }
    }

    if (found != -1) {
        printf("The searched number is found at index %d\n", found);
    } else {
        printf("Not Found\n");
    }

    return 0;
}
