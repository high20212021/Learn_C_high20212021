#include <stdio.h>

int main(void){
    int ten = 10;
    int two = 2;
    printf("正确做法:\n");
    printf("%d minus %d is %d\n", ten, 2, ten - two);
    printf("错误做法:\n");
    printf("%d minus %d is %d\n", ten);
    return 0;
}
