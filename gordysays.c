#include <stdio.h>
#include <string.h>

void print_bubble(const char *message) {
    int len = strlen(message);
    printf(" ");
    for (int i = 0; i < len + 2; i++) printf("_");
    printf("\n");

    printf("< %s >\n", message);

    printf(" ");
    for (int i = 0; i < len + 2; i++) printf("-");
    printf("\n");
}

void print_boy() {
    printf("        \\   _____\n");
    printf("         \\  /     \\\n");
    printf("            | O O |\n");
    printf("            |  ^  |\n");
    printf("            | '-' |\n");
    printf("            \\_____/\n");
    printf("             /| |\\\n");
    printf("            /_| |_\\\n");
    printf("              | |\n");
    printf("             _|_|_\n");
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: gordysays \"your message here\"\n");
        return 1;
    }

    // Join all arguments into one message
    char message[512] = "";
    for (int i = 1; i < argc; i++) {
        strcat(message, argv[i]);
        if (i < argc - 1) strcat(message, " ");
    }

    print_bubble(message);
    print_boy();

    return 0;
}
