//talkbalk.c 演示与用户交互
#include <stdio.h>
#include <string.h>
#define DENSITY 62.4

int main(void){
    float weight,volume;
	int size,letters;
	char name[40];
	printf("Hi! What's your first name?\n");
	scanf("%s", name);
	printf("%s,what's your weight in pounds?\n", name);
	scanf("%f", weight);
	size = sizeof name;
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("Well,%s,your volume is %2.2f cubic feet.\n", name, volume);
	printf("Also,your first name had %d letters,\n", letters);
	printf("and we have %d bytes to store in it\n", size);
	return 0;
}
//下面注释摘自C Primer Plus
//该程序具有以下新特性
//用数组（array） 储存字符串（character string） 。 在该程序中， 用户输 入的名被储存在数组中， 该数组占用内存中40个连续的字节， 每个字节储存 一个字符值。
//使用%s转换说明来处理字符串的输入和输出。 注意， 在scanf()中， name没有&前缀， 而weight有（稍后解释， &weight和name都是地址） 。
//用C预处理器把字符常量DENSITY定义为62.4。
//用C函数strlen()获取字符串的长度。
//对于BASIC的输入/输出而言， C的输入/输出看上去有些复杂。 不过， 复杂换来的是程序的高效和方便控制输入/输出。 而且， 一旦熟悉用法后， 会发现它很简单。
