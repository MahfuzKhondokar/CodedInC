#include <stdio.h>
#include <string.h>

int main() {
    char username[101];
    int charCount[26] = {0}, distinctCount = 0;

    scanf("%s", username);

    for (int i = 0; username[i] != '\0'; i++) {
        charCount[username[i] - 'a'] = 1;
    }

    for (int i = 0; i < 26; i++) {
        if (charCount[i]) {
            distinctCount++;
        }
    }

    if (distinctCount % 2 == 0) {
        printf("CHAT WITH HER!\n");
    } else {
        printf("IGNORE HIM!\n");
    }

    return 0;
}
