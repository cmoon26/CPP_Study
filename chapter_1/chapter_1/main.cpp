#include <iostream>

using namespace std;

int multi(int num1, int num2) {
	int sum = num1 * num2;
	return sum;
}
//c++ �Լ��ȿ��� �Լ��� ������ �ȵȴ�.=> ��� Ŭ�����ȿ��� Ŭ������������ ��ü

void print_hi() {
	cout << "hello world" << endl;
	//���� ���� ����. ���� ���Ѵٸ� return; �� �����.
	/*return;
	cout<<"hi"<<endl;
	���� ������ ���� �� ����.
	*/

}

int main(){
/*

	 //������ ����� �ٽ� ������ �������. 
	cout << multi(1,2) << endl;
	cout << multi(2,3) << endl;
	cout << multi(8,13) << endl;


	//�󺹵Ǵ� ������ �ΰ��̻� ���� ���� �ٷ� �Լ��� �ɰ���.
	//�Լ��� ������ �ٲٸ鼭 �Լ��� �̸��� �ٲ���� ������ �巡�� ���콺 �̸��ٲٱ� ����


*/
/*	print_hi();
*/	
	int num=0, num2=0;

	cin >> num, num2 ;
	cout<<multi(num, num2) << endl;

	return 0;
}