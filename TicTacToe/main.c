#include <stdio.h>
#include <locale.h>
#include "tictactoe.h"
#include <stdbool.h>
#include <stdlib.h>

int main(void)
{
	
	setlocale(LC_ALL, "");
	int matrix[3][3] = {
		{0, 0, 0},
		{0, 0, 0},
		{0, 0, 0}
	};
	update(matrix);
	while (checkwin(matrix) == 0) {
		for (int i = 1; i <= 2; i++) {
			
			
			while (true) {
				int selection[2] = { 0, 0 };
				printf("Player %i, choose a row: ", i);

				scanf_s("%i", &selection[0]);
				selection[0] -= 1;

				printf("Player %i, choose a collumn: ", i);

				scanf_s("%d", &selection[1]);
				selection[1] -= 1;

				if (selection[0] >= 0 && selection[0] <= 2 && selection[1] >= 0 && selection[1] <= 2) {
					if (matrix[selection[0]][selection[1]] == 0) {
						matrix[selection[0]][selection[1]] = i;
						break;
					}
					else {
						printf("\nThis cell is taken. Choose a different one.\n");
					}
				}
				else {
					printf("\nThere are only 3 rows and collumns.\n");
				}


				
			}
			
			
			

			update(matrix);

			if (checkwin(matrix) != 0 && checkwin(matrix) != 3) {
				printf("\nWE HAVE A WINNERRR!!!\n");
				printf("Player %i has won\n", checkwin(matrix));
				break;
			}
			else if (checkwin(matrix) == 3) {
				printf("\nIts a tie...\n");
				break;
			}
				
		}
	}
	system("pause");
	return 0;
}
