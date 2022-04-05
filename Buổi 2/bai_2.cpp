#include <iostream>
#include <iomanip>

using namespace std;
    void xuat1()
		{
		    
	        cout<<" "<<"_______________________________"
				<<"_____________"
				<<"____________________"
				<<"____________________________________________________"
				<<" "<<endl;
	        cout<<"|"<<setw(30)<<"ho va ten"
				<<" |"<<setw(6)<<"tuoi"
				<<" |"<<setw(18)<<"bang cap cao nhat"
				<<" |"<<setw(22)<<"chuyen nganh"
				<<" |"<<setw(10)<<"bac luong"
				<<" |"<<setw(11)<<"luong co ban"
				<<" |"<<endl;        
	
	        cout<<"|"<<"_______________________________"
				<<"|"<<"_______"
				<<"|"<<"___________________"
				<<"|"<<"_______________________"
				<<"|"<<"___________"
				<<"|"<<"_____________"
				<<"|"<<endl;
		}
	void xuat2()
	{
	    cout<<"|"<<"_______________________________"
				<<"|"<<"_______"
				<<"|"<<"___________________"
				<<"|"<<"_______________________"
				<<"|"<<"___________"
				<<"|"<<"_____________"
				<<"|"<<endl;
	}
		
class KhachHang{
	private:
		char hoten[30];
		int  tuoi;
		char bc[15];
		char cn[20];
		float bl;
	    float ml;
    public:
		void nhap()
		{
			cout<<"\nNhap ho ten: ";
			cin.ignore();
			cin.getline(hoten, 30);
			cout<<"\nNhap tuoi: ";
			cin>>tuoi;
			cout<<"\nNhap bang cap cao nhat duoc dao tao: ";
			cin.ignore ();
			cin.getline(bc, 15);
			cout<<"\nNhap chuyen nganh: ";
			cin.getline(cn,20);
			cout<<"\nNhap bac luong: ";
			cin>>bl;
			fflush(stdin);

		}
		int mlcb() {return bl*610;}
		void xuatTT()
		{
		    ml= mlcb();
			cout<<"|"<<setw(30)<<hoten
				<<" |"<<setw(6)<<tuoi
				<<" |"<<setw(18)<<bc
				<<" |"<<setw(22)<<cn
				<<" |"<<setw(10)<<bl
				<<" |"<<setw(12)<<ml
				<<" |"<<endl;
		}
		string sx()
		{
		    return cn;
		}
		int ns()
		{
		    return ml;
		}
	
};
int main(int argc, char *argv[])
{
    int n;
	cout<<"\nNhap so giao vien: ";
	cin>>n;
	KhachHang a[n],mm;
	fflush(stdin); //cin.ignore()
	cout<<"\nNhap thong tin giao vien: "<<endl;
	for(int i = 0; i < n; i++)
	{
		cout<<"\ngiao vien thu "<<i+1<<endl;
		a[i].nhap();
	}
	cout<<"\nXuat thong tin giao vien: "<<endl;
	xuat1();
	for(int i = 0; i < n; i++)
	{
		a[i].xuatTT();
	}
	xuat2();
	
	
	cout<<"\nXuat thong tin giao vien co luong nho hon 2000: "<<endl;
	xuat1();
	for(int i = 0; i < n; i++)
	{
		if(a[i].ns()<2000) a[i].xuatTT();
	}
	xuat2();
	
	for(int i = 0; i < n; i++)
	{
	    for(int j = i; j < n; j++)
		if(a[i].sx()<a[j].sx()) {mm=a[i];a[i]=a[j];a[j]=mm;}
	}
	
	
	cout<<"\nXuat thong tin giao vien da sap xep: "<<endl;
	xuat1();
	for(int i = 0; i < n; i++)
	{
		a[i].xuatTT();
	}
	xuat2();
	
	
	
	
	return 0;
}