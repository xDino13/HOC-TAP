#include <iostream>
#include <iomanip>

using namespace std;
class DaThuc{
	private:
		int a;
		int b;
		int c;
		int d;
    public:
		void nhap()
		{
			cout<<"ax3+bx2+cx+d\n";
			cout<<"a=";
			cin>>a;
			cout<<"b=";
			cin>>b;
			cout<<"c=";
			cin>>c;
			cout<<"d=";
			cin>>d;
			fflush(stdin);

		}
		void in()
		{
		    cout<<endl;
		    cout<<a<<"x3+"<<b<<"x2+"<<c<<"x+"<<d;
		}
	    int aa()
	    {
	        return a;
	    }
	    int bb()
	    {
	        return b;
	    }int cc()
	    {
	        return c;
	    }int dd()
	    {
	        return d;
	    }
	    void ss(int a1,int a2,int a3,int a4,int a5,int a6,int a7,int a8)
	    {
	        a=a1+a2;
	        b=a3+a4;
	        c=a5+a6;
	        d=a7+a8;
	        in();
	    }
};
int main(int argc, char *argv[])
{
    DaThuc a1,a2,a3;
	cout<<"\nnhap da thuc thu nhat:\n";
	a1.nhap();
	cout<<"\nnhap da thuc thu hai:\n";
	a2.nhap();
	a3.ss(a1.aa(),a2.aa(),a1.bb(),a2.bb(),a1.cc(),a2.cc(),a1.dd(),a2.dd());
	
	
		
	return 0;
}