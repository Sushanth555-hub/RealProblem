#include <stdio.h>
int main(){
    int n;
    float bill=0;
    printf("Enter the Unit consumed ");
    scanf("%d",&n);
    switch(n/100){
        case 0:
        bill =n*1.5;
        break;
        case 1:
        bill=(1.5*100)+((n-100)*2.5);
        break;
        case 2:
        case 3:
        bill=(1.5*100)+(2.5*100)+(4.0*(n-200));
        break;
        default:
        bill=(1.5*100)+(2.5*100)+(4*200)+((n-400)*6);
        break;
    }
    printf("%2f",bill);
}