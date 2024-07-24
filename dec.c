#include<stdio.h>
#include<conio.h>
void dectobin(int n)
{
    int binarynum[1000];
    int i=0;
    while(n>0)        
    {
        binarynum[i]=n%2;
        n=n/2;
        i++;
    }
    //print binaryarry 
    for(int j=i-1;j>=0;j--)
        printf("%d",binarynum[j]);
}
//driver code

int main()
{
    int n;
    printf("Enter the DEC Number for Conversion to Binary Number\n ");
    scanf("%d",&n);
    dectobin(n);
    return 0;
    getchar();
}