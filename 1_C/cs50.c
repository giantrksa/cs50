#include "cs50.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Get a string from the user
string get_string(const char *prompt)
{
    char buffer[512]; // static buffer; you might want to replace this with dynamic allocation in a more robust implementation
    printf("%s", prompt);
    if (fgets(buffer, sizeof(buffer), stdin) != NULL)
    {
        // Remove newline character if present
        size_t len = strlen(buffer);
        if (len > 0 && buffer[len - 1] == '\n')
        {
            buffer[len - 1] = '\0';
        }

        char *dynamic_buffer = malloc(strlen(buffer) + 1);
        strcpy(dynamic_buffer, buffer);
        return dynamic_buffer;
    }
    return NULL;
}

// Get an integer from the user
int get_int(const char *prompt)
{
    int value;
    int result;
    do
    {
        char *input = get_string(prompt);
        result = sscanf(input, "%d", &value);
        free(input);
    } while (result != 1);
    return value;
}


// Get a single character from the user
char get_char(const char *prompt)
{
    string result = get_string(prompt);
    char c = result[0];
    free(result);
    return c;
}

// Get a long integer from the user   <-- Added this function
long get_long(const char *prompt)
{
    long value;
    int result;
    do
    {
        char *input = get_string(prompt);
        result = sscanf(input, "%ld", &value);   // Using "%ld" format specifier for long
        free(input);
    } while (result != 1);
    return value;
}