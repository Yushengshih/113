#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   float hei,m,wei,BMI; 
    printf("======該使用者的BMI資訊======\n"); 
    printf("您的身高為：");
    scanf("%f",&hei);
    printf("您的體重為：");
    scanf("%f",&wei);
    printf("=============================\n");
    m=hei/100;
    BMI=wei/(m*m);
    printf("BMI = %.2f\n\n",BMI);
 	system("pause");
 	return 0;
}
