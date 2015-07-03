// WordSnake.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
std::string myString;
std::vector<std::string> wordSnake;
int snakeLength;
bool ChangeDirection = false;


int _tmain(int argc, _TCHAR* argv[])
{
	
	std::cout << "How long will your word snake be?" << std::endl;
	std::cin >> snakeLength;
	system("cls");
	for (int i = 0; i < snakeLength; i++)
	{
		
		std::cout << "Enter word #" << i << std::endl;
		std::cin >> myString;
		system("cls");
		wordSnake.push_back(myString);
		std::cout << wordSnake[i] << std::endl;

		if (i == snakeLength-1)
		{
			system("cls");
			for (int j = 0; j < snakeLength; j++)
			{
				if (ChangeDirection)
				{
					wordSnake[j].front = wordSnake[j - 1].back;
					ChangeDirection = false;
				}
				std::cout << wordSnake[j] << std::endl;
				bool changeDirection = true;
			}

		}

	}
	
	
	system("pause");
}

