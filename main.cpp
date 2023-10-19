#include <iostream>
#include <string>
using namespace std;

int main() {

	// 0 ~ 255
	unsigned char c = 0;
	c = 0;
	c = -1; // 255 => 1과 더해서 0이 되는 숫자
	//c = 22;

	// -128 ~ 127
	//char c1 = -1;
	//c1 = -1;
	int i = 10;
	printf("%d", c);

	cout << to_string(c);
	// 음의 정수 찾기(2의 보수법)
	// 대응되는 양의 부호를 반전 후, 1을 더한다.

	int data = 20;
	//aaa
	data += 10;
	printf("\n %d", data);
	return 0;
}