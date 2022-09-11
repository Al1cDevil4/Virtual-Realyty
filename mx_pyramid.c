void mx_printchar(char c);

static void draw_array_of(int n, char c) {
    for (int i = 0; i < n; i++) {
        mx_printchar(c);
    }
}

void mx_pyramid(int n) {
    if (n < 2 || n % 2 != 0) return;

    draw_array_of(n - 1, ' ');
    mx_printchar('/');
    mx_printchar('\\');
    mx_printchar('\n');

    for (int i = 1; i <= n / 2-1; i++) {
        draw_array_of(n - 1 - i, ' ');
        mx_printchar('/');
        draw_array_of(i * 2 - 1, ' ');
        mx_printchar('\\');
        draw_array_of(i, ' ');
        mx_printchar('\\');

        mx_printchar('\n');
    }
    for (int i = 1; i < n / 2; i++) {
        draw_array_of(n / 2 - i, ' ');
        mx_printchar('/');
        draw_array_of((i + n / 2 -1) * 2 - 1, ' ');
        mx_printchar('\\');
        draw_array_of(n / 2 - i, ' ');
        mx_printchar('|');

        mx_printchar('\n');
    }
    mx_printchar('/');
    draw_array_of(n * 2 - 3, '_');
    mx_printchar('\\');
    mx_printchar('|');

    mx_printchar('\n');
}
