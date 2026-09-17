#include <stdio.h>



int main() {
printf("\n");


int int_var_1 = 0;

int int_var_2 = 1;


if ( int_var_1 ) {
	
	printf("int_var_1 is true\n");

}

else if ( !int_var_1 && int_var_2 != 2 ) {

	printf("int_var is false and int_var_2 is false\n");

}

else {

	printf("int_var is not not not ture\n");

}

printf("int_var_1 = %d\n", int_var_1);
printf("int_var_2 = %i\n", int_var_1);

( int_var_1 % 2 == 1 ) ? printf( "int_var_1 is even\n" ) : ( int_var_1 > 8 ) ? printf( "%d is even and more than 8\n", int_var_1 ) : printf( "%d is less or equal to 8\n", int_var_1 );


printf("\n");
return 0;
}