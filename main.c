#include <stdio.h>
#include <string.h>

int main() {
    char name[50];

    printf("What's your name? ");
    fflush(stdout);

    /* fgets instead of scanf - learned this the hard way
       scanf stops at spaces so "Yogesh M" would only read "Yogesh"
       fgets reads the whole line including spaces */
    fgets(name, sizeof(name), stdin);

    /* fgets keeps the newline at the end - this removes it
       otherwise the greeting prints on a weird new line */
    name[strcspn(name, "\n")] = 0;

    printf("Hey %s! Good to have you here.\n", name);

    return 0;
}
