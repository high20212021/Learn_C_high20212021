#include <stdio.h>
int main(void){
    char ch;
    printf("请输入一个字符:\n");
    scanf("%c",&ch);
    printf(" %c 的ASCII码是 %d\n", ch, ch);
    return 0;
}
