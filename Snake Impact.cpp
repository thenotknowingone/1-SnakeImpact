#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <iomanip>


void Help()
{
	system("cls");

	std::string help_title_1 = "I. Help and Settings Menu";
	std::string help_title_2 = "II. How to Play?";
	std::string help_title_3 = "III. Snakey's Story";
	std::string help_title_4 = "IV. About the Game Creator";
	std::string help_title_5 = "V. Tips";
	std::string help_title_6 = "VI. Feedback";
	std::string help_title_7 = "VII. Dedication";

	std::cout << help_title_1 << std::endl;

	for (int i = 0; i < help_title_1.length(); i++)
		std::cout << "=";
		std::cout << std::endl;
		
	std::cout << std::endl << std::left << std::setw(20) << "Option" << std::setw(10) << "Key" << std::setw(80) << "Description" << std::endl;

	for (int i = 0; i < 110; i++)
		std::cout << "=";
		std::cout << std::endl;

	std::cout << std::left << std::setw(20) << "UP" << std::setw(10) << "W" << std::setw(50) << "Snakey crawls upwards." << std::endl;
	std::cout << std::left << std::setw(20) << "DOWN" << std::setw(10) << "S" << std::setw(50) << "Snakey crawls downwards." << std::endl;
	std::cout << std::left << std::setw(20) << "LEFT" << std::setw(10) << "A" << std::setw(50) << "Snakey crawls leftwards." << std::endl;
	std::cout << std::left << std::setw(20) << "RIGHT" << std::setw(10) << "D" << std::setw(50) << "Snakey crawls rightwards." << std::endl;
	std::cout << std::left << std::setw(20) << "PAUSE" << std::setw(10) << "SPACEBAR" << std::setw(50) << "Pause the game until any button is pressed." << std::endl;
	std::cout << std::left << std::setw(20) << "QUIT" << std::setw(10) << "X" << std::setw(50) << "Quits current game and asks player if he wants to play again or quit completely." << std::endl;
	std::cout << std::left << std::setw(20) << "HELP" << std::setw(10) << "Z" << std::setw(50) << "Flashes this page. Press Z again to continue." << std::endl;
	std::cout << std::left << std::setw(20) << "PING" << std::setw(10) << "Esc" << std::setw(50) << "In times of desperation, we need to pretend that we're working. Use in-game." << std::endl;

	for (int i = 0; i < 110; i++)
		std::cout << "=";
		std::cout << std::endl;

	std::cout << std::left << std::setw(20) << "Light blue text" << std::setw(10) << "1" << std::setw(50) << "Changes text color to light blue. Press 1 now to activate." << std::endl;
	std::cout << std::left << std::setw(20) << "Green text" << std::setw(10) << "2" << std::setw(50) << "Changes text color to green. Press 2 now to activate." << std::endl;
	std::cout << std::left << std::setw(20) << "Aqua text" << std::setw(10) << "3" << std::setw(50) << "Changes text color to aqua. Press 3 now to activate." << std::endl;
	std::cout << std::left << std::setw(20) << "Light red text" << std::setw(10) << "4" << std::setw(50) << "Changes text color to light red. Press 4 now to activate." << std::endl;
	std::cout << std::left << std::setw(20) << "Light purple text" << std::setw(10) << "5" << std::setw(50) << "Changes text color to light purple. Press 5 now to activate." << std::endl;
	std::cout << std::left << std::setw(20) << "Yellow text" << std::setw(10) << "6" << std::setw(50) << "Changes text color to yellow. Press 6 now to activate." << std::endl;
	std::cout << std::left << std::setw(20) << "White text" << std::setw(10) << "7" << std::setw(50) << "Changes text color to white. Press 7 now to activate." << std::endl;
	std::cout << std::left << std::setw(20) << "Gray text" << std::setw(10) << "8" << std::setw(50) << "Changes text color to gray. Press 8 now to activate." << std::endl;
	std::cout << std::left << std::setw(20) << "Slim Snakey" << std::setw(10) << "." << std::setw(50) << "Makes Snakey look slimmer. Press '.' while in-game." << std::endl;
	std::cout << std::left << std::setw(20) << "Buff Snakey" << std::setw(10) << "," << std::setw(50) << "Makes Snakey look buffed. Press ',' while in-game." << std::endl;
	std::cout << std::left << std::setw(20) << "Wavy Snakey" << std::setw(10) << "/" << std::setw(50) << "Makes Snakey look wavy. Press '/' while in-game." << std::endl;
	std::cout << std::left << std::setw(20) << "Pointy Head on" << std::setw(10) << "M" << std::setw(50) << "Makes Snakey's head look pointy. Press 'M' while in-game." << std::endl;
	std::cout << std::left << std::setw(20) << "Pointy Head off" << std::setw(10) << "N" << std::setw(50) << "Makes Snakey's head round again. Press 'N' while in-game." << std::endl;

	for (int i = 0; i < 110; i++)
		std::cout << "=";
		std::cout << std::endl;

	std::cout << std::left << std::setw(20) << "Scoreboard" << std::setw(10) << "Y" << std::setw(50) << "Pauses the game and checks the scoreboard. Press Y while in-game." << std::endl;

	for (int i = 0; i < 110; i++)
		std::cout << "=";
		std::cout << std::endl;

	std::cout << std::endl << help_title_2 << std::endl;
		
	for (int i = 0; i < help_title_2.length(); i++)
		std::cout << "=";
		std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "Welcome to Snake Impact!!! Your mission is to help Snakey gobble up as much pearl and bonuses as possible" << std::endl << "while avoiding collisions." << std::endl;
	std::cout << std::endl << "1. Rules" << std::endl << std::endl;
	std::cout << "*The snake will constantly move in the direction it's facing once you started." << std::endl;
	std::cout << "*It's game over if the snake collides with the wall or itself." << std::endl;
	std::cout << std::endl << "2. Collecting Pearls and Bonuses" << std::endl << std::endl;
	std::cout << "*Pearls and bonuses will appear randomly on the screen." << std::endl;
	std::cout << "*Direct your snake to eat the pearl or bonus to make it grow longer." << std::endl;
	std::cout << std::endl << "3. Scoring" << std::endl << std::endl;
	std::cout << "*Your score increases with each pearl and bonus consumed." << std::endl;
	std::cout << "*Bonuses appear when Snakey's tail is divisible by 0. Watch out for the bonus before it expires!" << std::endl;
	std::cout << "*The bonus multiplier decreases from 5 to 1 so get it as soon as possible." << std::endl;
	std::cout << "*If you reached the tail length of 500, you must be a pro. Bonuses will help slow down Snakey's tail growth" << std::endl << " because I know a pro like you can do better! Tail will randomly decrease from 1-2." << std::endl;
	std::cout << "*Okay, so you reached the tail length of 750. You're a God! Bonuses will now randomly decrease tail's length" << std::endl << " by 1-3. Email me about your achievement!" << std::endl;
	std::cout << "*Try to achieve the highest score possible and share it with your friends!" << std::endl;
	std::cout << std::endl << "4. Special Considerations" << std::endl << std::endl;
	std::cout << "*As the snake grows longer, it becomes increasingly challenging to avoid collisions." << std::endl;
	std::cout << "*Plan your moves carefully to prevent the snake from trapping itself." << std::endl;
	std::cout << std::endl << "5. Game Over" << std::endl << std::endl;
	std::cout << "*The game ends when the snake collides with the wall or itself." << std::endl;

	for (int i = 0; i < 110; i++)
		std::cout << "=";
		std::cout << std::endl;

	std::cout << std::endl << help_title_3 << std::endl;

	for (int i = 0; i < help_title_3.length(); i++)
		std::cout << "=";
		std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "Welcome to the world of Snake Impact!!! In a realm where the laws of nature are defied, you are entrusted with" << std::endl;
	std::cout << "the life of Snakey, a unique creature with an insatiable appetite for pearls and bonuses." << std::endl << std::endl;
	std::cout << "In this world, pearls and bonuses materialize out of thin air, scattered randomly across the terrain. Snakey," << std::endl;
	std::cout << "driven by an instinctive desire, is drawn towards these treasures. With each pearl and bonus consumed, Snakey" << std::endl;
	std::cout << "grows longer, a testament to its successful hunts." << std::endl << std::endl;
	std::cout << "However, this world is not without its dangers. Walls form the boundaries of this realm, and Snakey must avoid" << std::endl;
	std::cout << "colliding with them at all costs. Moreover, Snakey must also avoid colliding with itself as it grows longer" << std::endl;
	std::cout << "with each successful hunt." << std::endl << std::endl;
	std::cout << "The game of survival in this world is scored. Each pearl and bonus consumed increases your score. Special" << std::endl;
	std::cout << "bonuses appear, but they are fleeting and must be consumed quickly. The bonus will vanish into the nothingness" << std::endl;
	std::cout << "as swiftly as it manifested, so haste is key." << std::endl << std::endl;
	std::cout << "For those who have mastered the art of survival and have grown Snakey's tail to a length of 500, the game" << std::endl;
	std::cout << "offers a new challenge. Bonuses will now slow down Snakey's tail growth, adding an extra layer of strategy to" << std::endl;
	std::cout << "the game." << std::endl << std::endl;
	std::cout << "As Snakey grows longer, navigating the terrain becomes increasingly challenging. You must plan your moves" << std::endl;
	std::cout << "carefully to prevent Snakey from trapping itself. The game ends when Snakey collides with either the wall or" << std::endl;
	std::cout << "itself." << std::endl << std::endl;
	std::cout << "So embark on this thrilling adventure in the world of Snake Impact!!! Strive to achieve the highest score" << std::endl;
	std::cout << "possible and share your triumphs with your friends! Remember, in this world, survival is the name of the game." << std::endl;

	for (int i = 0; i < 110; i++)
		std::cout << "=";
	std::cout << std::endl;

	std::cout << std::endl << help_title_4 << std::endl;

	for (int i = 0; i < help_title_4.length(); i++)
		std::cout << "=";
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "Ryck is currently working on his certificate for Bachelor of Science in Computer Engineering at AMA University" << std::endl;
	std::cout << "Fairview Campus. He likes computer related subjects and found programming amusing! He aspires to be a software" << std::endl;
	std::cout << "engineer in the near future." << std::endl << std::endl;
	std::cout << "How he wish he can get a programming job already, although he believes that good things take time so he will" << std::endl;
	std::cout << "do his best to prepare for that day. Right now, the best he can do is to make projects and collaborate in" << std::endl;
	std::cout << "Github while acquiring as much as possible relevant certifications. 'Til then!" << std::endl << std::endl;
	std::cout << "Snake Impact!!! is his first, decent programming project and he knows that he can do more and do better!"<< std::endl;

	for (int i = 0; i < 110; i++)
		std::cout << "=";
		std::cout << std::endl;

		std::cout << std::endl << help_title_5 << std::endl;

	for (int i = 0; i < help_title_5.length(); i++)
		std::cout << "=";
		std::cout << std::endl;

		std::cout << std::endl;
		std::cout << "You can PayPal it at erycklouiszeflores@protonmail.com. Oh, you mean tips about the game? Nothing, just be" << std::endl << "good at it." << std::endl;

	for (int i = 0; i < 110; i++)
		std::cout << "=";
		std::cout << std::endl;

	std::cout << std::endl << help_title_6 << std::endl;

	for (int i = 0; i < help_title_6.length(); i++)
		std::cout << "=";
		std::cout << std::endl;

	std::cout<< std::endl;
	std::cout << "I'd like to hear from you! Send me an email at erycklouiszeflores@protonmail.com. Just don't DDoS me." << std::endl;

	for (int i = 0; i < 110; i++)
		std::cout << "=";
		std::cout << std::endl;

	std::cout << std::endl << help_title_7 << std::endl;

	for (int i = 0; i < help_title_7.length(); i++)
		std::cout << "=";
		std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "This game is dedicated to my family who never gets tired supporting me and of course, The All Knowing One. +" << std::endl;

	for (int i = 0; i < 110; i++)
		std::cout << "=";
		std::cout << std::endl;

	std::cout << std::endl << "Scroll up for more info. Press Z to continue where you left off.";

	switch (_getch())
	{
	case'1':
		system("Color 9");
		Help();
		break;
	case'2':
		system("Color 2");
		Help();
		break;
	case'3':
		system("Color 3");
		Help();
		break;
	case'4':
		system("Color C");
		Help();
		break;
	case'5':
		system("Color D");
		Help();
		break;
	case'6':
		system("Color 6");
		Help();
		break;
	case'7':
		system("Color 7");
		Help();
		break;
	case'8':
		system("Color 8");
		Help();
		break;
	case 'z':
		break;
	case 'Z':
		break;
	default:
		Help();
		break;
	}
}

