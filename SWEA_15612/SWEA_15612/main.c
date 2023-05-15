/////////////////////////////////////////////////////////////////////////////////////////////
// 기본 제공코드는 임의 수정해도 관계 없습니다. 단, 입출력 포맷 주의
// 아래 표준 입출력 예제 필요시 참고하세요.
// 표준 입력 예제
// int a;
// float b, c;
// double d, e, f;
// char g;
// char var[256];
// long long AB;
// scanf("%d", &a);                      // int 변수 1개 입력받는 예제
// scanf("%f %f", &b, &c);               // float 변수 2개 입력받는 예제 
// scanf("%lf %lf %lf", &d, &e, &f);     // double 변수 3개 입력받는 예제
// scanf("%c", &g);                      // char 변수 1개 입력받는 예제
// scanf("%s", &var);                    // 문자열 1개 입력받는 예제
// scanf("%lld", &AB);                   // long long 변수 1개 입력받는 예제
/////////////////////////////////////////////////////////////////////////////////////////////
// 표준 출력 예제
// int a = 0;                            
// float b = 1.0, c = 2.0;               
// double d = 3.0, e = 0.0; f = 1.0;
// char g = 'b';
// char var[256] = "ABCDEFG";
// long long AB = 12345678901234567L;
// printf("%d", a);                      // int 변수 1개 출력하는 예제
// printf("%f %f", b, c);                // float 변수 2개 출력하는 예제
// printf("%lf %lf %lf", d, e, f);       // double 변수 3개 출력하는 예제
// printf("%c", g);                      // char 변수 1개 출력하는 예제
// printf("%s", var);                    // 문자열 1개 출력하는 예제
// printf("%lld", AB);                   // long long 변수 1개 출력하는 예제
/////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
    int test_case;
    int T;
    /* 아래의 freopen 함수는 input.txt 를 read only 형식으로 연 후,
    앞으로 표준 입력(키보드) 대신 input.txt 파일로부터 읽어오겠다는 의미의 코드입니다.
    여러분이 작성한 코드를 테스트 할 때, 편의를 위해서 input.txt에 입력을 저장한 후,
    freopen 함수를 이용하면 이후 scanf 를 수행할 때 표준 입력 대신 파일로부터 입력을 받아올 수 있습니다.
    따라서 테스트를 수행할 때에는 아래 주석을 지우고 이 함수를 사용하셔도 좋습니다.
    단, 채점을 위해 코드를 제출하실 때에는 반드시 freopen 함수를 지우거나 주석 처리 하셔야 합니다.
    */
    // freopen("input.txt", "r", stdin);
    /* 아래 코드를 수행하지 않으면 여러분의 프로그램이 제한 시간 초과로 강제 종료 되었을 때,
    출력한 내용이 실제 표준 출력에 기록되지 않을 수 있습니다.
    따라서 안전을 위해 반드시 setbuf(stdout, NULL); 을 수행하시기 바랍니다.
    */
    setbuf(stdout, NULL);
    scanf_s("%d", &T);
    /*
    여러 개의 테스트 케이스를 처리하기 위한 부분입니다.
    */
    for (test_case = 1; test_case <= T; ++test_case)
    {
        //배열입력받기
        char array[8][8];
        int x_count = 0;
        int y_count = 0;
        int truefalse = 1;
        for (int i = 0; i < 8; i++)
            scanf_s("%s", array[i],8);

        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if (array[i][j] == 'O')
                    x_count++;
            }
            //한 행에 O가 한개만 있으면 count 0으로 초기화하고 다음 열 탐색
            if (x_count == 1) {
                x_count = 0;
            }
            //한 행에 O가 없거나 두개 이상 있다면 truefalse 변수를 0으로 초기화하고 for문 탈출
            else {
                truefalse = 0;
                break;
            }
        }
        //turefalse가 0이라면, 첫 번째 조건 불만족. no출력 후 마무리
        if (truefalse == 0) {
            printf("#%d no\n", test_case);
        }
        //첫번째 조건 만족했다면, 같은 열에 O가 한개만 존재하는지 확인
        else {
            for (int i = 0; i < 8; i++) {
                for (int j = 0; j < 8; j++) {
                    if (array[j][i] == 'O')
                        y_count++;
                }
                if (y_count == 1)
                    y_count = 0;
                else {
                    truefalse = 0;
                    break;
                }
            }
            if (truefalse == 0)
                printf("#%d no\n", test_case);
            else
                printf("%d yes\n", test_case);
        }



        //
    }
    return 0; //정상종료시 반드시 0을 리턴해야 합니다.
}