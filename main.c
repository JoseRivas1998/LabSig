#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define BUFFER 1024


int main(int argc, char **argv) {
    char temp[BUFFER];
    int labNum;
    printf("Enter your name: ");
    scanf("%[^\n]", temp);
    scanf("%*c");
    printf("Enter lab number: ");
    scanf("%d", &labNum);
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    printf("/**\n"
           "* Name: %s\n"
           "* Lab/task: Lab %d\n"
           "* Date: %02d/%02d/%d\n"
           "**/\n", temp, labNum, tm.tm_mon + 1, tm.tm_mday, tm.tm_year + 1900);
    return 0;
}
