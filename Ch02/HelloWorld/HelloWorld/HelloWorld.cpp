/*
* 리버싱 핵심 원리 - Hello World! 리버싱
* 파일명: HelloWorld.cpp
* 파일 버전: 0.1
* 작성자: 이 석원
* 작성 일자: 2024-01-25
* 이전 버전 작성 일자:
* 버전 내용: 간단한 Hello World 프로그램 리버싱
* 이전 버전 내용:
*/

#include <Windows.h>
#include <tchar.h>

int _tmain(int argc, TCHAR *argv[])
{
	MessageBox(NULL,
		TEXT("Hello World!"),
		TEXT("sevenshards.tistory.com"),
		MB_OK);

	return 0;
}