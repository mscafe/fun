#include <stdio.h>

int main()
{
	int quit = 1;
	int grades[10];
	int count = 0;
	float percentages[10];
	float totalp = 0;
	float final = 0;
	while (quit == 1)
	{
		printf("Please enter a grade (%): ");
		scanf("%d", &grades[count]);
		printf("Percentage of course? (%):  ");
		scanf("%f", &percentages[count]);
		percentages[count] = percentages[count] / 100;
		printf("Add another (1 = yes, 2 = no): ");
		count++;	
		scanf("%d",&quit);
	}
	quit = 0;
	for (quit = 0; quit < count; quit++)
	{
		final = final + ((float)grades[quit] * percentages[quit]);
		totalp = totalp + percentages[quit];
	}
	printf("\nTotal percentage earned: %.2f %%",totalp*100);
	printf("\nPresent grade: %.2f %%",final/(totalp*100) * 100);
	printf("\nThe max grade you can earn now is %.2f %% \n", 
		((final/(totalp*100)*100)*totalp + (100 * (1-totalp))));
	return 0;
}
