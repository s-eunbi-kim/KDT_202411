#ifndef HIKER_INCLUDED
#define HIKER_INCLUDED
#include <stdbool.h>
#include <stddef.h>

bool isPositive(int);
bool arePositive(int, int);
int add(int, int);
int subtract(int, int);
int divide(int, int);
int multiply(int, int);

bool isEven(int number);
void greet(const char* name, char* output, size_t output_size);

#endif
