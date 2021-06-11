//여러개의 단어들을 포인터를 이용하여 저장
//word라는 배열에 문자열 여러개 저장하기

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define BUFFER_SIZE 100

int main()
{
	char *word[100];
	int i = 0;
	char buffer[BUFFER_SIZE];

	while (i < 4 && scanf("%s", buffer) != EOF)
	//배열의 이름은 배열의 주솟값을 나타내기때문에 scanf의 인자에 &를 안붙여도 된다.
	{
		word[i] = strdup(buffer);
		i++;
	}
	word[i] = 0;
	i = 0;
	while (i < 4)
	{	
		printf("%s\n", word[i]);
		i++;
	}
}