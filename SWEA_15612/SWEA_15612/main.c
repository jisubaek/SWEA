/////////////////////////////////////////////////////////////////////////////////////////////
// �⺻ �����ڵ�� ���� �����ص� ���� �����ϴ�. ��, ����� ���� ����
// �Ʒ� ǥ�� ����� ���� �ʿ�� �����ϼ���.
// ǥ�� �Է� ����
// int a;
// float b, c;
// double d, e, f;
// char g;
// char var[256];
// long long AB;
// scanf("%d", &a);                      // int ���� 1�� �Է¹޴� ����
// scanf("%f %f", &b, &c);               // float ���� 2�� �Է¹޴� ���� 
// scanf("%lf %lf %lf", &d, &e, &f);     // double ���� 3�� �Է¹޴� ����
// scanf("%c", &g);                      // char ���� 1�� �Է¹޴� ����
// scanf("%s", &var);                    // ���ڿ� 1�� �Է¹޴� ����
// scanf("%lld", &AB);                   // long long ���� 1�� �Է¹޴� ����
/////////////////////////////////////////////////////////////////////////////////////////////
// ǥ�� ��� ����
// int a = 0;                            
// float b = 1.0, c = 2.0;               
// double d = 3.0, e = 0.0; f = 1.0;
// char g = 'b';
// char var[256] = "ABCDEFG";
// long long AB = 12345678901234567L;
// printf("%d", a);                      // int ���� 1�� ����ϴ� ����
// printf("%f %f", b, c);                // float ���� 2�� ����ϴ� ����
// printf("%lf %lf %lf", d, e, f);       // double ���� 3�� ����ϴ� ����
// printf("%c", g);                      // char ���� 1�� ����ϴ� ����
// printf("%s", var);                    // ���ڿ� 1�� ����ϴ� ����
// printf("%lld", AB);                   // long long ���� 1�� ����ϴ� ����
/////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
    int test_case;
    int T;
    /* �Ʒ��� freopen �Լ��� input.txt �� read only �������� �� ��,
    ������ ǥ�� �Է�(Ű����) ��� input.txt ���Ϸκ��� �о���ڴٴ� �ǹ��� �ڵ��Դϴ�.
    �������� �ۼ��� �ڵ带 �׽�Ʈ �� ��, ���Ǹ� ���ؼ� input.txt�� �Է��� ������ ��,
    freopen �Լ��� �̿��ϸ� ���� scanf �� ������ �� ǥ�� �Է� ��� ���Ϸκ��� �Է��� �޾ƿ� �� �ֽ��ϴ�.
    ���� �׽�Ʈ�� ������ ������ �Ʒ� �ּ��� ����� �� �Լ��� ����ϼŵ� �����ϴ�.
    ��, ä���� ���� �ڵ带 �����Ͻ� ������ �ݵ�� freopen �Լ��� ����ų� �ּ� ó�� �ϼž� �մϴ�.
    */
    // freopen("input.txt", "r", stdin);
    /* �Ʒ� �ڵ带 �������� ������ �������� ���α׷��� ���� �ð� �ʰ��� ���� ���� �Ǿ��� ��,
    ����� ������ ���� ǥ�� ��¿� ��ϵ��� ���� �� �ֽ��ϴ�.
    ���� ������ ���� �ݵ�� setbuf(stdout, NULL); �� �����Ͻñ� �ٶ��ϴ�.
    */
    setbuf(stdout, NULL);
    scanf_s("%d", &T);
    /*
    ���� ���� �׽�Ʈ ���̽��� ó���ϱ� ���� �κ��Դϴ�.
    */
    for (test_case = 1; test_case <= T; ++test_case)
    {
        //�迭�Է¹ޱ�
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
            //�� �࿡ O�� �Ѱ��� ������ count 0���� �ʱ�ȭ�ϰ� ���� �� Ž��
            if (x_count == 1) {
                x_count = 0;
            }
            //�� �࿡ O�� ���ų� �ΰ� �̻� �ִٸ� truefalse ������ 0���� �ʱ�ȭ�ϰ� for�� Ż��
            else {
                truefalse = 0;
                break;
            }
        }
        //turefalse�� 0�̶��, ù ��° ���� �Ҹ���. no��� �� ������
        if (truefalse == 0) {
            printf("#%d no\n", test_case);
        }
        //ù��° ���� �����ߴٸ�, ���� ���� O�� �Ѱ��� �����ϴ��� Ȯ��
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
    return 0; //��������� �ݵ�� 0�� �����ؾ� �մϴ�.
}