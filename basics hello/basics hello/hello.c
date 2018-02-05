#include <stdio.h>


//avoid putting function inside functions cause compile error
void sayHello() {
	printf("this is a procedure not function cus it returns nothing");
}

int main()
{

	//declaring variable
	int age = 32;

	const int a; //this is a constrant
	printf(" hello from c !!! \n ");
	printf("same thing here \r ");
	printf("");
	//char type

	printf("char size = %d byte\n", sizeof(char));
	printf("char size = %d byte\n", sizeof(unsigned char));
	printf("char size = %d byte\n", sizeof(char));


	//int type

	printf("int size = %d byte\n", sizeof(int));
	printf("int size = %d byte\n", sizeof(unsigned int));
	printf("int size = %d byte\n", sizeof(long int));

	//long long

	//fload double
	//by default all floating point number are double
	const float pi = 3.14l;
	const float pi2= 3.14f;


	//Enum, this is used to define name constants ie give names to interger constants
	//enum <name> {enumeration_list}[variable_name];

	enum Days {
		Sunday,
		Monday, 
		Tuesday,
		Wednesday,
		Thursday,
		Friday,
		Saturday
	} //you can defined it here also
	;
	enum Days Mydays; //defining the data structure
	Mydays = Sunday;
	printf("Sunday = %d\n", Mydays);

	float f = (float)3 / 5; // typecasting 

	sayHello();

	getch();

	return 0;
}