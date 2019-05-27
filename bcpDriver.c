#include "game.h"

int main(int argc, char* argv[]) {
  
  //used to seed random numbers
  srand(time(0));
  // i is a simple index
  //count keeps track of the numbers completed
  int rounds = 0, guess = 0, i = 0, count = 0, chest[3] = {1,2,3};
  char reply;
  int * key =  NULL;
  //sizes an integer array to hold two correct chests
  key = sizer(key, 2);
  start();
  question();
  scanf("%c", &reply);
  if (reply  != 'y') {
    error();
    exit(1);
  }
  instructions();
  printf("How many rounds would you like to play: ");
  scanf("%d", &rounds);
  if (rounds <= 0) {
    error();
    exit(1);
  }
  while (i < rounds) {
    printf("\nChoose a chest...\n\n");
    printf("%d\t%d\t%d\n\n", chest[0], chest[1], chest[2]);
    key[0] = rand() % 3 +1;
    key[1] = rand() % 3 +1;
    //this while loop prevents the two keys from being the same number
    while (key[0] == key[1]) {
	    key[1] = rand() % 3 + 1;
    }   
    scanf("%d", &guess);
    count = compare(rounds, count, guess, key);
   i++;
  }
  sleep(1);
  endgame(count, rounds);
  free(key);
  key = NULL;
  return 0;
}
