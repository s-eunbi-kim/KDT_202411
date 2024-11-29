#include "hiker.h"
#include <stdio.h>
#include <stdbool.h>

#define ERROR_VALUE -1

// 양의 정수 여부 확인
bool isPositive(int num) {
    return num >= 0;
}

// 산술 연산 공통 처리 함수
bool arePositive(int a, int b) {
    return isPositive(a) && isPositive(b);
}

// 더하기 함수
int add(int a, int b) {
    return arePositive(a, b) ? a + b : ERROR_VALUE;
}

// 빼기 함수
int subtract(int a, int b) {
    return arePositive(a, b) ? a - b : ERROR_VALUE;
}

// 나누기 함수
int divide(int a, int b) {
    if (b == 0 || !arePositive(a, b)) {
        return ERROR_VALUE; // 에러: 0으로 나누기 또는 음수
    }
    return a / b;
}

// 곱하기 함수
int multiply(int a, int b) {
    return arePositive(a, b) ? a * b : ERROR_VALUE;
}

// 함수 추가
// 짝수인지 확인하는 함수
bool isEven(int number) {
    return number % 2 == 0;
}

// 이름을 받아 인사하는 함수 (C 스타일 문자열 사용)
void greet(const char* name, char* output, size_t output_size) {
    snprintf(output, output_size, "Hello, %s!", name); // 출력 버퍼에 문자열 생성
}
