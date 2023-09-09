//Tic-Tac-Toe

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int DELAY = 100000; //Just for fun :P
char loc[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int gameOn = 1;
int checkWin();
void drawBoard();

int main() {

 int player = 1, i, locPick;
 char symbol;

 while (gameOn == 1) {

  drawBoard();
  player = (player % 2) ? 1 : 2;

  printf("  Player % d, enter location: ", player);
  scanf("%d", &locPick);

  symbol = (player == 1) ? 'X' : 'O';

  if (locPick == 1 && loc[1] == '1') {
	loc[1] = symbol;
  } else if (locPick == 2 && loc[2] == '2') {
	loc[2] = symbol;
  } else if (locPick == 3 && loc[3] == '3') {
	loc[3] = symbol;
  } else if (locPick == 4 && loc[4] == '4') {
	loc[4] = symbol;
  } else if (locPick == 5 && loc[5] == '5') {
	loc[5] = symbol;
  } else if (locPick == 6 && loc[6] == '6') {
	loc[6] = symbol;
  } else if (locPick == 7 && loc[7] == '7') {
	loc[7] = symbol;
  } else if (locPick == 8 && loc[8] == '8') {
	loc[8] = symbol;
  } else if (locPick == 9 && loc[9] == '9') {
	loc[9] = symbol;
  } else {
	printf("\tInvalid move ");
	fflush(stdout);
	sleep(2);
	player--;
  }
  i = checkWin();
  player++;

  drawBoard();

  if (i == 1) {
	printf("\tPlayer %d wins!\n", --player);
	getchar();
	gameOn = 0;
  } else if (i == 0) {
	printf("\tGame is a draw!\n");
	getchar();
	gameOn = 0;
  }
}
return 0;
}

int checkWin() {

  if (loc[1] == loc [2] && loc[2] == loc[3]) {
	return 1;
  } else if (loc[4] == loc[5] && loc[5] == loc[6]) {
	return 1;
  } else if (loc[7] == loc[8] && loc[8] == loc[9]) {
	return 1;
  } else if (loc[1] == loc[4] && loc[4] == loc[7]) {
	return 1;
  } else if (loc[2] == loc[5] && loc[5] == loc[8]) {
	return 1;
  } else if (loc[3] == loc[6] && loc[6] == loc[9]) {
	return 1;
  } else if (loc[1] == loc[5] && loc[5] == loc[9]) {
	return 1;
  } else if (loc[3] == loc[5] && loc[5] == loc[7]) {
	return 1;
  } else if (loc[1] != '1' && loc[2] != '2' && loc[3] != '3' && loc[4] != '4' &&
	loc[5] != '5' && loc[6] != '6' && loc[7] != '7' && loc[8] != '8' && loc[9] != '9') {
	return 0;
  } else {
	return -1;
  }
}

void drawBoard() {

  system("clear");
  usleep(DELAY);
  printf("\n\t Tic-Tac-Toe\n");
  usleep(DELAY);

  printf("\t+ --------- +\n");
  usleep(DELAY);
  printf("\t| %c | %c | %c |\n", loc[1], loc[2], loc[3]);
  usleep(DELAY);

  printf("\t|---|---|---|\n");
  usleep(DELAY);
  printf("\t| %c | %c | %c |\n", loc[4], loc[5], loc[6]);
  usleep(DELAY);

  printf("\t|---|---|---|\n");
  usleep(DELAY);
  printf("\t| %c | %c | %c |\n", loc[7], loc[8], loc[9]);
  usleep(DELAY);

  printf("\t+ --------- +\n\n");

  printf("| Player 1 is X | Player 2 is O |\n");
  usleep(DELAY);
  printf("+-------------------------------+\n");

}

  

































