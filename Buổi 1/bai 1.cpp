#include<iostream>
using namespace std;
float tong(int n)
{
    if(n == 1)
        return 1;
    return (float)1/n + tong(n - 1);
}
int main(){
    int n;
    do{
        cout << "Nhap n: ";
        cin >> n;
        if(n <= 0) cout << "Nhap lai n!" << endl;
    }while(n <= 0);
    cout << "Tong la: " << tong(n) << endl;
    return 0; 
}