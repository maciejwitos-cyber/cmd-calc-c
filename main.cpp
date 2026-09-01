#include <iostream>
#include <cstring>

void usage(char *programName) {
    printf("Usage: %s number1 operation number2\n", programName);
    printf("Available operations:\n");
    printf("\tadd\n");
    printf("\tsub\n");
    printf("\tmul\n");
    printf("\tdiv\n");
    printf("\n");
}

int main(int argc, char* argv[]) {

    // argv[0] - nazwa programu
    // argv[1] - pierwsza liczba
    // argv[2] - dzialanie
    // argv[3] - druga liczba

    int num1 = 0;
    int num2 = 0;
    int result = 0;


    if (argc == 4) {            // jeśli podano wszystkie parametry wybierz działanie
        num1 = atoi(argv[1]);
        num2 = atoi(argv[3]);

        if (!strcmp("add", argv[2])) {
            result = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, result);
            return 0;
        }

        if (!strcmp("sub", argv[2])) {
            result = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, result);
            return 0;
        }

        if (!strcmp("mul", argv[2])) {
            result = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, result);
            return 0;
        }
        if (!strcmp("div", argv[2])) {
            result = num1 / num2;
            printf("%d / %d = %d\n", num1, num2, result);
            return 0;
        }

    }
    // jeśli nie podano wszystkich parametrów wyswietl instrukcję
    usage(argv[0]);

    return 0;
}

