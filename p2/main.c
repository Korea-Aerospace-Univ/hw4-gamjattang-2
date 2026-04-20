#include <stdio.h>

int main()
{

	int n;                  //문자열의 길이
	char str[101];          //문자열

	int alpha_count = 0;    //현재 소문자 연속 길이
	int digit_count = 0;    //현재 숫자 연속 길이

	int max_alpha = 0;      //최대 연속 소문자 개수
	int max_digit = 0;      //최대 연속 숫자 개수

	scanf("%d", &n);        //문자 개수 입력
	scanf("%s", str);       //문자 입력

	for (int i = 0; i < n; i++) {                    //입력 받은 갯수만큼 반복
		if (str[i] >= 'a' && str[i] <= 'z') {          //소문자인경우 
			alpha_count++;                               //연속 소문자 카운트 증가
			digit_count = 0;                             //숫자 카운트 초기화

		}
		else if (str[i] >= '0' && str[i] <= '9') {     //숫자인경우
			digit_count++;                               //연속 숫자 카운트 증가
			alpha_count = 0;                             //소문자 카운트 초기화

		}
		else {
			alpha_count = 0;                             //그 외의 문자일시 초기화
			digit_count = 0;
		}

		if (alpha_count > max_alpha)                  //alpha_count(연속으로 나온 개수)가 max_alpha(최대 연속 개수)보다 크면 최대 소문자을 갱신함
			max_alpha = alpha_count;

		if (digit_count > max_digit)                  //max_alpha(최대 연속 개수)가 alpha_count(연속으로 나온 개수)보다 크면 최댓값을 갱신함
			max_digit = digit_count;
	}

	printf("%d\n", max_alpha);                      //연속 소문자 최대 개수 출력
	printf("%d\n", max_digit);                      //연속 숫자 최대 개수 출력

	return 0;
}
