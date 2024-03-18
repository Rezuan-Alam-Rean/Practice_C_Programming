#include <stdio.h>

int main()
{

    int n;
    printf("Enter the size of array :  ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the value of array \n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("give the index position which you want to Delete : \n");

    int pos;

    scanf("%d", &pos);

    for (int i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    printf("The elements of the array after delete:\n");

    for (int i = 0; i < n - 1; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
