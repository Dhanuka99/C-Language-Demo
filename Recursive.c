#include<stdio.h>

int sum=0;
int recurcive(num);
int num;
int studentMarks[15] = {12,3,2,5,14,16,17,13,3,6,7,8,4,5,11};
int infomation[10] = {1,2,3,4,5,6,7,8,9,10};
int len = sizeof(infomation);


int main(){
    int n;
    printf("Enter the number of rows");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
