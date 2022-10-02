#include <iostream>
/* 문제1
int main(void) {
	int v1, v2, v3, v4, v5;
	std::cout << "1번째 입력할 수: ";
	std::cin >> v1;

	std::cout << "2번째 입력할 수: ";
	std::cin >> v2;

	std::cout << "3번째 입력할 수: ";
	std::cin >> v3;

	std::cout << "4번째 입력할 수: ";
	std::cin >> v4;

	std::cout << "5번째 입력할 수: ";
	std::cin >> v5;

	int result = v1 + v2 + v3 + v4 + v5;
	std::cout << "합계: " << result << std::endl;

	return 0;
}
*/
/*문제2

int main(void) {

	char name[100];
	char number[100];

	std::cout << "이름을 입력해주세요: ";
	std::cin >> name;
	std::cout << "전화번호를 입력해주세요(xxx-xxxx-xxxx): ";
	std::cin >> number;

	std::cout << "사용자의 이름은 " << name << "이고 전화번호는 " << number << " 입니다." << std::endl;


	return 0;
}
*/
/*문제3
int main(void) {

	int v1;
	std::cout << "몇단의 구구단을 출력하시겠습니까?: ";
	std::cin >> v1;

	for (int i = 1;i < 10;i++) {
		std::cout << v1 << "*" << i << "=" << v1 * i << std::endl;
	}

	return 0;
}
*/

int main(void) {
	int money;
	int earn = 50;
	while (1) {
		std::cout << "판매 금액을 만원단위로 입력(-1 to end): ";
		std::cin >> money;
		if (money == -1) {
			std::cout << "프로그램을 종료합니다." << std::endl;
			break;
		}
		else {
			std::cout << "이번 달 급여: " << earn + money * 0.12 << "만원\n";
		}
	
	}

	return 0;
}

