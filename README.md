[![License](https://img.shields.io/badge/license-CC%20BY--NC--SA%204.0-blue.svg)](https://bit.ly/cc-by-nc-sa-40)

# Usage

To compile and run a program use:
```
$ ./build.sh gcc src/<filename>
```

Executable will be started automatically. It can be found in `build/scr/` folder.

# Semester \<2\> lab \<4\>

## Task \<1\>

С клавиатуры заполнить файл целыми числами. Вывести содержимое файла на экран.

## Task \<2\>

Найти среднее арифметическое всех чисел в файле.

## Task \<3\>

Поменять местами первое и последнее число в файле.

# Credits

Written by Alexey Filich.

# License

This repository is licensed under [Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International](LICENCE.md).

# Notes

For compiling with SDL2:
```
-lmingw32 -lSDL2main -lSDL2
```

For compiling with ncurses
```
-lncursesw
```

## Description for some `include` files:

- stdarg.h

    Variable arguments with `va_list args; va_start(args, last_variable_in_function); va_arg(args, type)`.

- stdbool.h

    `True` and `false`.

- stdio.h

    `printf`, `scanf`, `NULL`, etc.

- stdlib.h

    Memory: `malloc`, `calloc`, `free`, \
    Random: `rand`, `srand`.

- string.h

    `memset`, `memcpy`, `memmove`.

- time.h

    `time(0)`.
