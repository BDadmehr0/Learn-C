# Hello, World!

## Introduction

The C programming language is a general-purpose programming language that closely relates to the way machines work. Understanding how computer memory works is an important aspect of the C programming language. Although C can be considered "hard to learn", it is a very simple language with powerful capabilities.

C is a very common language, and it is the language of many applications such as Windows, the Python interpreter, Git, and many more.

C is a compiled language, which means that in order to run it, the compiler (for example, GCC or Visual Studio) must take the code we wrote, process it, and then create an executable file. This file can then be executed and will do what we intended for the program to do.

## Our First Program

Every C program uses libraries, which give the ability to execute necessary functions. For example, the most basic function called `printf`, which prints to the screen, is defined in the `stdio.h` header file.

To add the ability to run the `printf` command to our program, we must add the following include directive to the first line of the code:

```c
#include <stdio.h>
```

The second part of the code is the actual code that we are going to write. The first code that will run will always reside in the main function.

```c

int main() {
  // ... our code goes here
}
```

The int keyword indicates that the function main will return an integer - a simple number. The number returned by the function indicates whether the program we wrote worked correctly. If we want to say that our code ran successfully, we will return the number 0. A number greater than 0 will mean that the program we wrote failed.

For this tutorial, we will return 0 to indicate that our program was successful:

```c

return 0;
```

Notice that every statement in C must end with a semicolon so that the compiler knows that a new statement has started.

Last but not least, we will need to call the function printf to print our sentence.
