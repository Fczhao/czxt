/*
 * @Author: Fczhao
 * @Date: 2023-05-22 14:50:02
 */
#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
/*
功能：退出时保存文件
*/
void test_exit() {
	FILE* fp;
	fp = fopen("1.in", "w");
	fprintf(fp, "test_exit\n");
	fclose(fp);
}
int main() {
	atexit(test_exit);
	while(1);
	return 0;
}
