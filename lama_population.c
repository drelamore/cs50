#include <stdio.h>

int calc_year(int p);
int give_pop(void);

int main(void)
{
    int p = give_pop();
	int y = calc_year(p);
	printf("The population will double in %i years\n", y);
}

int give_pop(void)
{
    int p;
    do
	{
		printf("Give population (bigger or equal to 9): ");  
	    scanf("%d", &p);
	}
    while (p < 9);
    
	return p;
}

int calc_year(int p)
{
	int p_o = p; // Original population
	int i = 0;
	do
	{
		p =  p + (p/3 - p/4);
		i++;
	}
	while (p < 2*p_o);

	return i;
}