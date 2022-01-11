#include <stdio.h>
#include <stdlib.h>


int main()
{
	int x = 20, y = 20, i = 0, j = 0;
	int flag = 0, score = 0;
	int generate = -1, x1 = -1, y1 = -1;
	char move;

	while (score != 1000)
	{
		system("cls");
		printf(" Score:%d\n", score);

		if (generate % 25 == 0)
		{
			x1 = 1 + (rand() % 25);
			y1 = 1 + (rand() % 10);
		}
		if (flag == 0)
		{
			for (i = 0; i < y; i++)
			{
				for (j = 0; j <= 50; j++)
				{
					printf(" ");
					if (j == x1 && i == y1)
					{
						printf("+");
					}
				}
				printf("\n");
			}
			for (j = 0; j < x; j++)
			{
				printf(" ");
			}
			printf(" *\n");
			for (j = 0; j < x; j++)
			{
				printf(" ");
			}
			printf("***\n");
		}
		else
		{
			for (i = 0; i < y; i++)
			{
				printf(" ");
				for (j = 0; j <= 50; j++)
				{	
					if (x == x1 &&  i < y1)
					{
						break;
					}
					if (j == x || (j == x1 && i == y1))
					{
						printf("%s", (j == x1 && i == y1 )  ? "+" : "|");
					}
					else
					{
						printf(" ");
					}
					if (x == x1 && y == i+1)
					{
						score = score + 100;
						x1 = -1, y1 = -1;
						x1 = 1 + (rand() % 25);
						y1 = 1 + (rand() % 10);
						generate = 26;
					}
				}
				printf("\n");
			}
			for (j = 0; j < x; j++)
			{
				printf(" ");
			}
			printf(" *\n");
			for (j = 0; j < x; j++)
			{
				printf(" ");
			}
			printf("***\n");
			flag = 0;
		}


		move = getch();
		switch (move)
		{
		case 'w':
			y--;
			flag = 0;
			generate++;
			break;
		case 'a':
			x--;
			flag = 0;
			generate++;
			break;
		case 's':
			y++;
			flag = 0;
			generate++;
			break;
		case 'd':
			x++;
			flag = 0;
			generate++;
			break;
		case ' ':
			flag = 1;
			generate++;
			break;
		default:
			break;
		}
	}
	system("cls");
	printf("\n\n%20s", "You Win!!\n\n\n");
	system("pause");
	return 0;
}
