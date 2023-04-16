#include <stdio.h>
#define LEN 6
int course_number[LEN] = {4, 2, 1, 4, 3, 2};
int main() {
	for(int i = LEN-1; i >= 0; i--) {
		printf("%d", course_number[i]);
	}
	printf("\n");
	return 0;
}
