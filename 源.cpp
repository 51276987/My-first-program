#include<iostream>
using namespace std;

int main() {
    char m[3][20];
    for (int i = 0; i < 3; i++) {
        cout << "\n�������" << i + 1 << "���ַ�����" << endl;
        cin.getline(m[i], 20);
    }
    cout << endl;
    for (int j = 0; j < 3; j++)
        cout << "���m[" << j << "]��ֵ:" << m[j] << endl;
	return 0;
}