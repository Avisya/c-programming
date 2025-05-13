#include<stdio.h>
int main(){
    char x[20]="welcome";
    char y[10]={'a','l','l','\0'};
    printf("%c",y[2]);
    printf("\n%s",x);
    printf("\n%s",y);
    return 0;
}