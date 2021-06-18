/* playing around with pointers in C */
/* minh_p */
/* 6/17/2021 */

#include <stdio.h>
#include <string.h>

/* Trying out struct as well */
struct PlayerInfo {
    char username[20];
    int age;
};


void doStructStuff() {
    struct PlayerInfo Player1Info;

    /* Init info */
    Player1Info.age = 14;
    strcpy_s(Player1Info.username, 20, "I_Am_Tester");

    /* Printing them out */
    printf("Player age: %d\n", Player1Info.age);
    printf("Player username: %s\n", Player1Info.username);
}


/*
 * Pointers allows different variables to access the same thing.
 * Referencing, make a copy of the variable.
*/

void testOutPointers() {
    char originalString[] = "testOutPointers: Hello there\n";
    char *string2 = originalString;

    printf("%s", originalString);
    printf("%s", string2);
}


void testOutReferencing() {
    char originalString[] = "testOutReferencing: Hello there";
    char string2[40];

    /* Could not find any way to reference the string. So, there is only 'copying'. */
    memcpy(string2, originalString, strlen(originalString));

    /* Just making the strings looks nice */
    strcat_s(string2, 40, " Yes\n");
    strcat_s(originalString, 40, "\n");

    printf("%s", originalString);
    printf("%s", string2);
}


int main() {
    /* doStructStuff(); */
    testOutPointers();
    testOutReferencing();
    return 0;
}
