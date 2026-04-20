#include <stdio.h>

int main(void) 
{
    int target;   // 목푯값
    int guess;  //추측값
    int count = 0; //시도횟수

  
    scanf("%d", &target); //정답 입력

   do {
    scanf("%d", &guess);    //추측값 입력
    count++;

    if (guess > target)
        printf("%d>?\n", guess);        //추측값이 목푯값보다 클 경우
    else if (guess < target)
        printf("%d<?\n", guess);        //추측값이 목푯값보다 작을 경우
    else
        printf("%d==?\n", guess);       //맞췄을경우

} while (guess != target);             //정답을 맞출때까지 반복

printf("%d\n", count);               //총 시도 횟수 출력

    return 0;
}
