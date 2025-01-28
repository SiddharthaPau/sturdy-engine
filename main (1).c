
#include <stdio.h>

int main() {
    char str[100], word[20];
    int i = 0, j = 0, found = 0;

    
    printf("Enter the main string: ");
    fgets(str, sizeof(str), stdin);

    
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    
    printf("Enter the word to search: ");
    fgets(word, sizeof(word), stdin);

    
    for (i = 0; word[i] != '\0'; i++) {
        if (word[i] == '\n') {
            word[i] = '\0';
            break;
        }
    }

     i = 0;
    while (str[i] != '\0') {
        if (str[i] == word[j]) {
            int temp = i;
            while (str[temp] == word[j] && word[j] != '\0') {
                temp++;
                j++;
            }
            if (word[j] == '\0') {
                found = 1;
                break;
            }
            j = 0;
        }
        i++;
    }

    if (found)
        printf("The word '%s' is found in the string.\n", word);
    else
        printf("The word '%s' is not found in the string.\n", word);

    return 0;
}