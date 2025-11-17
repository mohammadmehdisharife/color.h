# Color.h

A lightweight and easy-to-use header file for adding **colored** and **styled** text output to terminal applications in C.  
This file uses ANSI escape codes and requires no additional dependencies.

---

## Features

- Regular text colors  
- Bold colors  
- Underlined colors  
- Background colors  
- High-intensity colors  
- High-intensity + bold colors  
- Text styles (bold, italic, underline, blink, reverse, etc.)  
- Predefined print macros:
  - `PRINT_ERROR`
  - `PRINT_WARNING`
  - `PRINT_SUCCESS`
  - `PRINT_INFO`
- General-purpose macro:
  - `PRINT_COLOR(color, format, ...)`

---

## Usage

### 1. Include the header
```c
#include "color.h"
```

### 2. Print colored text
```c
printf(COLOR_RED "This is red text!" COLOR_RESET "\n");
```

### 3. Use predefined message macros
```c
PRINT_ERROR("Something went wrong!");
PRINT_WARNING("This is a warning.");
PRINT_SUCCESS("Operation completed successfully.");
PRINT_INFO("Some useful information.");
```

### 4. Use the general color macro
```c
PRINT_COLOR(COLOR_BOLD_BLUE, "Value: %d\n", 42);
```

---

## Compatibility

- Works on all terminals supporting ANSI escape codes  
  (Linux, macOS, most Windows terminals)
- If colors do not appear on Windows, enable ANSI mode using `SetConsoleMode()`  
  or run your program in Git Bash, Windows Terminal, or newer PowerShell versions.

---

## License

This project is licensed under the **MIT License**.

---

## Notes

Feel free to use, modify, or integrate this header in any project.  
Star the repository if you find it useful!
