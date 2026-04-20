#include <stdio.h>

int main() {
    int target;   // 목푯값
    int guess;    //추측값
    int count = 0; //시도횟수

  
    scanf("%d", &target); //정답 입력

    do {
        scanf("%d", &guess); //추측값 입력
        count++;             //시도횟수증가

        if (guess > target) {               //추측값이 목푯값보다 클 경우
            printf("%d>?\n", guess);              //비교
            printf("%d 보다 낮습니다\n", guess);   //힌트
        }
        else if (guess < target) {         //추측값이 목푯값보다 작을 경우
            printf("%d<?\n", guess);              //비교
            printf("%d 보다 높습니다\n", guess);  //힌트
        }
        else {                            //맞췄을경우
            printf("%d==?\n", guess);       //정답과 비교한 값 출력
            printf("%d 정답입니다\n", guess);    //정답 출력
        }

    } while (guess != target);        //정답을 맞출때까지 반복

    printf("시도횟수는 %d회\n", count);   //총 시도 횟수 출력

    return 0;
}
