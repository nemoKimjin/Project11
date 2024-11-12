#include <stdio.h>
	//typedef
	//	struct {
	//	char name[20];
	//	int birth_year;
	//	double height, weight;
	//} PROFILE;
	//int main(void) {
	//	PROFILE profile_arr[3] = {
	//	{"박보영", 1990, 157.0, 41.0},
	//	{"차은우", 1997, 183.0, 70.0},
	//	{0}
	//	};
	//	printf("이름 = %s\n", profile_arr[2].name);
	//	printf("생년 = %d\n", profile_arr[2].birth_year);
	//	printf("키 = %.2f cm\n", profile_arr[2].height);
	//	printf("몸무게 = %.2f kg\n", profile_arr[2].weight);
	//	printf("\n");
	//	return 0;
	//}

int sum(int num1, int num2) {
	int sum = num1 + num2;
	return sum;
}
int getx(int x1, int y1) {
	int sum = x1 + y1;
	return sum;
}
int main(void) {
	int x = 10, y = 20;
	int get = sum(x, y);
	x = getx(x, y);
	printf("result = %d\n", get);
	printf("x = %d, y = %d", x, y);
}