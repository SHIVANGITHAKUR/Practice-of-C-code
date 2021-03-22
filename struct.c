#include <stdio.h>
typedef struct complex_t {
    float real;
    float imaginary;
} complex_t;

complex_t add(complex_t n1, complex_t n2){
    complex_t temp;
    temp.real = n1.real + n2.real;
    temp.imaginary = n1.imaginary + n2.imaginary;
    return (temp);
}

complex_t difference(complex_t n1, complex_t n2){
    complex_t temp;
    temp.real =  n1.real - n2.real;
    temp.imaginary = n1.imaginary - n2.imaginary;
    return(temp);
}

complex_t product(complex_t n1, complex_t n2){
    complex_t temp;
    temp.real = n1.real*n2.real;
    temp.imaginary = n1.imaginary*n2.imaginary;
    return (temp);
}

complex_t divide(complex_t n1, complex_t n2){
    complex_t temp;
    temp.real = n1.real/n2.real;
    temp.imaginary = n1.imaginary/n2.imaginary;
    return (temp);
}

int main(){
    complex_t n1, n2, result, result1, result2, result3;
    n1.real = 4;
    n1.imaginary = 24;
    n2.real = 3;
    n2.imaginary = 12;

    result = add(n1, n2);
    result1 = difference(n1, n2);
    result2 = product(n1, n2);
    result3 = divide(n1, n2);

    printf("Sum: %.1f + %.2fi\n", result.real, result.imaginary);
    printf("subtract: %.1f - %.2fi\n",result1.real, result1.imaginary);
    printf("Multiplication: %.1f*%.2fi\n", result2.real, result2.imaginary);
    printf("Division: %.1f/%.2fi\n", result3.real, result3.imaginary);
}