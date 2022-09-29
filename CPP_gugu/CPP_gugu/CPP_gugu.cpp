
#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    //어떤 구구단을 생성할지 i의 값을 입력 받기
    cin >> i;
    cout << "의 구구단을 알려드릴게요" << endl;
    //구구단 생성
    for (int j = 1; j < 10;j++) {
        cout << i << "*" << j <<"="<<i*j<< endl;
    }

    return 0;
}

