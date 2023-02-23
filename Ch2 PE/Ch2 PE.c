#include <stdio.h>

int main(void) {
	printf("# 2-1\n");
	ch2_1();
	printf("\n \n");

	printf("# 2-3\n");
	ch2_3();
	printf("\n \n");

	printf("# 2-4\n");
	ch2_4();
	printf("\n \n");

	printf("# 2-6\n");
	ch2_6();
	printf("\n \n");

	printf("# 2-8\n");
	ch2_8();
}

int ch2_1(void) {
	printf("Gustav Mahler \n");
	printf("Gustav \n");
	printf("Mahler \n");
	printf("Gustav ");
	printf("Mahler \n");

	return 0;
}

int ch2_3(void) {
	int year;
	int days;
	year = 21;
	days = year * 365;
	printf("year: %d, days: %d", year, days);

	return 0;
}

void jolly(void); // 프로토타입 선언 안해주면 에러남
void deny(void);
int ch2_4(void) {
	jolly();
	jolly();
	jolly();
	deny();

	return 0;
}
void jolly(void) {
	printf("For he's a jolly good fellow!\n");
}
void deny(void) {
	printf("Which nobody can deny!\n");
}

int ch2_6(void) {
	int toes;
	toes = 10;
	printf("toes: %d, toes*2: %d, toes^2: %d", toes, toes * 2, toes * toes);

	return 0;
}

void one_three(void);
void two(void);
int ch2_8(void) {
	printf("starting now: \n");
	one_three();
	printf("done! \n");

	return 0;
}
void one_three(void) {
	printf("one\n");
	two();
	printf("three\n");

	return 0;
}
void two(void) {
	printf("two\n");

	return 0;
}