#include <stdio.h>
#include <windows.h>

int main() {
    int i;
    printf("请输入你要连点的次数（貌似不能中途暂停）（输入后有十秒的时间来让你把鼠标放到你要点的东西上）:");
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