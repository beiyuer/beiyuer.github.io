
# ifndef __LITAN__
# define __LITAN__
# include <stdio.h>
# include <stdlib.h>

# ifndef __LITAN__NO_CONSTANT
typedef int bool;
const bool true = 1;
const bool false = 0;
typedef char *string;
# endif

# ifndef __LITAN__NO_IO
void put_char(char x) {
	printf("%c", x);
}
void put_int(int x) {
	printf("%d", x);
}
void put_float(float x) {
	printf("%f", x);
}
void put_string(string x) {
    char *c;
	for (c=x; (*c)!='\0'; c++) {
        printf("%c", *c);
    }
}
void put_bool(bool x) {
	put_string(x ? "true" : "false");
}
char get_char() {
	char x;
	scanf("%c", &x);
	return x;
}
int get_int() {
	int x;
	scanf("%d", &x);
	return x;
}
float get_float() {
	float x;
	scanf("%f", &x);
	return x;
}
# endif
# endif