void Ping()
{
	system("cls");
	system("ping google.com -t");
	system("pause");	
}

void Scoreboard()
{
	system("cls");

	std::string line = "scores.txt";
	std::ifstream in_file;
	std::ifstream check_empty("scores.txt");
	in_file.open("scores.txt");

	if (in_file.is_open())
	{
		if (check_empty.peek() == std::ifstream::traits_type::eof())
		{
			std::cout << "       ~~~~~" << std::endl << "$ ~O~~~~   ~~~~~     ~~~~~~~~~~~~~" << std::endl << "               ~~~~~~~" << std::endl;
			std::cout << std::endl << "Nothing to see here..." << std::endl;
		}
		else
		{
			while (getline(in_file, line))
				std::cout << line << std::endl;
			std::cout << std::endl;
		}
	}

	in_file.close();
	system("pause");
}

int main()
{
	srand(time(nullptr));

	enum direction
	{
		STOP = 0, UP, DOWN, LEFT, RIGHT
	};
	direction dir;

	const short	width = 60, height = 20;
	unsigned short tail_length = 0;
	long score = 0;
	static std::string player_name;
	static char tail_model = 'x';
	bool	game_over = false,
			king_of_snake_impact = false;
	static bool spawn_bonus = false,
				get_player_name = false,
				head_model_toggle = false;
	char head_model = 'O';
	short	x = 2,
			y = 2,
			pearl_x = rand() % width,
			pearl_y = rand() % height,
			bonus_x = rand() % width,
			bonus_y = rand() % height,
			tail_x[999],
			tail_y[999],
			game_speed,
			score_multiplier = 0,
			steps_counter = 0,
			bonus_sign = 0,
			dynamic_bonus = 10;

	dir = STOP;

	std::string line = "Snake_art.txt";
	std::ifstream in_file;
	in_file.open("Snake_art.txt");
	if (in_file.is_open())
	{
		while (getline(in_file, line))
			std::cout << line << std::endl;

		std::cout << std::endl;
	}
	else
	{
		std::cout << "       xxxxx" << std::endl << "$ ~Oxxxx   xxxxx     xxxxxxxxxxxxx" << std::endl << "               xxxxxxx" << std::endl;
	}
	in_file.close();

	std::cout << std::endl << "****Welcome to Snake Impact!!!****" << std::endl;
	std::cout << " **v2.3.0. By Ryck. Sep/7/2023.** " << std::endl;

	if (!get_player_name)
	{
		std::cout << std::endl << "Hi adventurer! What should I call you?: ";

		std::getline(std::cin, player_name);

		while (player_name.length() > 25)
		{
			std::cout << "Hmmm. That's not your name! Try a shorter one: ";
			std::getline(std::cin, player_name);
		}

		get_player_name = true;
	}

	std::cout << std::endl << "Please choose a level (0-9): ";

	do
	{
		char ans = _getch();

		if (ans == '0')
		{
			game_speed = 180;
			score_multiplier = 1;
			break;
		}
		if (ans == '1')
		{
			game_speed = 160;
			score_multiplier = 2;
			break;
		}
		if (ans == '2')
		{
			game_speed = 140;
			score_multiplier = 3;
			break;
		}
		if (ans == '3')
		{
			game_speed = 120;
			score_multiplier = 4;
			break;
		}
		if (ans == '4')
		{
			game_speed = 100;
			score_multiplier = 5;
			break;
		}
		if (ans == '5')
		{
			game_speed = 80;
			score_multiplier = 6;
			break;
		}
		if (ans == '6')
		{
			game_speed = 60;
			score_multiplier = 7;
			break;
		}
		if (ans == '7')
		{
			game_speed = 40;
			score_multiplier = 8;
			break;
		}
		if (ans == '8')
		{
			game_speed = 20;
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

	while (!game_over)
	{
		Sleep(game_speed);
		system("cls");

		if ((tail_length > 0) && (tail_length % dynamic_bonus == 0))
		{
			spawn_bonus = true;
			dynamic_bonus += 7;
		}

		if ((steps_counter > 0 && steps_counter <= 16) && (spawn_bonus))
			bonus_sign = 5;
		if ((steps_counter > 16 && steps_counter <= 32) && (spawn_bonus))
			bonus_sign = 4;
		if ((steps_counter > 32 && steps_counter <= 48) && (spawn_bonus))
			bonus_sign = 3;
		if ((steps_counter > 48 && steps_counter <= 64) && (spawn_bonus))
			bonus_sign = 2;
		if ((steps_counter > 64 && steps_counter <= 80) && (spawn_bonus))
			bonus_sign = 1;

		if (spawn_bonus)
			if (x - 1 || x + 1 || y - 1 || y + 1)
				steps_counter++;

		if (steps_counter > 80)
		{
			spawn_bonus = false;
			steps_counter = 0;
			tail_length++;
			bonus_x = (rand() + rand()) % width;
			bonus_y = (rand() + rand()) % height;
		}

		for (short i = 0; i < width + 2; i++)
			std::cout << "+";
			std::cout << std::endl;

		for (short i = 0; i < height; i++)
		{
			for (short j = 0; j < width; j++)
			{
				if (j == 0)
					std::cout << "+";
				if ((j == bonus_x && i == bonus_y) && (spawn_bonus))
					std::cout << bonus_sign;
				else if (j == x && i == y)
					std::cout << head_model;
				else if (j == pearl_x && i == pearl_y)
					std::cout << "@";
				else
				{
					bool print = false;
					for (short k = 0; k < tail_length; k++)
					{
						if (tail_x[k] == j && tail_y[k] == i)
						{
							std::cout << tail_model;
							print = true;
						}
					}
					if (!print)
						std::cout << " ";
				}
				if (j == width - 1)
					std::cout << "+";
			}
			std::cout << std::endl;
		}

		for (short i = 0; i < width + 2; i++)
			std::cout << "+";

		std::cout << std::endl << "Keys: \tW S A D \tQuit: \tX\tHelp:\tZ" << std::endl << "Pause: \tSPACEBAR" << "\tTail: \t" << tail_length << "\tScore:\t" << score << std::endl;
		std::cout << __DATE__ << ", " << __TIME__;

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

		if (dir)
			while (tail_length < 3)
				tail_length++;

		if (_kbhit())
		{
			switch (_getch())
			{
			case'w':
				if (head_model_toggle)
					head_model = '^';
				dir = UP;
				break;
			case's':
				if (head_model_toggle)
					head_model = 'v';
				dir = DOWN;
				break;
			case'a':
				if (head_model_toggle)
					head_model = '<';
				dir = LEFT;
				break;
			case'd':
				if (head_model_toggle)
					head_model = '>';
				dir = RIGHT;
				break;
			case'm':
				head_model_toggle = true;
				break;
			case'n':
				head_model_toggle = false;
				head_model = 'O';
				break;
			case'x':
				game_over = true;
				break;
			case 'y':
				Scoreboard();
				break;
			case'z':
				Help();
				break;
			case'W':
				if (head_model_toggle)
					head_model = '^';
				dir = UP;
				break;
			case'S':
				if (head_model_toggle)
					head_model = 'v';
				dir = DOWN;
				break;
			case'A':
				if (head_model_toggle)
					head_model = '<';
				dir = LEFT;
				break;
			case'D':
				if (head_model_toggle)
					head_model = '>';
				dir = RIGHT;
				break;
			case'M':
				head_model_toggle = true;
				break;
			case'N':
				head_model_toggle = false;
				head_model = 'O';
				break;
			case'X':
				game_over = true;
				break;
			case 'Y':
				Scoreboard();
				break;
			case 'Z':
				Help();
				break;
			case ' ':
				std::cout << std::endl << "Game is paused. ";
				system("pause");
				break;
			case ',':
				tail_model = '~';
				break;
			case '.':
				tail_model = 'x';
				break;
			case '/':
				tail_model = 'o';
				break;
			case 27:
				Ping();
				break;
			}
		}

		switch (dir)
		{
		case STOP:
			if (head_model_toggle)
				head_model = '>';
			break;
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

			if (tail_x[i] == bonus_x && tail_y[i] == bonus_y)
			{
				bonus_x = rand() % width;
				bonus_y = rand() % height;
			}
		}

		if (x == pearl_x && y == pearl_y)
		{
			pearl_x = rand() % width;
			pearl_y = rand() % height;
			score += 1 * score_multiplier;
			tail_length++;
		}

		if ((tail_length > 0) && (spawn_bonus) && (x == bonus_x && y == bonus_y))
		{
			if (tail_length >= 500)
				tail_length -= rand() % 2 + 1;
			if (tail_length >= 750)
				tail_length -= rand() % 3 + 1;
			score += 100 * score_multiplier * bonus_sign;
			bonus_x = rand() % width;
			bonus_y = rand() % height;
			steps_counter = 0;
			spawn_bonus = false;
			tail_length++;
		}

		if (tail_length >= 999)
		{
			system("cls");

			std::cout << "You are the King of Snake Impact!!!" << std::endl;
			king_of_snake_impact = true;
			game_over = true;
			system("pause");
		}
	}

	if (game_over)
	{
		spawn_bonus = false;

		std::ofstream file("scores.txt", std::ios::app);
		std::ifstream check_empty("scores.txt");

		if (check_empty.peek() == std::ifstream::traits_type::eof())
		{
			for (int i = 0; i < 110; i++)
				file << "=";
				file << std::endl;

			file << std::left << std::setw(1) << "|" << std::left << std::setw(50) << "Score" << std::left << std::setw(1) << "|" << std::left << std::setw(12) << "Date" << std::left << std::setw(1) << "|" << std::left << std::setw(9) << "Time" << std::left << std::setw(1) << "|" << std::left << std::setw(34) << "Player Name" << std::left << std::setw(1) << "|" << std::endl;

			for (int i = 0; i < 110; i++)
				file << "=";
				file << std::endl;

			if (king_of_snake_impact == true)
			{
				file << std::left << std::setw(1) << "|" << std::left << std::setw(36) << score << std::left << std::setw(14) << "The Chosen One" << std::left << std::setw(1) << "|" << std::left << std::setw(12) << __DATE__ << std::left << std::setw(1) << "|" << std::left << std::setw(9) << __TIME__ << std::left << std::setw(1) << "|" << std::left << std::setw(34) << player_name << std::left << std::setw(1) << "|" << std::endl;

				for (int i = 0; i < 110; i++)
					file << "-";
					file << std::endl;
			}
			else
			{
				file << std::left << std::setw(1) << "|" << std::left << std::setw(50) << score << std::left << std::setw(1) << "|" << std::left << std::setw(12) << __DATE__ << std::left << std::setw(1) << "|" << std::left << std::setw(9) << __TIME__ << std::left << std::setw(1) << "|" << std::left << std::setw(34) << player_name << std::left << std::setw(1) << "|" << std::endl;

				for (int i = 0; i < 110; i++)
					file << "-";
					file << std::endl;
			}
		}
		else
		{
			if (king_of_snake_impact == true)
			{
				file << std::left << std::setw(1) << "|" << std::left << std::setw(36) << score << std::left << std::setw(14) << "The Chosen One" << std::left << std::setw(1) << "|" << std::left << std::setw(12) << __DATE__ << std::left << std::setw(1) << "|" << std::left << std::setw(9) << __TIME__ << std::left << std::setw(1) << "|" << std::left << std::setw(34) << player_name << std::left << std::setw(1) << "|" << std::endl;

				for (int i = 0; i < 110; i++)
					file << "-";
					file << std::endl;
			}
			else
			{
				file << std::left << std::setw(1) << "|" << std::left << std::setw(50) << score << std::left << std::setw(1) << "|" << std::left << std::setw(12) << __DATE__ << std::left << std::setw(1) << "|" << std::left << std::setw(9) << __TIME__ << std::left << std::setw(1) << "|" << std::left << std::setw(34) << player_name << std::left << std::setw(1) << "|" << std::endl;

				for (int i = 0; i < 110; i++)
					file << "-";
					file << std::endl;
			}
		}

		file.close();

		std::cout << std::endl << std::endl << "Good game, " << player_name << "! Play again? (y/n): ";

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

		std::string line = "Snake_art.txt";
		std::ifstream in_file;
		in_file.open("Snake_art.txt");
		if (in_file.is_open())
		{
			while (getline(in_file, line))
				std::cout << line << std::endl;

			std::cout << std::endl;
		}
		else
		{
			std::cout << "       ooooo" << std::endl << "$ ~Ooooo   ooooo     ooooooooooooo" << std::endl << "               ooooooo" << std::endl;
		}
		in_file.close();

		std::cout << std::endl << "Your final score was " << score << ". Goodbye!" << std::endl;
	}

	system("pause");
	exit(1);
	return 0;
}