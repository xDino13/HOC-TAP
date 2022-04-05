#include <iostream>
#include <iomanip>

using namespace std;
    void xuat1()
		{
		    
	        cout<<" "<<"_______________________________"
				<<"_____________"
				<<"_____________"
				<<"____________________________________________________"
				<<" "<<endl;
	        cout<<"|"<<setw(30)<<"ho va ten"
				<<" |"<<setw(11)<<"ngay sinh"
				<<" |"<<setw(11)<<"so cmt"
				<<" |"<<setw(50)<<"ho khau"
				<<" |"<<endl;        
	
	        cout<<"|"<<"_______________________________"
				<<"|"<<"____________"
				<<"|"<<"____________"
				<<"|"<<"___________________________________________________"
				<<"|"<<endl;
		}
	void xuat2()
	{
	    cout<<"|"<<"_______________________________"
				<<"|"<<"____________"
				<<"|"<<"____________"
				<<"|"<<"___________________________________________________"
				<<"|"<<endl;
	}
		
class KhachHang{
	private:
		char hoten[30];
		struct 
		{
		    int d;
		    int m;
		    int y;
		}ngaysinh;
		char scmt[10];
		char hokhau[50];
    public:
		void nhap()
		{
			cout<<"\nNhap ho ten: ";
			fflush(stdin);
			cin.ignore();
			cin.getline(hoten, 30);
			cout<<"\nNhap ngay sinh : ";
			cin>>ngaysinh.d;
			cout<<"     thang sinh: ";
			cin>>ngaysinh.m;
			cout<<"     nam sinh  : ";
			cin>>ngaysinh.y;
			cout<<"\nNhap so cmt: ";
			fflush(stdin);
			cin.ignore ();
			cin.getline(scmt, 10);
			cout<<"\nNhap ho khau: ";
			cin.getline(hokhau, 50);
			fflush(stdin);

		}
		void xuatTT()
		{
			cout<<"|"<<setw(30)<<hoten
				<<" |"<<setw(3)<<ngaysinh.d
				<<"/"<<setw(2)<<ngaysinh.m
				<<"/"<<setw(4)<<ngaysinh.y
				<<" |"<<setw(11)<<scmt
				<<" |"<<setw(50)<<hokhau
				<<" |"<<endl;
		}
		string sx()
		{
		    return hoten;
		}
		int ns()
		{
		    return ngaysinh.m;
		}
	
};
int main(int argc, char *argv[])
{
    int n;
	cout<<"\nNhap so khach hang: ";
	cin>>n;
	KhachHang a[n],mm;
	fflush(stdin); //cin.ignore()
	cout<<"\nNhap thong tin khach hang: "<<endl;
	for(int i = 0; i < n; i++)
	{
		cout<<"\nKhach hang thu "<<i+1<<endl;
		a[i].nhap();
	}
	cout<<"\nXuat thong tin khach hang: "<<endl;
	xuat1();
	for(int i = 0; i < n; i++)
	{
		a[i].xuatTT();
	}
	xuat2();
	cout<<"\nXuat thong tin khach hang da sap xep: "<<endl;
	
	
	
	
	for(int i = 0; i < n; i++)
	{
		for(int j = i; j < n; j++)
	    {
		    if(a[j].sx()<a[i].sx()) {mm=a[i];a[i]=a[j];a[j]=mm;}
	    }
	}
	
	xuat1();
	for(int i = 0; i < n; i++)
	{
		a[i].xuatTT();
	}
	xuat2();
	
	cout<<"\nXuat thong tin khach hang sinh nhat thang 12: "<<endl;
	xuat1();
	for(int i = 0; i < n; i++)
	{
		if(a[i].ns()==12)a[i].xuatTT();
	}
	xuat2();
	return 0;
}