#include <stdio.h>

int main()
{
    int n;
    printf("enter the total size of array :");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array :\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("array after traversing : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", arr[i]);
    }

    return 0;
}
