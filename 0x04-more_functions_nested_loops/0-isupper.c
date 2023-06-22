#include <stdio.h>

int _isupper(int c);

int main()
{
    char ch = 'B';
    int result = _isupper(ch);
    if (result == 1) {
        printf("%c is an uppercase character.\n", ch);
    } else {
        printf("%c is not an uppercase character.\n", ch);
    }
    return 0;
}

