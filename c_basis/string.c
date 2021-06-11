//https://ansohxxn.github.io/c/1/

//문자열 생성

int main()
{
//1) char타입의 배열의 각 칸마다 문자 하나씩 저장
char str[6];
str[0] = 'h';
str[1] = 'e';
str[2] = 'l';
str[3] = 'l';
str[4] = 'o';
str[5] = '\0';
//null문자는 문자열의 끝을 표시. 즉 배열의 크기가 문자열의 길이보다 적어도 1만큼 길어야한다.
}

//편리한 문자열 생성 방법
//2) 특수한 문자열 문법
char str[] = "hello";
//stack에 저장된 str이 text에 저장된 hello를 가리킨다.

//1), 2)
//hello배열을 가리키는 것이기 때문에 다른 배열을 가리키는 것은 불가능하다.
//hello 문자 배열을 저장하는 것이기 때문에 변경이 가능하다.

//3) 문자열 literal
char *str = "hello";
//포인터 변수 str에 hello의 시작주소를 저장한다.
//hello배열의 주소를 가리키는 것이기 때문에 다른 배열의 주소를 가리키는 것이 가능하다.
//hello 문자열의 시작주소를 저장하는 것이기 때문에 변경이 불가능하다.


//string.h 라이브러리 함수
/*
strcpy : 문자열 복사
strlen : 문자열 길이
strcat : 문자열 합치기
strcmp : 문자열 비교
*/

//파일로부터 읽기
#include <stdio.h>

void main()
{
	FILE * fp = fopen("input.txt", "r"); //open mode = read
	char buffer[100];
	while (fscanf(fp, "%s", buffer) != EOF)
		printf("%s", buffer);
	fclose(fp);
}

//파일 읽고 쓰기
#include <stdio.h>
void main()
{
	FILE *in_fp = fopen("input.txt", "r");
	FILE *out_fp = fopen("output.txt", "w");
	char buffer[100];
	while (fscanf(in_fp, "%s", buffer) != EOF)
		fprintf(out_fp ,"%s", buffer);
	fclose(in_fp);
	fclose(out_fp);
}