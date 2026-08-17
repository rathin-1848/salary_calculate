/*Salary Calculation*/

#include<stdio.h>

int main()
{
    char name[100];
    float da,hra,ta,tax,salary,net;
    
    printf("Enter your name: ");
    scanf("%[\^n]", name);
    
    printf("Enter your salary: ");
    scanf("%f", &salary);
    
    da = (salary*20)/100;
    hra = (salary*40)/100;
    ta = (salary*10)/100;
    tax = ((salary+da+hra+ta)*10)/100;
    net = (salary+da+hra+ta)-tax;
    
    
    printf("See your salary details.\n");
    printf("%s's DA is: %.2f\n", name,da);
    printf("Yours HRA is: %.2f\n", hra);
    printf("Yours TA is: %.2f\n", ta);
    printf("Yours TAX is: %.2f\n", tax);
    printf("Yours total salary respect to %.2f: %.2f", salary,net);
    return 0;
}
