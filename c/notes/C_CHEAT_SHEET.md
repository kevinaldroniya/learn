# C Programming Language Cheat Sheet

This document is created for my learning purposes about C.

Source:
* **C Programming Language** (Brian W. Kernighan, Dennis M. Ritchie)

## Why do I learn about C ?
* First reason that why I am learning C is because, I want to know how the garbage collector works, because not like in `Java` where `JVM` already handle that process behind the scene. On `C` we must clear memory by ourself, if we are not clear memory our application will ran `Out Of Memory`. That is what my senior told me and thats why i decided to learn `C`.
* Second reason, I just want to enrich my Programming Language skills.

## Hello World
Usually first thing what we need to do is installing the compiler or runtime tools, so we can compile and run the program that we write. But on `C` we dont need to install anything, the compiler is **pre installed** on the system. By the way im using `Linux` while learning this, it should be the same if you use Operation System that based on `UNIX` like `MacOS`, but i dont know how about `Windows`, you should search it by yourself.

Just like when learning a Programming Language, mostly first thing that we are gonna write is program to print `Hello World`.

```c
#include <stdio.h>

int main() {
    printf("Hello World\n");
}
```

* You need to create file and give the name with `.c` format extention.
* Inside that file write that code above.
* `#include <stdio.h>`, this is the standar library for input output in `C`. this is mandatory to write because we are gonna use funtion `printf()` under that library.
* `int main()`, actually on the book it only write `main()`, but when i try to compile it, that return error, that because on the book it still using old version of c. Actually the `int main()` function is returning integer value by default is `0`. you can print it directly after executing the program by typing `echo $?`.
* `printf()`, this is function that we are gonna use to print something.
* `"Hello World\n"`, this the word we want to print, but what is that additional `\n` ?. basically that is used for print a new line after the `Hello World`. there are any other magic thing like `\t` for print a `tab`, etc.
* Every statement you write inside the bracket `{}` must end with semicolon `;`.
* We already write our first `C` program. Now how to execute that ?. To execute that on the same directory terminal you need to type `cc $fileName.c`. this will creating a new file name `a.out` if there is no erroron code that you write.
* I already execute that, but there is no `Hello World` printed by the terminal. Chill, you need to do one last step, that is running the `a.out` file by typing `./a.out` on your terminal. Boom! printed, congratulation you already done your first `C` program.
