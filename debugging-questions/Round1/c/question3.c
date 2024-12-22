// 3) Gift Exchange Logic:
// Santa is organizing a gift exchange among friends. Each friend has a gift they want to give to another friend. 
// The program is supposed to ensure that no one gives a gift to themselves, but there’s a bug 
// that causes some friends to exchange gifts with themselves.

#include <stdio.h>
#include <string.h>

void gift_exchange(char friends[][20], char gifts[][20], int size) {
    for (int i = 0; i < size; i++) {
       
        if (strcmp(friends[i], gifts[i]) != 0) {
            printf("%s gives a gift to %s\n", friends[i], gifts[i]);
        } else {
            printf("%s cannot give a gift to themselves!\n", friends[i]);
        }
    }
}

int main() {
    char friends[][20] = {"Alice", "Bob", "Charlie", "Daisy"};
    char gifts[][20] = {"Bob", "Charlie", "Alice", "Daisy"};
    int size = sizeof(friends) / sizeof(friends[0]);

    gift_exchange(friends, gifts, size);
    return 0;
}
