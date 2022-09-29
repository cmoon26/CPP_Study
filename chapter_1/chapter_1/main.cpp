#include <iostream>

using namespace std;

int multi(int num1, int num2) {
	int sum = num1 * num2;
	return sum;
}
//c++ 함수안에서 함수가 선언이 안된다.=> 대신 클래스안에서 클래스선언으로 대체

void print_hi() {
	cout << "hello world" << endl;
	//리턴 값이 없다. 만약 원한다면 return; 을 만든다.
	/*return;
	cout<<"hi"<<endl;
	위의 문장은 나올 수 없다.
	*/

}

int main(){
/*

	 //누르면 생기고 다시 누르면 사라진다. 
	cout << multi(1,2) << endl;
	cout << multi(2,3) << endl;
	cout << multi(8,13) << endl;


	//빈복되는 패턴이 두개이상 나올 때는 바로 함수로 쪼갠다.
	//함수의 내용을 바꾸면서 함수의 이름을 바꿔야할 때에는 드래그 마우스 이름바꾸기 적용


*/
/*	print_hi();
*/	
	int num=0, num2=0;

	cin >> num, num2 ;
	cout<<multi(num, num2) << endl;

	return 0;
}