#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <chrono>

using namespace std::chrono;
using namespace std;

enum direction
{
	STOP = 0, UP, DOWN, LEFT, RIGHT
};
direction dir;

int main()
{
	srand(time(nullptr));
	
	bool game_over =	false;
	const short			width = 60,height = 20;
	unsigned short		tail_length = 0;
	long double			score = 0;
	short				x = width - 1,
						y = height - 1,
						pearl_x = rand() % width,
						pearl_y = rand() % height,
						bonus_x = rand() % width,
						bonus_y = rand() % height,
						dynamic_bonus = rand() % 9 + 1,
						tail_x[999], 
						tail_y[999],
						game_speed,
						score_multiplier = 0,
						steps_counter = 0;
	dir				=	STOP;

	string line = "Snake_art.txt";
	ifstream inFile;
	inFile.open("Snake_art.txt");
	if (inFile.is_open())
	{
		while (getline(inFile, line))
			cout << line << endl;
		
		cout << endl;
	}
	else
	{
		cout << "       xxxxx" << endl << "$ ~Oxxxx   xxxxx     xxxxxxxxxxxxx" << endl << "               xxxxxxx" << endl;
	}
	inFile.close();

	cout << endl << "****Welcome to Snake Impact!!!****" << endl;
	cout << " **v2.0.1. By Ryck. Sep/7/2023.** " << endl << endl;

	cout << "Please choose a level (0-9): ";

	do
	{
		char ans = _getch();

		if (ans == '0')
		{
			game_speed = 450;
			score_multiplier = 1;
			break;
		}
		if (ans == '1')
		{
			game_speed = 400;
			score_multiplier = 2;
			break;
		}
		if (ans == '2')
		{
			game_speed = 350;
			score_multiplier = 3;
			break;
		}
		if (ans == '3')
		{
			game_speed = 300;
			score_multiplier = 4;
			break;
		}
		if (ans == '4')
		{
			game_speed = 250;
			score_multiplier = 5;
			break;
		}
		if (ans == '5')
		{
			game_speed = 200;
			score_multiplier = 6;
			break;
		}
		if (ans == '6')
		{
			game_speed = 150;
			score_multiplier = 7;
			break;
		}
		if (ans == '7')
		{
			game_speed = 100;
			score_multiplier = 8;
			break;
		}
		if (ans == '8')
		{
			game_speed = 50;
			score_multiplier = 9;
			break;
		}
		if (ans == '9')
		{
			game_speed = 1;
			score_multiplier = 10;
			break;
		}
	} while (true);

	while(!game_over)
	{
		Sleep(game_speed);
		system("cls");

		bool spawn_bonus = false;
		
		if ((tail_length > 0) && (tail_length % dynamic_bonus == 0))
			spawn_bonus = true;

		if (spawn_bonus)
			if (x - 1 || x + 1 || y - 1 || y + 1)
				steps_counter++;

		if (steps_counter > 75)
		{
			spawn_bonus = false;
			steps_counter = 0;
			dynamic_bonus = rand() % 9 + 1;
			tail_length++;
			bonus_x = (rand() + rand()) % width;
			bonus_y = (rand() + rand()) % height;
		}

		for (short i = 0; i < width + 2; i++)
			cout << "+";
			cout << endl;

		for (short i = 0; i < height; i++)
		{
			for (short j = 0; j < width; j++)
			{
				if (j == 0)
					cout << "+";
				if ((j == bonus_x && i == bonus_y) && (spawn_bonus))
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
		cout << __DATE__ << ", " << __TIME__ << endl << steps_counter;


		short	prev_tail_x = tail_x[0],
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
				game_over = true;
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
			score += 10 * score_multiplier;
			tail_length++;
			steps_counter = 0;
		}

		if ((tail_length > 0) && (spawn_bonus) && (x == bonus_x && y == bonus_y))
		{
			score += 100 * score_multiplier;
			dynamic_bonus += rand() % 9;
			if (tail_length > 2)
				tail_length -= rand() & 3;
			bonus_x = rand() % width;
			bonus_y = rand() % height;
			steps_counter = 0;
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

		string line = "Snake_art.txt";
		ifstream inFile;
		inFile.open("Snake_art.txt");
		if (inFile.is_open())
		{
			while (getline(inFile, line))
				cout << line << endl;

			cout << endl;
		}
		else
		{
			cout << "       xxxxx" << endl << "$ ~Oxxxx   xxxxx     xxxxxxxxxxxxx" << endl << "               xxxxxxx" << endl;
		}
		inFile.close();

		cout << endl << "Your final score was " << score << ". Goodbye!" << endl;
	}

	system("pause");
	exit(1);
	return 0;
}