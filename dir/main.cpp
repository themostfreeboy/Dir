#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("正在生成...\n");
	system("dir .\ /B /ON >out.txt");
	printf("生成完毕，生成信息位于当前目录下的\"out.txt\"文件中\nMade By JXL\n");
	system("pause");
	return 0;
}