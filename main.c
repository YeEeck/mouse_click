#include <stdio.h>
#include <windows.h>

int main() {
    int i;
    printf("��������Ҫ����Ĵ�����ò�Ʋ�����;��ͣ�����������ʮ���ʱ������������ŵ���Ҫ��Ķ����ϣ�:");
    scanf("%d", &i);
    for (int k = 0; k < 10; ++k) {
        Sleep(1000);
        printf("%d\n", 10-k);
    }
    for (int j = 0; j < i; ++j) {
        mouse_event (MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0 );
        Sleep(10);
    }
    system("pause");
    return 0;
}