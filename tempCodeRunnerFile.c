#include<stdio.h>
#include<stdlib.h>
int main(){
int n,i,*ptr;
printf("enter the size oof arry");
scanf("%d",&n);
ptr=(int*)malloc(n*sizeof(int));
printf("entrre ellements");
for(i=0;i<n;i++)
{
    scanf("%d",ptr+i);
}
printf("ellements");
for(i=0;i<n;i++)
{
    printf("%d",*(ptr+i));
}

}