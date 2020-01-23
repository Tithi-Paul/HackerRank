#include<stdio.h>
int main()
{
    int a,b,c,i;
    scanf("%d %d", &a, &b);
    c=a;
    for(i=1;i<=b;i++){
        if(i>c){
    printf("\n");
    c=c+a;
    }
    printf("%d",i);
    }
return 0;
}
