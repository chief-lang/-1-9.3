// 指针1 9.3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//地址：数据在内存中的储存位置编号，是一个常量
//指针：指针的本质就是地址
//指针变量：存储的数据是地址
//类型*标识符；（如int*p)
//取地址符:&
//指针变量取了谁的地址，就指向谁
//*的作用：1.指针变量的标志.2.解引用，取内容
//指针变量：一律占四字节内存

#include <iostream>
int main()
{
	int a=10, b=20, c=30;
	int* p1, * p2, * p3;
	p1 = &a;
	p2 = &b;
	p3 = &c;
	printf("%d\n", *p1);
	//定义指针的时候，要马上给指针变量赋值，防止出现野指针（没有任何指向）
	//NULL：空
	int* a1=NULL;
	float* a2=NULL;
	double* a3=NULL;
	printf("%d\n%d\n%d\n", sizeof(a1), sizeof(a2), sizeof(a3));
	return 0;
}


