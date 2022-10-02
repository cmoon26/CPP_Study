#include <iostream>
#include<iomanip>

int main(void) {
	/*
	//기초1
	std::cout << "Hello" << std::endl;

	//기초2
	std::cout << "Hello World" << std::endl;

	//기초3
	std::cout << "Hello\nWorld" << std::endl;
	std::cout << "Hello" << std::endl;
	std::cout << "World"<<std::endl;

	//기초4
	std::cout << "\'Hello\'"<<std::endl;

	//기초5
	std::cout << "\"Hello World\"" << std::endl;

	//기초6
	std::cout << "\"!@#$%^&*()\"" << std::endl;

	//기초7
	std::cout << "\"C:\\Download\\hello.cpp\"" << std::endl;

	//기초8-유니코드

	//기초10
	int a;
	std::cin >> a;
	std::cout << a << std::endl;

	//기초11
	char c;
	std::cin >> c;
	std::cout << c << std::endl;

	//기초12
	float f;
	std::cin >> f;
	//std::cout << f << std::endl;
	//이렇게 쓰면 cout은 정밀도가 6이기에 iomanip헤더의 setprecision을 사용한다.
	//fixed와 setprecision을 같이 쓰면 소수점 nwkfl, fixed가 없다면 정수와 소수 합쳐n자리다.
	std::cout <<std::fixed << std::setprecision(6) << f << std::endl;
	
	//기초13
	int a, b;
	std::cin >> a >> b;
	std::cout << a << " " << b << std::endl;

	//기초14
	char c1, c2;
	std::cin >> c1 >> c2;
	std::cout << c2 << " " << c1 << std::endl;

	//기초15
	float f;
	std::cin >> f;
	std::cout << std::fixed << std::setprecision(2) << f << std::endl;
	//반올림해서 자리수에 맞춰 나온다.

	//기초17
	int a;
	std::cin >> a;
	std::cout << a << " " << a << " " << a << std::endl;
	
	//기초18
	int h, m;
	std::cin >> h;
	std::cin.ignore(256,':');
	std::cin >> m;
	std::cout << h << ":" << m << std::endl;
	//cin.ignore(-)-안에 들어가는 내용을 이해하기
	
	//기초19
	int a, b, c;
	std::cin >> a;
	std::cin.ignore(256, '.');
	std::cin >> b;
	std::cin.ignore(256,'.');
	std::cin >> c;
	std::cout.width(4);std::cout.fill('0');
	std::cout << a << ".";
	std::cout.width(2);std::cout.fill('0');
	std::cout << b << ".";
	std::cout.width(2);std::cout.fill('0');
	std::cout << c << std::endl;
	//width()는 입력 받은 숫자의 크기를 얼마큼으로 내보낼지 fill()은 빈 공간을 무엇으로 채울지이다.

	//기초20
	int f, b;
	std::cin >> f;
	std::cin.ignore(256, '-');
	std::cin >> b;
	std::cout << f << b << std::endl;
	
	//기초21
	char word[51];
	std::cin >> word;
	std::cout << word << std::endl;
	*/
	//기초22
	char s[51];
	std::cin.getline(s,51,'\n');
	std::cout << s << std::endl;
	return 0;



}
