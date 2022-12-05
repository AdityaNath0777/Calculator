// TO be filled later...


#include<stdarg.h> // for variadic function


// Utility Functions
double ADD(int n, ...){
    // n is no. of variables
    
    double sum=0;

    // Declaring pointer to the
    // argument list
    va_list ptr;

    // initialising argument to the list pointer
    va_start(ptr, n);

    for(int k=0; k<n; ++k){
        sum += va_arg(ptr, double);
    }

    // destrotying the pointer
    va_end(ptr);

    // returning sum
    return sum;
}

double subtract(int n, ...){
    double sub=0;

    va_list ptr;
    va_start(ptr, n);
    sub = va_arg(ptr, double);

    for(int j=1; j<n; ++j){
        sub -= va_arg(ptr, double);
    }

    va_end(ptr);
    return sub;
}

double multiply(int n, ...){
    double multi=1;
    va_list ptr;
    va_start(ptr, n);

    for(int j=0; j<n; ++j){
        multi *= va_arg(ptr, double);
    }
    va_end(ptr);
    return multi;
}

double divide(int n, ...){
    double div=0;
    va_list ptr;
    va_start(ptr, n);

    div = va_arg(ptr, double);
    for(int i=1; i<n; ++i){
        div /= va_arg(ptr, double);
    }
    va_end(ptr);
    return div;
}


// Application Functions
void MyAdd(){
    int n;
    double a=0, b=0;
    double sum=0;
    printf(" -> How many numbers to add?: ");
    scanf("%d", &n);
    
    printf(" -> Enter numbers to be Added: ");
    for(int i=0; i<n; ++i){
        scanf("%lf", &a);
        // scanf("%.3f", &b);
        sum = ADD(2, a, sum);
    }
    printf(" -> The Addition is: %lf\n", sum);
}

void MySubtract(){
    int n;
    double a=0;
    double sub=0;
    printf(" -> How many are the numbers in subtarction: ");
    scanf("%d", &n);

    printf(" -> Enter the numbers for subtraction: ");
    scanf("%lf", &a);
    sub = a;
    for(int i=0; i<(n-1); ++i){
        scanf("%lf", &a);
        sub = subtract(2, sub, a);
    }
    printf(" -> The Subtraction is: %lf\n", sub);
}
void MyMultiply(){
    int n;
    double a=0;
    double multi=1;
    printf(" -> How many are the numbers in Multiplication: ");
    scanf("%d", &n);

    printf(" -> Enter the numbers for Multiplication: ");
    // scanf("%d", &a);
    // multi = a;
    for(int i=0; i<n; ++i){
        scanf("%lf", &a);
        multi = multiply(2, multi, a);
    }
    printf(" -> The Multiplication is: %lf\n", multi);
}
void MyDivide(){
    int n;
    double a=0;
    double div=1;
    printf(" -> How many are the numbers in Division: ");
    scanf("%d", &n);

    printf(" -> Enter the numbers for Division: ");
    scanf("%lf", &a);
    div = a;
    for(int i=0; i<(n-1); ++i){
        scanf("%lf", &a);
        div = divide(2, div, a);
    }
    printf(" -> The Division is: %lf\n", div);
}