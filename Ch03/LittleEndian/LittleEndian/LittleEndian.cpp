/*
* 리버싱 핵심 원리 - Ch03. 리틀 엔디언 표기법
* 파일명: LittleEndian.cpp
* 파일 버전: 0.1
* 작성자: 이 석원
* 작성 일자: 2024-01-25
* 이전 버전 작성 일자:
* 버전 내용: 간단한 Little Endian 바이트 오더 이해를 위한 예제
* 이전 버전 내용:
*/

#include <Windows.h>
#include <tchar.h>

BYTE b = 0x12;
WORD w = 0x1234;
DWORD dw = 0x12345678;
TCHAR str[] = L"abcde";

int main(int argc, char *argv[])
{
	byte lb = b;
	WORD lw = w;
	DWORD ldw = dw;
	TCHAR *lstr = str;

	_tprintf(TEXT("%s\n"), lstr);

	return 0;
}