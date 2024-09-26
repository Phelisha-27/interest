#include<stdio.h>
int main() {
    double principal, rate, Amount;
    int n, time;
    printf("Enter Principal: ");
    scanf("%lf", &principal);
    printf("Enter Rate: ");
    scanf("%lf", &rate);
    printf("Enter times (n): ");
    scanf("%d", &n);
    printf("Enter time (t); ");
    scanf("%d", &time);
    rate = rate / 100; 
    Amount= principal * pow((1 + rate / n), n * time);
    printf("Compound Interest (A) = %.3lf\n", Amount);
return 0;
}