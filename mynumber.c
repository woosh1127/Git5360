#include <stdio.c>

int main() {
	for(int i =0, i <= 100, i++) {
		if(i % 2 != 0) {
			printf("%d", i);
		}
	}
	printf("\n");
	for (int i = 0, i <= 100, i++) {
		if(i % 2 == 0) {
			printf("%d", i)
		}
	}
	return 0;
}
