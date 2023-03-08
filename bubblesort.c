#include <stdio.h>
void main()
{
    int arr[20],size,i, j, temp;
    printf("Enter the size of array=");
    scanf("%d",& size);
    printf("Enter the elements of array----");
    for(i=0;i<size;i++)
    {
        printf("\n Enter the %d element",i+1);
        scanf("%d",& arr[i]);
    }
    
    for(i=0;j<size n-1;j++)
    for(j=0;j<size n-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    
    
        printf("\n Sorted array is----");
        for(i=0;i<size;i++)
        printf("\t %d",arr[i]);
}
    
/*
Enter the size of array=223
Enter the elements of array----
 Enter the 1 element12
 Enter the 2 element34
 Enter the 3 element45
 Enter the 4 element78
 Enter the 5 element87
 Enter the 6 element89
 Enter the 7 element98
 Enter the 8 element65
 Enter the 9 element90
 Enter the 10 element78
 Enter the 11 element64
 Enter the 12 element
*/
