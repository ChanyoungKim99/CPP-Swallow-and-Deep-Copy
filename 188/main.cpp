#include <iostream>

class MyClass
{
	int mValue;

public:
	MyClass(int value) : mValue{ value }
	{
	}
};

int main()
{
	MyClass c(5);	// ���� �ʱ�ȭ
	MyClass c{ 5 }; // ������ �ʱ�ȭ
	// -> copy�� �� �Ͼ

	MyClass c = MyClass(5);
	MyClass c = 5;
	// -> copy�� �Ͼ
	// Swallow Copy
}