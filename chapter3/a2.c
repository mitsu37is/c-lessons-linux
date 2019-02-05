#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 256
#define NAME_SIZE 256

int main(void);
void get_line(char *buffer, int size);

int main(void)
{
	char name1[NAME_SIZE];
	char name2[NAME_SIZE];
	char buffer[BUFFER_SIZE];
	double age1, age2;

	printf("2人の平均年齢を計算します。\n");

	printf("1人目の名前を入力してください。\n");
	get_line(name1, NAME_SIZE);
	printf("%s さんの年齢を入力してください。\n", name1);
	get_line(buffer, BUFFER_SIZE);
	age1 = atoi(buffer);

	printf("2人目の名前を入力してください。\n");
	get_line(name2, NAME_SIZE);
	printf("%s さんの年齢を入力してください。\n", name2);
	get_line(buffer, BUFFER_SIZE);
	age2 = atoi(buffer);

	printf("%s さんと %s さんの平均年齢は %0.1f 歳です。\n", name1, name2, (age1 + age2)/2.0);
	return 0;
}

void get_line(char *buffer, int size)
{
	if (fgets(buffer, size, stdin) == NULL) {
		buffer[0] = '\0';
		return;
	}

	for (int i = 0; i < size; i++) {
		if (buffer[i] == '\n') {
			buffer[i] = '\0';
			return;
		}
	}
}
