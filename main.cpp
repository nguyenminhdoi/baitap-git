#include <iostream>
using namespace std;

void nhap(int &n) {
    cout << "Nhap n: ";
    cin >> n;
}

void xuat(int n) {
    cout << "Gia tri n: " << n;
}
bool ktchan(int n)
{
    return n%2==0;
}
int main() {
    int n;
    nhap(n);
    xuat(n);
    return 0;
}