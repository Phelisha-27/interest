#include<stdio.h>
int main() {
    float principal, rate, time, simple_interest;  
	printf("Enter Principal: ");
    scanf("%f", &principal);
    printf("Enter Rate: ");
    scanf("%f", &rate);
    printf("Enter Time in years: ");
    scanf("%f", &time);
    simple_interest = (principal * time * rate) / 100;
    printf("Simple Interest = %.3f\n", simple_interest);
    return 0;
}
