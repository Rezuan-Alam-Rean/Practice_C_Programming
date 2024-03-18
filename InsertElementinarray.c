#include <stdio.h>

int main(){


int n ;
printf("Enter the size of array :  ");
scanf("%d",&n);

int arr[n+1];

printf("Enter the value of array \n");

    for (int i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("give the index position which you want to inseart : \n");

    int pos , value ;

    scanf("%d",&pos);


    printf("give the  the value   : \n");

     scanf("%d",&value);

    for(int i = n ; i >= pos+1 ; i-- )
    {
        arr[i] = arr[i-1];
    }

    arr[pos] = value ;

    printf ("The elements of the array after inserting :\n");


    for(int i = 0 ; i <= n ; i++)
    {
        printf("%d\n",arr[i]);

    }




return 0 ;
}
