#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main4()
{
    int num1, num2;

    printf("input 설명해봐 \n");
    scanf("%d", &num1);    // 표준 입력을 받아서 변수에 저장
    scanf("%d", &num2);    // 표준 입력을 받아서 변수에 저장
    
    printf("%d\n", num1);    // 변수의 내용을 출력
    printf("%d\n", num2);    // 변수의 내용을 출력
    
    return 0;
}

