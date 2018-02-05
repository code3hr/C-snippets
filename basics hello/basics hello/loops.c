#include<stdio.h>

int main() {



for (int i = 0; i < 10; i++)
{

}

while (0)
{

}
//using goto


int a = 10;
int b = 0;
if (b == 0)
goto STOP;
printf("%d / %d = %d\n", a, b, a / b);
STOP:
printf("cannot divide by zero!!!\n");
}