//To find the area of a circles
#include<stdio.h>
int main(){
    int r;
    float pi = 3.14; //Making the value of pi as 3.14
    

    printf("Enter th Value of the Radius of the circle: ",r);
    scanf("%d",&r);
    float area = r*r*pi;

    printf("The area of the circle = %f",area);

    return 0;


}