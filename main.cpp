#include <iostream>
#include <string>
using namespace std;

int main() {

	// 0 ~ 255
	unsigned char c = 0;
	c = 0;
	c = -1; // 255 => 1�� ���ؼ� 0�� �Ǵ� ����
	//c = 22;

	// -128 ~ 127
	//char c1 = -1;
	//c1 = -1;
	int i = 10;
	printf("%d", c);

	cout << to_string(c);
	// ���� ���� ã��(2�� ������)
	// �����Ǵ� ���� ��ȣ�� ���� ��, 1�� ���Ѵ�.

	int data = 20;
	//aaa
	data += 10;
	printf("\n %d", data);
	return 0;
}