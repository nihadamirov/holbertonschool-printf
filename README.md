# Holberton School - Group Project : Printf

This repository contains an implementation of the `_printf` function, which formats and prints data to the standard output stream based on a specified format string. The implementation includes support for various format specifiers such as `%c` for characters, `%s` for strings, `%d` for decimals, `%i` for integers, and `%%` for printing a percent sign.

## Function Signature

```c
int _printf(const char *format, ...);
```

## Usage

To use the _printf function in your program, include the header file main.h:

```c
#include "main.h"
```

Then, call the _printf function in your code with the desired format specifier and arguments. For example:

```c
int main(void) {
    _printf("Hello, %s!\n", "world");
    return (0);
}
```

## Compilation and Execution
Compile your source code, linking it with the implementation files (_printf.c, _putchar.c, get_fun.c, print_functions.c, main.h).
```
gcc -o your_program main.c _printf.c _putchar.c get_fun.c print_functions.c

./your_program
```

## Format Specifiers
%c: Prints a single character.
%s: Prints a string.
%%: Prints a percent sign.

## Return Value
The _printf function returns the number of characters printed (excluding the null byte used to terminate output to strings). If an error occurs, it returns a negative value.

## Examples

```c
#include <stdio.h>
#include "main.h"

int main(void) {
    int count;
    count = _printf("Hello, %s!\n", "world");
    printf("Number of characters printed: %d\n", count);
    return (0);
}
```
## Flowchart

Below is a textual representation of the flowchart illustrating the operation of the `_printf` function:

<p align="center">
  <img src="C:\Users\nihad\Downloads\_printf-flowchart.png" alt="_printf-flowchart" />
</p>


## Authors

- **Aysu Sadikhova** - https://github.com/aysucuk
- **Nihad Amirov** - https://github.com/nihadamirov
