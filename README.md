# 42_Libft

**Libft** is the first project of the 42 school curriculum. The goal is to re-implement a set of standard C library functions from scratch, plus some extra utilities, and package them into a static library (`libft.a`) that will be reused in future 42 projects.

Writing these functions yourself teaches you how the C standard library actually works under the hood: memory, strings, pointers, and linked lists.

## 📦 What's inside

The library contains **43 functions** (all mandatory in the current subject, including the `ft_lst*` linked list functions), grouped by purpose:

### Character checks & conversion
| Function | Description |
| --- | --- |
| `ft_isalpha` | Checks if the character is a letter |
| `ft_isdigit` | Checks if the character is a digit (0–9) |
| `ft_isalnum` | Checks if the character is alphanumeric |
| `ft_isascii` | Checks if the character is a valid ASCII character |
| `ft_isprint` | Checks if the character is printable |
| `ft_toupper` | Converts a lowercase letter to uppercase |
| `ft_tolower` | Converts an uppercase letter to lowercase |

### String functions
| Function | Description |
| --- | --- |
| `ft_strlen` | Returns the length of a string |
| `ft_strlcpy` | Size-bounded string copy |
| `ft_strlcat` | Size-bounded string concatenation |
| `ft_strchr` | Finds the first occurrence of a character in a string |
| `ft_strrchr` | Finds the last occurrence of a character in a string |
| `ft_strncmp` | Compares two strings up to n characters |
| `ft_strnstr` | Locates a substring in a string, searching at most n characters |
| `ft_strdup` | Duplicates a string (with malloc) |
| `ft_substr` | Extracts a substring from a string |
| `ft_strjoin` | Concatenates two strings into a new one |
| `ft_strtrim` | Trims characters from the beginning and end of a string |
| `ft_split` | Splits a string into an array of strings using a delimiter |
| `ft_strmapi` | Applies a function to each character, returns a new string |
| `ft_striteri` | Applies a function to each character of a string in place |

### Memory functions
| Function | Description |
| --- | --- |
| `ft_memset` | Fills memory with a constant byte |
| `ft_bzero` | Zeroes out a memory area |
| `ft_memcpy` | Copies a memory area |
| `ft_memmove` | Copies a memory area, safe for overlapping regions |
| `ft_memchr` | Scans memory for a byte |
| `ft_memcmp` | Compares two memory areas |
| `ft_calloc` | Allocates and zero-initializes memory |

### Number conversion
| Function | Description |
| --- | --- |
| `ft_atoi` | Converts a string to an integer |
| `ft_itoa` | Converts an integer to a string |

### File descriptor output
| Function | Description |
| --- | --- |
| `ft_putchar_fd` | Writes a character to a file descriptor |
| `ft_putstr_fd` | Writes a string to a file descriptor |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor |
| `ft_putnbr_fd` | Writes an integer to a file descriptor |

### Linked list functions
Built around the `t_list` structure defined in `libft.h`:
```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Function | Description |
| --- | --- |
| `ft_lstnew` | Creates a new list node |
| `ft_lstadd_front` | Adds a node at the beginning of the list |
| `ft_lstadd_back` | Adds a node at the end of the list |
| `ft_lstsize` | Counts the nodes in the list |
| `ft_lstlast` | Returns the last node of the list |
| `ft_lstdelone` | Frees one node using a delete function |
| `ft_lstclear` | Frees the whole list |
| `ft_lstiter` | Applies a function to the content of every node |
| `ft_lstmap` | Creates a new list by applying a function to every node |

## 🛠 Build

```bash
git clone https://github.com/03-25-03-smt/42_Libft.git
cd 42_Libft
make
```

This produces `libft.a`. Other targets:

| Command | Effect |
| --- | --- |
| `make` | Compile the library |
| `make clean` | Remove object files |
| `make fclean` | Remove object files and `libft.a` |
| `make re` | Full rebuild |

## 🚀 Usage

Include the header in your code and link the library when compiling:

```c
#include "libft.h"

int main(void)
{
    char **words = ft_split("hello world 42", ' ');
    ft_putendl_fd(words[0], 1); // hello
    return (0);
}
```

```bash
cc main.c -L. -lft -o my_program
```

## ✅ Testing

Popular community testers for libft:

- [francinette](https://github.com/xicodomingues/francinette)
- [libftTester](https://github.com/Tripouille/libftTester)
- [libft-war-machine](https://github.com/0x050f/libft-war-machine)
