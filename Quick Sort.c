#include<stdio.h>
#include<stdlib.h>

int Partition(int a[],int LB,int UB )
{   int Pivot,start,temp,end;
    Pivot=a[LB];
    start=LB;
    end=UB;
    while(start<end)
    {
    
        while(a[start]<=Pivot)
        {
            start++;
        }
        while(a[end]>Pivot)
        {
            end--;
        }
        if(start<end)
        {
            temp=a[start];
            a[start]=a[end];
            a[end]=temp;
            
        }
         
        } 
            temp=a[LB];
            a[LB]=a[end];
            a[end]=temp;
            return end;
    }
void Quick_sort(int a[],int LB,int UB )
{   int loc;
    if(LB<UB)
    {
        loc=Partition(a,LB,UB);
        Quick_sort(a,LB,loc-1);
        Quick_sort(a,loc+1,UB);
    }
}
void display(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
}
int main()
{
    int size;
    printf("Enter size of array\n");
    scanf("%d",&size);
    int a[size];
    printf("Enter Elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("You Enter \n");
    display(a,size);
    Quick_sort(a,0,size-1);
    printf("\nSorted array is\n");
    display(a,size);
    
}
    
 
 