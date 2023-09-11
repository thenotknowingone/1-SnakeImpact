#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <stdlib.h>

using namespace std;

enum direction
{
	STOP = 0, UP, DOWN, LEFT, RIGHT
};
direction dir;

int main()
{
	srand(time(nullptr));
	
	bool game_over = false;
	const short width = 60,height = 20;
	short	x = width - 1,
			y = height - 1,
			pearl_x = rand() % width,
			pearl_y = rand() % height,
			bonus_x = rand() % width,
			bonus_y = rand() % height,
			dynamic_bonus = rand() % 5 + 1,
			tail_x[100], 
			tail_y[100];
	long double score = 0;
	unsigned short tail_length = 0;
	dir = STOP;


	while(!game_over)
	{
		Sleep(1);
		system("cls");

		for (short i = 0; i < width + 2; i++)
			cout << "+";
			cout << endl;

		for (short i = 0; i < height; i++)
		{
			for (short j = 0; j < width; j++)
			{
				if (j == 0)
					cout << "+";
				if ((j == bonus_x && i == bonus_y) && (tail_length > 0) && (tail_length % dynamic_bonus == 0))
						cout << "$";
				else if (j == x && i == y)
					cout << "O";
				else if (j == pearl_x && i == pearl_y)
					cout << "@";
				else
				{
					bool print = false;
					for (short k = 0; k < tail_length; k++)
					{
						if (tail_x[k] == j && tail_y[k] == i)
						{
							cout << "x"	;
							print = true;
						}
					}
					if (!print)
						cout << " ";
				}
				if (j == width - 1)
					cout << "+";
			}
			cout << endl; 
		}

		for (short i = 0; i < width + 2; i++)
			cout << "+";

		cout << endl << "Keys: \tW S A D \tQuit: \tX" << endl << "Tail: \t" << tail_length << "\t\tScore: \t" << score << endl;
		cout << __DATE__ << ", " << __TIME__;

		short prev_tail_x = tail_x[0],
			prev_tail_y = tail_y[0],
			x_tail_buffer,
			y_tail_buffer;

			tail_x[0] = x;
			 tail_y[0] = y;

		for (short i = 1; i < tail_length; i++)
		{
			x_tail_buffer = tail_x[i];
			y_tail_buffer = tail_y[i];
			tail_x[i] = prev_tail_x;
			tail_y[i] = prev_tail_y;
			prev_tail_x = x_tail_buffer;
			prev_tail_y = y_tail_buffer;
		}

		if (_kbhit())
		{
			switch (_getch())
			{
			case'w':
				dir = UP;
				break;
			case's':
				dir = DOWN;
				break;
			case'a':
				dir = LEFT;
				break;
			case'd':
				dir = RIGHT;
				break;
			case'x':
				game_over = true ;
				break;
			case'W':
				dir = UP;
				break;
			case'S':
				dir = DOWN;
				break;
			case'A':
				dir = LEFT;
				break;
			case'D':
				dir = RIGHT;
				break;
			case'X':
				game_over = true;
				break;
			}
		}

		switch (dir)
		{
		case UP:
			y--;
			break;
		case DOWN:
			y++;
			break;
		case LEFT:
			x--;
			break;
		case RIGHT:
			x++;
			break;
		}

		if (x < 0 || y < 0 || x > width - 1 || y > height - 1)
			game_over = true;

		for (short i = 0; i < tail_length; i++)
		{
			if (tail_x[i] == x && tail_y[i] == y)
				game_over = true;
			if (tail_x[i] == pearl_x && tail_y[i] == pearl_y)
			{
				pearl_x = rand() % width;
				pearl_y = rand() % height;
			}
		}

		if (x == pearl_x && y == pearl_y)
		{
			pearl_x = rand() % width;
			pearl_y = rand() % height;
			score += 10;
			tail_length++;
		}

		if ((tail_length > 0) && (tail_length % dynamic_bonus == 0) && (x == bonus_x && y == bonus_y))
		{
			score += 100;
			dynamic_bonus += rand() % 4;
			tail_length -= rand() & 3;
			bonus_x = rand() % width;
			bonus_y = rand() % height;
			
		}
	}

	if (game_over)
	{
		cout << endl << "Good game! Play again? (y/n): ";
		do
		{
			char ans = _getch();
			if (ans == 'y' || ans == 'Y')
			{
				system("cls");
				main();
			}
			else if (ans == 'n' || ans == 'N')
				break;
		} while (true);
		
		system("cls");
		cout << "Your final score was " << score << ". Goodbye!" << endl;
	}

	system("pause");
	return 0;
}