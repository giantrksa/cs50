#ifndef CS50_H
#define CS50_H

#include <stdbool.h>
#include <stddef.h>

typedef char* string;

// Function prototypes
string get_string(const char *prompt);
int get_int(const char *prompt);
char get_char(const char *prompt);
long get_long(const char *prompt);

#endif // CS50_H
