#include <stdio.h>
#include <string.h>

int main() {
    char input[100];

    printf("===== SIMPLE C CHATBOT =====\n");
    printf("Chatbot: Hello! I am your C Chatbot.\n");
    printf("Chatbot: You can talk to me. Type 'bye' to exit.\n\n");

    // Loop for continuous chatting
    while (1) {
        printf("You: ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = 0; // Remove newline

        // Safe exit
        if (strcmp(input, "bye") == 0 || strcmp(input, "exit") == 0) {
            printf("Chatbot: Goodbye! Have a great day!\n");
            break;
        }

        // Replies
        if (strcmp(input, "hi") == 0 || strcmp(input, "hello") == 0) {
            printf("Chatbot: Hello! Nice to meet you.\n");
        }
        else if (strcmp(input, "how are you") == 0) {
            printf("Chatbot: I am fine! Thank you for asking.\n");
        }
        else if (strcmp(input, "who are you") == 0) {
            printf("Chatbot: I am a basic chatbot created in C language.\n");
        }
        else if (strcmp(input, "help") == 0) {
            printf("Chatbot: You can ask me questions like:\n");
            printf("         hi, name, time, creator, joke, age, how are you\n");
        }
        else if (strcmp(input, "name") == 0) {
            printf("Chatbot: My name is C-Bot.\n");
        }
        else if (strcmp(input, "creator") == 0) {
            printf("Chatbot: I was created by a C programming student.\n");
        }
        else if (strcmp(input, "age") == 0) {
            printf("Chatbot: I am always new whenever you run the program!\n");
        }
        else if (strcmp(input, "joke") == 0) {
            printf("Chatbot: Why was the computer cold? Because it forgot to close Windows!\n");
        }
        else if (strcmp(input, "time") == 0) {
            printf("Chatbot: I can't show real time, but I know it's a good moment! :)\n");
        }
        else if (strcmp(input, "questions") == 0) {
            printf("Chatbot: Here are some questions I can ask you:\n");
            printf("         1. What is your name?\n");
            printf("         2. How old are you?\n");
            printf("         3. What is your favorite subject?\n");
            printf("         4. Do you like programming?\n");
            printf("         5. Which city are you from?\n");
        }
        else {
            printf("Chatbot: Sorry, I didn't understand that. Try something simple.\n");
        }
    }

    return 0;
}