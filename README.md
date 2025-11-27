# Chatbot

Simple C Chatbot

A beginner-friendly chatbot created in C programming language.
It responds to basic user inputs and continues chatting until the user types "bye" or "exit".

📌 Features

Greets the user

Understands simple commands like:

hi, hello

how are you

who are you

help

name

creator

age

joke

time

questions

Runs continuously until user exits

Handles unknown input gracefully

🖥️ How to Run

Save the code in a file, for example:
chatbot.c

Compile the program:

gcc chatbot.c -o chatbot


Run the program:

./chatbot

📂 Program Flow

Shows welcome message

Asks the user to enter text

Compares input using strcmp()

Prints matching response

Loops until user types:

"bye"

"exit"

💬 Example Interaction
===== SIMPLE C CHATBOT =====
Chatbot: Hello! I am your C Chatbot.
Chatbot: You can talk to me. Type 'bye' to exit.

You: hi
Chatbot: Hello! Nice to meet you.

You: joke
Chatbot: Why was the computer cold? Because it forgot to close Windows!

You: bye
Chatbot: Goodbye! Have a great day!

📘 Code Explanation

fgets() takes user input safely

strcspn() removes newline character

Multiple strcmp() conditions handle different commands

Infinite loop keeps program running

break exits gracefully on "bye" or "exit"

📄 File Structure
/Simple-C-Chatbot
│── chatbot.c     # Source code
│── README.md      # Project documentation

✔️ Suitable For

Beginners learning C

Students doing mini-projects

Understanding string comparison and loops

Basic console interaction programs
