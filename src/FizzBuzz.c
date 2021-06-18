#include<stdio.h>
#include <stdbool.h>

int isMultipleOfNumber(int number, int multiple){
    return number % multiple == 0;
}

int main() {
    int i;

    for(i=1; i<=100; i++) {
        bool fizz = isMultipleOfNumber(i, 3);
        bool buzz = isMultipleOfNumber(i, 5);

        if(!fizz && !buzz) printf("%d\n", i);
        if(fizz && buzz) printf("FizzBuzz\n");
        if(fizz) printf("Fizz\n");
        if(buzz) printf("Buzz\n");
    }
    
    return 0;
}
