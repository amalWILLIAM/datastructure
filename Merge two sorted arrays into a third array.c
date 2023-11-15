#include<stdio.h>
void merge(int[],int,int[],int,int[]);
int main()
{
 int a[10],b[10],m,n,c[20],i,j,s;
 printf("Enter the size of array 1 =");
 scanf("%d",&m);
 printf("\nEnter the elements of array 1 in sorted order: ");
 for(i=0;i<m;i++)
 {
 	scanf("%d",&a[i]);
 }
 printf("Enter the size of array 2 =");
 scanf("%d",&n);
 printf("\nEnter the elements of array 2 in sorted order: ");
 for(i=0;i<n;i++)
 {
 	scanf("%d",&b[i]);
 }
 merge(a,m,b,n,c);
 s=n+m;
 printf("\nMerge array =\n");
 for(i=0;i<s;i++)
 {
 	printf("\t%d",c[i]);
 }
 return 0;
 }
 void merge(int a[10],int m,int b[10],int n,int c[20])
 {
 	int i=0,j=0,k=0;
 	while(i<m&&j<n)
 	{
 		if(a[i]<b[j])
 		{
 			c[k]=a[i];
 			k++;
 			i++;
 		}
 		else
 		{
 			c[k]=b[j];
 			j++;
 			k++;
 		}
 	} 	
 	while(i<m)
 	{
 		c[k]=a[i];
 		k++;
 		i++;
 	}
 	while(j<n)
 	{
 		c[k]=b[j];
 		k++;
 		j++;
 	}
 }
