#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   float hei,m,wei,BMI; 
    printf("======�ӨϥΪ̪�BMI��T======\n"); 
    printf("�z���������G");
    scanf("%f",&hei);
    printf("�z���魫���G");
    scanf("%f",&wei);
    printf("=============================\n");
    m=hei/100;
    BMI=wei/(m*m);
    printf("BMI = %.2f\n\n",BMI);
 	system("pause");
 	return 0;
}
