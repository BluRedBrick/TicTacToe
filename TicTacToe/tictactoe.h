#include <stdio.h>

int checkwin(int map[3][3]) {
	int zeros = 0;
	for (int y = 0; y <= 2; y++) {
		if(map[y][0] == map[y][1] && map[y][1] == map[y][2] && map[y][0] != 0)
			return map[y][0];
	}
	for (int x = 0; x <= 2; x++) {
		if (map[0][x] == map[1][x] && map[1][x] == map[2][x] && map[0][x] != 0)
			return map[0][x];
	}
	if (map[0][0] == map[1][1] && map[1][1] == map[2][2] && map[0][0] != 0)
		return map[0][0];
	if (map[0][2] == map[1][1] && map[1][1] == map[2][0] && map[0][2] != 0)
		return map[0][2];
	for (int y = 0; y <= 2; y++) {
		for (int x = 0; x <= 2; x++) {
			if(map[y][x] == 0)
				zeros += 1;
		}
	}
	if(zeros == 0)
		return 3;

	
	return 0;
}





void update(int map[3][3]) {
	printf("\n");
	for (int y = 0; y <= 2; y++) {
		for (int x = 0; x <= 2; x++) {
			if (map[y][x] == 1) {
				printf(" X ");
			}

			else if (map[y][x] == 2) {
				printf(" O ");
			}

			else {
				printf(" · ");
			}
			if (x != 2) {
				printf("|");
			}
		}
		if (y != 2) {
			printf("\n-----------\n");
		}
		else {
			printf("\n");
		}
	}
	printf("\n");
}
