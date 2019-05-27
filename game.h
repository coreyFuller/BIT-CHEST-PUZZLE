#ifndef GAME_H
#define GAME_H
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

void start();
void question();
void instructions();
void error();
int * sizer(int*, int);
void endgame(int, int );
int randomNum();
void printArr(int *,  int *, int, int);
void fail();
int compare(int, int, int, int *);
void memfree(int *);
#endif