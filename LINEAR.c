#include <stdio.h>

int main() {
    int i,n,data,f;
    printf("enter the elements to enter in an array\n");
    scanf("%d",&n);int a[n];for(i=0;i<n;i++)
    {
        printf("\n enter the data element to search");
        scanf("%d",&data);
        for(i=0;i<n;i++)
        {
            if (a[i]==data)
            {
                printf("\n item found at %d position",i);
                break;
                
            }
        }
        printf("element not found");
    }
if(i==0&& i==1)
{
    f=1;
    
}
else if (i>=1 && i<n-1)
{
    f=2;
    
}
if(f==1)
{
    printf("\n best case");
}
else if(f==2)
{
printf("\n best case");
}
else if(f==2)
{
    printf("\n  Average case");
}
else
{
    printf("\n worst case");
}
    return 0;
}














#include <stdio.h>

int main() {
     int i,j,a[3][3],b[3][3],sum[i][j];
     printf("Enter the elements of matrix a:");
     for(i=0;i<3;i++)
     for(j=0;j<3;j++)
     {
         scanf("%d",&a[i][j]);
     }
     printf("Enter the element of matrix b:");
     for(i=0;i<3;i++)
     for(j=0;j<3;j++)
     {
         scanf("%d",&b[i][j]);
         
     }
     for(i=0;i<3;i++)
     for(j=0;j<3;j++)
     {
         sum[i][j]=a[i][j]+b[i][j];
     }
     for(i=0;i<3;i++)
     for(j=0;j<3;j++)
     {
         printf("%d",sum[i][j]);
     }
     return 0;
}
