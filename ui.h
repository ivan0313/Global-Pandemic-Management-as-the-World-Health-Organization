#ifndef UI_H
#define UI_H

#include <iostream>
#include <string>
#include "main.h"

using namespace std;

void clearscreen();

void printruler();

void printnewcountry(struct country c[], int no_of_country);

void printcard(struct card c);

void printcounrty(struct country c);

string get_user_input(int choices);



#endif