#include "game.h"

/*
return: void
parameters: none
This function prints the start screen
*/
void start() {
  printf("\n\nWelcome to 'BIT CHEST PUZZLE' game!\n\n");
}

/*
return: void
parameters: none
This function asks the user if they would like to play
*/
void question() {
  printf("Would you like to play( y for yes/ n for no): ");
}

/*
return: void
parameters: none
This function prints the instructions
*/
void instructions() {
  printf("Okay, here's how this game works. You have a choice between 3 chests. Two chest have the key you need to move to the next round. One chest has deadly poison and will cause you to end the game. Choose one of two correct chests, move on. Choose the wrong chest, die a painful death.\n\n"); 
}

/*
return: void
parameters: none
This function prints if the user says they do not want to play
*/
void error() {
  puts("You don't want to play? Alright, thanks anyway. Ending program...");
}

/*
return: void
parameters: none
This function prints if the wrong the chest is chosen
*/
void fail() {
  printf("You've been exposed to deadly poison!\nGame over...\n\n");
}

/*return: an integer pointer
parameters: an integer pointer and an int
this function: this function allocates memory for an integer pointer
*/
int * sizer(int * arr, int r) {
  arr = (int*)malloc(sizeof(int) * r);
  return arr;
}

/*
return: void
parameters: two integers
This function reports to the user a summary of their game
*/
void endgame (int n, int r) {
  if ( n == 0) {
    printf("You completed absolutely no rounds. Better luck next time.\n");
  }
  else if (n == r) {
    printf("You\n\tWon\n\t\tThe\n\t\t\tGame!!!!\n\nCongratulations!!!!!!!!!!!!\n");
  }
  else {
  printf("You made it past %d rounds. Nice try. Thanks for playing!\n", n);
  }  
}

/*
return: void
parameters: none
This function prints if the user chooses the correct chest 
*/
void pass() {
printf("You guessed right!!\n");
}

/*
return: an int
parameters: three integers and an integer pointer
This function compares the user's guess and the two keys. It returns
the count of correct guesses.
*/
int compare(int rounds, int count, int guess, int * key) {
  printf("You chose chest %d? Let's see...\n", guess);
  if (guess == key[0] || guess == key[1]) {
	  if(rounds > 1) {
	    sleep(1);
	    pass();
	    sleep(1);
	    printf("Moving on.\n");
	  }
	  else {
	    sleep(1);
	    pass();
	    sleep(1);
	}
	count++;
  }
  else {
	  sleep(1);
	  fail();
	  sleep(1);
	  endgame(count, rounds);
	  exit(1);
  }
  return count;
}

void freeMem(int * ptr) {
  free(ptr);
}