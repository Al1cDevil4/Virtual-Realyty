void mx_pyramid(int n);
void mx_cube(int n);

int main() {
    for (int i = 0; i < 16; i++) {
        mx_pyramid(i);
        mx_cube(i);
    }
}
