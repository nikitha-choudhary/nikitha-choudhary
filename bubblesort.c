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
Enter the size of array=23
Enter the elements of array----
 Enter the 1 element
*/
