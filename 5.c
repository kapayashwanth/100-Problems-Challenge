#include<stdio.h>
int main() {
  double tempc , tempf;
  printf("Enter temperature in Celsius: ");
  scanf("%lf", &tempc);
  tempf = (tempc * 9/5) + 32;
  printf("Temperature in Fahrenheit: %lf", tempf);
  return 0;
}
