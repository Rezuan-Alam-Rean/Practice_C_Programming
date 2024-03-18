#include<stdio.h>
int main () {
    int n;
    printf("Enter the size of array : \n");
    
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array : \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the item : ");
    int value; scanf("%d", &value);

    int loc = -1;
    for (int i = 0; i < n; i++) {
        if (value == arr[i]) {
            loc = i + 1;
            break;
        }
    }

    if (loc == -1) {
        printf("Item not found");
    } else{
        printf("Item found at loc %d", loc);
    }
    return 0;
}