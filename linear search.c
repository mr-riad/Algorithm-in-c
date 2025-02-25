#include<stdio.h>
int main(){
    int number, target,i, found =0;
    printf("Enter the number of elements: ");
    scanf("%d", &number);

    int arr[number];

    printf("Enter %d elements: ", number);
    for (i = 0; i < number; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &target);

    for (i = 0; i < number; i++) {
        if (arr[i] == target) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element not found in the array\n");
    }

    return 0;
}
