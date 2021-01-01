#include<stdio.h>
voidSort(intA[],intn)
{
inti,j,min,temp;
for(i=0;i<n;i++)
{
min=i;
for(j=i+1;j<n;j++)
{
if(A[j]<A[min])
min=j;

}
temp=A[i];
A[i]=A[min];
A[min]=temp;
}
}
int Search(intA[],intlow,inthigh,intkey)
{
intmid,i,j;
mid=(low+high)/2;
if(A[mid]==key)
return mid+1;
else if(A[mid]>key)
return Search(A,low,mid-1,key);
else if(A[mid]<key)
return Search(A,mid+1,high,key);
else
return-1;

}
int main()
{
intA[100],i,j,n,pos,key;
printf("enternumberofelements\n");
scanf("%d",&n);
printf("enterarrayelements\n");
for(i=0;i<n;i++)
scanf("%d",&A[i]);
printf("\nentertheelementtobesearchedfor\n");
scanf("%d",&key);
Sort(A,n);
printf("\nSortedarrayis\n");
for(i=0;i<n;i++)

printf("%d\t",A[i]);
printf("\n");
pos=Search(A,0,n-1,key);
if(pos==-1)
printf("elementnotfound\n");
else
printf("elementfoundat%d\n",pos);

}
