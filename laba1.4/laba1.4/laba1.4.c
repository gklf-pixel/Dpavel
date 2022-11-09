#include <stdio.h> 
int main()
{
	int sem = 0;
	printf("input the semestr number = ");
	scanf_s("%d", &sem);
	if (sem<=4 && sem>=1) {
		switch (sem) {
		case 1:
			printf("Informatics and Foreign language");
			break;
		case 2:
			printf("Informatics and Foreign language");
			break;
		case 3:
			printf("Culturology, Mathematics and Foreign language");
			break;
		case 4:
			printf("Culturology, Mathematics and Foreign language");
			break;
		}
	}
	else
		printf("you have to input the number between 1 and 4");
	return 0;
}