#include<iostream>
using namespace std;

int main() {
    char m[3][20];
    for (int i = 0; i < 3; i++) {
        cout << "\n请输入第" << i + 1 << "个字符串：" << endl;
        cin.getline(m[i], 20);
    }
    cout << endl;
    for (int j = 0; j < 3; j++)
        cout << "输出m[" << j << "]的值:" << m[j] << endl;
	return 0;
}