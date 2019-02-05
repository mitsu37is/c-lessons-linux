#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 256

int main(void);
void get_line(char *buffer, int size);

int main(void)
{
	char buffer[BUFFER_SIZE];
	int hour;

	printf("時刻を入力してください。\n");
	get_line(buffer, BUFFER_SIZE);
	hour = atoi(buffer);

	if (hour < 0 || 24 <= hour) {
		printf("時刻の範囲を超えています。\n");
	} else if (hour <= 11) {
		printf("おはようございます。\n");
	} else if (hour == 12) {
		printf("お昼です。\n");
	} else if (hour <= 18) {
		printf("こんにちは。\n");
	} else {
		printf("こんばんは。\n");
	}

	return 0;
}

void get_line(char *buffer, int size)
{
	if (fgets(buffer, size, stdin) == NULL) {
		buffer[0] = '\n';
		return;
	}

	for (int i = 0; i < size; i++) {
		if (buffer[i] == '\n') {
			buffer[i] = '\0';
			return;
		}
	}
}
