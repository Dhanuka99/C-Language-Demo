#include<stdio.h>


int sum(a,b);


int main(){
    int res = sum(20+30);
    printf("%d",&res);
    return 0;
}

int sum(int a,int b){
return a+b;
}

int min(int a,int b){
return a-b;
}
