#pragma once

#define _USE_MATH_DEFINES
#include<math.h>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>


typedef struct Vecter2
{
	float x;
	float y;
};


//—”¶¬ŠÖ”
int GetRandom(int min, int max) {
	static int flag;

	if (flag == 0) {
		srand((unsigned int)time(NULL));
		flag = 1;
	}

	return min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX));
}
