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
	MyClass c(5);	// 직접 초기화
	MyClass c{ 5 }; // 유니폼 초기화
	// -> copy가 안 일어남

	MyClass c = MyClass(5);
	MyClass c = 5;
	// -> copy가 일어남
	// Swallow Copy
}