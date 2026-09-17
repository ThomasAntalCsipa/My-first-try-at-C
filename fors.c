#include <stdio.h>

int main() {
printf("\n");


int int_var_1 = 7;

for( 

    ;

    int_var_1 != 20;

    int_var_1++

    ) {

        printf("%i", int_var_1);
        
        if (!(int_var_1 % 4)){

            printf("\n");
            
        }
    }



printf("\n");
return 0;
}