#include "Ejercicio01.h"
#include <cctype> 

bool Ejercicio01::isPalindrome(const char* phrase, int length)
{
    int start = 0;
    int end = length - 1;

    while (start < end)
    {
        while (start < length && !isalnum(phrase[start]))
        {
            start++;
        }
        while (end >= 0 && !isalnum(phrase[end]))
        {
            end--;
        }

        if (start < length && end >= 0 && tolower(phrase[start]) != tolower(phrase[end]))
        {
            return false;
        }

        start++;
        end--;
    }

    return true;
}
