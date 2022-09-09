#define Add(x,y) ((x)+(y))
#define Minus(x,y) ((x)-(y))
#define Plus(x,y) ((x)*(y))
#define Div(x,y) ((x)/(y))
#include<stdio.h>
int main(void)
{
	int b = 0;
	int c = 0;
	int d = 0;
	do scanf_s("%d+%d", &b, &c);
	while (printf("%d\n", Add(b, c)));
	do scanf_s("%d-%d", &b, &c);
	while (printf("%d\n", Minus(b, c)));
	
	
	return 0;
}