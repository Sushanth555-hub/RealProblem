#include <stdio.h>
int main(){
    float h,w,IBM;
    printf("Enter the height(Meter) and weight(KG) of the person respectfully: ");
  scanf("%f %f",&h,&w);
    IBM=w/(h*h);
    if(IBM<18.5){
        printf("Underweight");
    }else if(IBM<24.9){
        printf("Normal");
    }else if(IBM<29.9){
        printf("Overweight");
    }else{
        printf("Obese");
    }
    return 0;
}