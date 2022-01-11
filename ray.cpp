#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include "Header.h"

void Move()
{
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