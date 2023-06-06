#include <stdio.h>

int main(void){
  int tz;
  int sg;
  printf("请输入体重:\n");
  scanf("%d", &tz);
  printf("请输入身高:\n");
  scanf("%d", &sg);
  float bmi1 = sg * sg;
  float bmi = tz / bmi1;
  printf("你的BMI为(因为bug,请以后四位小数点为准,例如报告为0.002595,则为25.95): %f \n", bmi);
  return 0;
}
