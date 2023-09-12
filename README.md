# SNAKE IMPACT!!!
A simple Snake Game in C++

This is an implementation of the classic Snake game in C++. My first ever coding project. I will update this game from time to time.

## How to Play

- Use the following keys to control the snake:
  - `W` to move up
  - `S` to move down
  - `A` to move left
  - `D` to move right
  - `X` to quit the game

- Try to eat the pearls (`@`) to increase your score.
- Special bonuses (`$`) appear periodically. Collect them to earn extra points.
- The game ends when the snake runs into the wall or collides with itself.

## Features

- Randomly generated pearls and dynamic bonuses.
- Score tracking and tail length display.

## How to Run

1. Compile the code using a C++ compiler (e.g., g++).
2. Run the compiled executable.

## Dependencies

- This code uses the `<iostream>`, `<conio.h>`, `<Windows.h>`, `<string>`, `<fstream>`, and `<stdlib.h>` libraries.
- Note that `<conio.h>` and `<Windows.h>` are specific to Windows systems.

## Author

This Snake game in C++ was created by Ryck (@thenotknowingone).

## License

This code is a freeware. Please feel free to download, edit and re-distribute the code or any part of it.

##Updates and Bug Fixes

#Snake Impact!!! v2.1.0 (9/13/2023)
Features 

Set maximum tail length to 999 just in case someone wants to set the world record in this game.
Bonus now expires after some duration or when pearl is eaten first.
Added main menu and a game speed selector (0 - 9) with score multiplier depending on the speed selected.

Bug Fixes

Set bonus to trigger only when the tail length is greater than 2 to avoid tail decrement modulo operation by 0 which causes exception errors.
