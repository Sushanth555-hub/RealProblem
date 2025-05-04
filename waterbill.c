#include <stdio.h>
int main(){
    int litre;
    printf("Enter The amount of water: ");
    scanf("%d",&litre);
    float bill;
    switch(litre/50){
        case 0:
        bill=litre*5;
        break;
        case 1:
        bill=50*5+(litre-50)*8;
        break;
        case 2:
        case 3:
        bill=50*5+50*8+(litre-100)*10;
        break;
        default:
        bill=50*5+50*8+100*10+(litre-200)*15;
        break;
    }
    printf("%.2f",bill);
    return 0;
}