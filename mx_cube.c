void mx_printchar(char c);

static void draw_array_of(int n, char c) {
    for (int i = 0; i < n; i++) {
        mx_printchar(c);
    }
}

static void draw_array_of_with_border_of(int n, char c, char border) {
    mx_printchar(border);
    draw_array_of(n, c);
    mx_printchar(border);
}

static void draw_top_face(int horizontal_line_amount,
                          int diagonal_line_amount) {
    draw_array_of(diagonal_line_amount + 1, ' ');
    draw_array_of_with_border_of(horizontal_line_amount, '-', '+');
    mx_printchar('\n');

    for (int i = 0; i < diagonal_line_amount; i++) {
        draw_array_of(diagonal_line_amount - i, ' ');
        draw_array_of_with_border_of(horizontal_line_amount, ' ', '/');
        draw_array_of(i, ' ');
        mx_printchar('|');
        mx_printchar('\n');
    }

    draw_array_of_with_border_of(horizontal_line_amount, '-', '+');
    draw_array_of(diagonal_line_amount, ' ');
    mx_printchar('|');
    mx_printchar('\n');
}

static void draw_bottom_part(int horizontal_line_amount,
                             int diagonal_line_amount) {
    int n = horizontal_line_amount / 2;

    for (int i = 0; i < n - diagonal_line_amount - 1; i++) {
        draw_array_of_with_border_of(horizontal_line_amount, ' ', '|');
        draw_array_of(diagonal_line_amount, ' ');
        mx_printchar('|');
        mx_printchar('\n');
    }

    draw_array_of_with_border_of(horizontal_line_amount, ' ', '|');
    draw_array_of(diagonal_line_amount, ' ');
    mx_printchar('+');
    mx_printchar('\n');

    for (int i = 0; i < diagonal_line_amount; i++) {
        draw_array_of_with_border_of(horizontal_line_amount, ' ', '|');
        draw_array_of(diagonal_line_amount - i - 1, ' ');
        mx_printchar('/');
        mx_printchar('\n');
    }

    draw_array_of_with_border_of(horizontal_line_amount, '-', '+');
    mx_printchar('\n');
}

void mx_cube(int n) {
    int horizontal_line_amount = 2 * n;
    int diagonal_line_amount = n / 2;

    if (n < 2) return;

    draw_top_face(horizontal_line_amount, diagonal_line_amount);
    draw_bottom_part(horizontal_line_amount, diagonal_line_amount);
}
