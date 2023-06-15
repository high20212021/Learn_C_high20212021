/* tstswitch.c --switch语句预习*/
/*目标为ASCII转换*/
#include <stdio.h>

int main(void){
  char ch;
  char ch2;
  int select;
  printf("请选择(敲序号):\n1.ASCII转字符\n2.字符转ASCII\n");
  scanf("%d", &select);
  switch (select) {
    case 1:
      printf("请输入ASCII编码:\n");
      scanf("%d",&ch);
      int a = ch;
      printf("此编码对应的字符是: %c ", a);
      break;
    case 2:
      printf("请输入字符:\n");
      scanf("%c",&ch2);
      printf(" %c 对应的编码是: %d ", ch2,ch2);
      break;
  }
  return 0;
}
