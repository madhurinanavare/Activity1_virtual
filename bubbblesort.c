#include<stdio.h>
#include<conio.h>
void bubblesort(int,int);
int main()
{
    int a[10],n=5,i,j=0;
    if(n<0)
        printf("Size of array should not be zero");
    else{

        printf("Array is:");
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);

        bubblesort(n,a);

        printf("Sorted array is:");
        for(i=0;i<n;i++)
            printf("%d ",a[i]);
    }
    return 0;
}
void bubblesort(int n,int a[10])
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
