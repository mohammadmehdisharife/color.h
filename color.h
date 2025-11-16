#ifndef COLOR_H
#define COLOR_H

/* ===== RESET ===== */
#define COLOR_RESET   "\033[0m"

/* ===== REGULAR COLORS ===== */
#define COLOR_BLACK   "\033[0;30m"
#define COLOR_RED     "\033[0;31m"
#define COLOR_GREEN   "\033[0;32m"
#define COLOR_YELLOW  "\033[0;33m"
#define COLOR_BLUE    "\033[0;34m"
#define COLOR_MAGENTA "\033[0;35m"
#define COLOR_CYAN    "\033[0;36m"
#define COLOR_WHITE   "\033[0;37m"

/* ===== BOLD COLORS ===== */
#define COLOR_BOLD_BLACK   "\033[1;30m"
#define COLOR_BOLD_RED     "\033[1;31m"
#define COLOR_BOLD_GREEN   "\033[1;32m"
#define COLOR_BOLD_YELLOW  "\033[1;33m"
#define COLOR_BOLD_BLUE    "\033[1;34m"
#define COLOR_BOLD_MAGENTA "\033[1;35m"
#define COLOR_BOLD_CYAN    "\033[1;36m"
#define COLOR_BOLD_WHITE   "\033[1;37m"

/* ===== UNDERLINED COLORS ===== */
#define COLOR_UNDERLINE_BLACK   "\033[4;30m"
#define COLOR_UNDERLINE_RED     "\033[4;31m"
#define COLOR_UNDERLINE_GREEN   "\033[4;32m"
#define COLOR_UNDERLINE_YELLOW  "\033[4;33m"
#define COLOR_UNDERLINE_BLUE    "\033[4;34m"
#define COLOR_UNDERLINE_MAGENTA "\033[4;35m"
#define COLOR_UNDERLINE_CYAN    "\033[4;36m"
#define COLOR_UNDERLINE_WHITE   "\033[4;37m"

/* ===== BACKGROUND COLORS ===== */
#define COLOR_BG_BLACK   "\033[40m"
#define COLOR_BG_RED     "\033[41m"
#define COLOR_BG_GREEN   "\033[42m"
#define COLOR_BG_YELLOW  "\033[43m"
#define COLOR_BG_BLUE    "\033[44m"
#define COLOR_BG_MAGENTA "\033[45m"
#define COLOR_BG_CYAN    "\033[46m"
#define COLOR_BG_WHITE   "\033[47m"

/* ===== HIGH INTENSITY COLORS ===== */
#define COLOR_BRIGHT_BLACK   "\033[0;90m"
#define COLOR_BRIGHT_RED     "\033[0;91m"
#define COLOR_BRIGHT_GREEN   "\033[0;92m"
#define COLOR_BRIGHT_YELLOW  "\033[0;93m"
#define COLOR_BRIGHT_BLUE    "\033[0;94m"
#define COLOR_BRIGHT_MAGENTA "\033[0;95m"
#define COLOR_BRIGHT_CYAN    "\033[0;96m"
#define COLOR_BRIGHT_WHITE   "\033[0;97m"

/* ===== BOLD HIGH INTENSITY ===== */
#define COLOR_BOLD_BRIGHT_BLACK   "\033[1;90m"
#define COLOR_BOLD_BRIGHT_RED     "\033[1;91m"
#define COLOR_BOLD_BRIGHT_GREEN   "\033[1;92m"
#define COLOR_BOLD_BRIGHT_YELLOW  "\033[1;93m"
#define COLOR_BOLD_BRIGHT_BLUE    "\033[1;94m"
#define COLOR_BOLD_BRIGHT_MAGENTA "\033[1;95m"
#define COLOR_BOLD_BRIGHT_CYAN    "\033[1;96m"
#define COLOR_BOLD_BRIGHT_WHITE   "\033[1;97m"

/* ===== TEXT STYLES ===== */
#define STYLE_BOLD          "\033[1m"
#define STYLE_DIM           "\033[2m"
#define STYLE_ITALIC        "\033[3m"
#define STYLE_UNDERLINE     "\033[4m"
#define STYLE_BLINK         "\033[5m"
#define STYLE_REVERSE       "\033[7m"
#define STYLE_HIDDEN        "\033[8m"
#define STYLE_STRIKETHROUGH "\033[9m"

/* ===== CONVENIENCE MACROS ===== */
#define PRINT_ERROR(msg)    printf("%sError: %s%s\n", COLOR_BOLD_RED, msg, COLOR_RESET)
#define PRINT_WARNING(msg)  printf("%sWarning: %s%s\n", COLOR_BOLD_YELLOW, msg, COLOR_RESET)
#define PRINT_SUCCESS(msg)  printf("%sSuccess: %s%s\n", COLOR_BOLD_GREEN, msg, COLOR_RESET)
#define PRINT_INFO(msg)     printf("%sInfo: %s%s\n", COLOR_BOLD_CYAN, msg, COLOR_RESET)

#define PRINT_COLOR(color, format, ...) \
    printf("%s" format "%s", color, ##__VA_ARGS__, COLOR_RESET)

#endif /* COLOR_H */
