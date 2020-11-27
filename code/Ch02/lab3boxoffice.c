#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	//영화 정보 구조체 
	typedef struct movie
	{
		char* title;		//영화제목
		int attendance;		//관객수
		char director[20];	//감독
	} movie;

	movie box[] = { { "명량", 17613000, "김한민" },
					{ "극한직업", 16261000, "윤제균" },
					{ "신과함께-죄와벌", 14419000 } };

	//세번째 영화의 감독을 김용화로 저장
	strcpy(box[2].director, "김용화");

	printf("       제목        감독   관객수\n");
	printf("=================================\n");
	for (int i = 0; i < 3; i++)
		printf("[%15s] %6s %d\n",
			box[i].title, box[i].director, box[i].attendance);

	return 0;
}

