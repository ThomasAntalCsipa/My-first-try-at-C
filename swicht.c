#include <stdio.h>

int integer_variabel_1 = 2;

int main() {

printf("\n");

switch ( integer_variabel_1 ) {

case 1:
    
    integer_variabel_1 += 1;

    printf("integer_variabel_1 == %i\n", integer_variabel_1 - 1);

    break;
    
case 2:
    
    integer_variabel_1 += 1;

    printf("integer_variabel_1 == %i\n", integer_variabel_1 - 1);

    break;

default:
    
    printf("integer_variabel_1 is not\n");

}

printf("\n");
return 0;
}