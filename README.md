*This project has been created as part of the 42 curriculum by ahideo-k.*

# Libft

## Description

Libft is the first core project of the 42 Common Core. Its objective is to recreate a subset of the C Standard Library while implementing additional utility functions that will be reused throughout the curriculum.

This project reinforces fundamental concepts of the C language, including:

- Memory management
- Pointer manipulation
- String handling
- Character classification
- Linked lists
- Modular programming
- Static libraries
- Defensive programming

The final result is a static library (`libft.a`) containing reusable functions that serve as the foundation for future projects such as **get_next_line**, **ft_printf**, **so_long**, **pipex**, **push_swap**, and many others.

---

# Library Overview

The library is divided into three main parts.

## Part 1 – Libc Functions

Reimplementation of standard C library functions without relying on the original implementations.

### Character functions

- ft_isalpha
- ft_isdigit
- ft_isalnum
- ft_isascii
- ft_isprint
- ft_toupper
- ft_tolower

### String functions

- ft_strlen
- ft_strlcpy
- ft_strlcat
- ft_strchr
- ft_strrchr
- ft_strncmp
- ft_strnstr
- ft_strdup

### Memory functions

- ft_memset
- ft_bzero
- ft_memcpy
- ft_memmove
- ft_memchr
- ft_memcmp
- ft_calloc

### Conversion

- ft_atoi

---

## Part 2 – Additional Functions

Utility functions frequently used in later projects.

- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_itoa
- ft_strmapi
- ft_striteri
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd

---

## Part 3 – Linked List Functions

Implementation of a generic singly linked list.

- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap

---

# Project Structure

```
.
├── Makefile
├── libft.h
├── *.c
└── README.md
```

The project generates the static library:

```
libft.a
```

---

# Instructions

## Clone the repository

```bash
git clone https://github.com/Andre-Kikuchi/LIBFT.git libft
cd libft
```

## Compile

Compile the library:

```bash
make
```

Clean object files:

```bash
make clean
```

Remove object files and the library:

```bash
make fclean
```

Rebuild everything:

```bash
make re
```

---

# Using the Library

Include the header:

```c
#include "libft.h"
```

Compile your project linking against the library:

```bash
cc main.c libft.a
```

Example:

```c
#include "libft.h"

int main(void)
{
    ft_putendl_fd("Hello, Libft!", 1);
    return (0);
}
```

---

# Technical Choices

This project follows the requirements established by the 42 subject.

- Written entirely in C
- Compiled with `cc`
- Flags:
  - `-Wall`
  - `-Wextra`
  - `-Werror`
- No global variables
- Helper functions declared as `static` whenever appropriate
- Static library generated using `ar`
- Code compliant with the 42 Norm

---

# Learning Outcomes

Through this project I practiced:

- Memory allocation with `malloc`
- Safe memory manipulation
- Pointer arithmetic
- String processing
- Defensive programming
- Modular software design
- Static libraries
- Linked list manipulation
- Writing reusable code

---

# Resources

## Documentation

- The C Programming Language — Brian W. Kernighan & Dennis M. Ritchie
- Linux Manual Pages (man)
- Understanding and Using C Pointers-O'Reilly Media (2013) - Richard Reese
- Linked List in C - GeeksforGeeks
- GNU C Library Documentation

Useful websites:

- https://man7.org/linux/man-pages/
- https://beej.us/guide/bgc/

---

## AI Usage

Artificial Intelligence was used only as a learning support tool.

Specifically, it was used to:

- clarify concepts about pointer manipulation;
- review edge cases;
- better understand the behavior of standard C library functions;
- improve documentation.

All code was designed, implemented, tested, debugged and understood before submission.

---

# License

This project was developed as part of the 42 curriculum and is intended for educational purposes.