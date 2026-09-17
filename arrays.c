#include <stdio.h>

int main( ) {
printf("");



int integer_array_1_index_amount = 10;

int integer_array_1[ integer_array_1_index_amount ];


for (

    int integer_array_index_counter = 0;

    integer_array_index_counter  < integer_array_1_index_amount;

    integer_array_index_counter++

) {

    integer_array_1[ integer_array_index_counter ] = integer_array_index_counter;

    printf( "%d\n", integer_array_1[ integer_array_index_counter ] );

}



printf("");
return 0;
}