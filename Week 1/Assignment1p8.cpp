#include<stdio.h>
int main(){
    char arr[20]="Programming in C++";
    int *p;
    p=(int*)arr;
    printf("%c",p[2]);
    return 0;
}