#include<stdio.h>
#include<stdlib.h>
int choice,j,i=0,a[50],b[10],s;
void search();
void sort();
void delete();
void insert();
void display();
void menu();
int main()
{
printf("\nEnter the size of array:");
scanf("%d",&s);
printf("\nEnter the elements of array:");
for(i=0;i<s;i++)
{
scanf("%d",&a[i]);
}
menu();
return 0;
}
void menu()
{
printf("\n1.Insert");
printf("\n2.Delete");
printf("\n3.Sort");
printf("\n4.Search");
printf("\n5.Display");
printf("\n6.Exit");
printf("\nEnter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:insert();
break;
case 2:delete();
break;
case 3:sort();
break;
case 4:search();
break;
case 5:display();
break;
case 6:
exit;
}
}
void search()
{
int ele,loc;
printf("\nEnter element to be searched:");
scanf("%d",&ele);
//printf("Elements found ");
for(i=0;i<s;i++)
{
if(ele==a[i]){
printf("element found at %d",i);
}
}
menu();
}
void sort()
{
printf("\nCurrent Array:");
for(i=0;i<s;i++)
printf("\t %d",a[i]);
for(i=0;i<s;i++)
{
for(j=i+1;j<s;j++)
if(a[i]>a[j])
{
a[i]=a[i]+a[j];
a[j]=a[i]-a[j];
a[i]=a[i]-a[j];
}
}
printf("\nSorted Array:");
for(i=0;i<s;i++)
printf("\t%d",a[i]);
menu();
}
void insert()
{
int loc,ele;
printf("\nEnter the location:");
scanf("%d",&loc);
printf("\nEnter the element to be inserted:");
scanf("%d",&ele);
for(i=s;i>loc-1;i--)
a[i]=a[i-1];
a[loc]=ele;
printf("\nElement Inserted:");
printf("\nNew array after insertion:");
s++;
for(i=0;i<s;i++)
printf("\t%d",a[i]);
menu();
}
void delete()
{
int loc;
printf("\nEnter location:");
scanf("%d",&loc);
for(i=loc;i<s-1;i++)
{
a[i]=a[i+1];
}
printf("\nElement Deleted");
printf("\nNew array after deletion:");
s--;
for(i=0;i<s;i++)
printf("\t%d",a[i]);
menu();
}
void display()
{
int i;
if(s==0)
{
printf("No elements to display!");
return;
}
printf("Array elements are:");
for(i=0;i<s;i++)
{
printf("%d\t",a[i]);
}
menu();
}
