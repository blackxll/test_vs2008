//#include <stdafx.h>
#include "class_test.h"
#include <iostream>
#include <stdio.h>
#include "piPrint.h"

//long a=1000;
//long b=0;
//long c=10000;
//long d,e;
//long f[10001];
//long g;
void main(void)
{
	//printf("%.4d",e+d/a);
	//for(;b!=c;f[b++]=a/5);
	//	printf("%.4d",f[b]);

	//for(;d=0,g=c*2,c>5000;c--,printf("%.3d",e+d/a),e=d%a)
	//for(b=c;d+=f[b]*a,f[b]=d%--g,d/=g--,--b;d*=b);
	//system("pause");
	piPrintFunction();
}


/*
CanExtTxPDO_t::CanExtTxPDO_t(unsigned char arg0, unsigned char arg1)
{	
 
}
 
CanExtTxPDO_t::~CanExtTxPDO_t(void)
{
 
}
 
void CanExtTxPDO_t::ClassFunc0(unsigned int arg0, unsigned char arg1)
{	
	using namespace std;
	cout <<"This is Class Function 0!" << arg0 << endl;
}
 
void CanExtTxPDO_t::ClassFunc1(unsigned char arg0, unsigned char arg1)
{	
	using namespace std;
	cout <<"This is Class Function 1!" << endl;
}
 
void CanExtTxPDO_t::ClassFunc2(unsigned char arg0, unsigned char arg1)
{
	using namespace std;
	cout <<"This is Class Function 2!" << endl;
}
 
int main()
{
	using namespace std;
	char ch;
	
	CanExtTxPDO_t::ClassFunc0(0, 0);
	CanExtTxPDO_t::ClassFunc1(0, 0);
	CanExtTxPDO_t::ClassFunc2(0, 0);
 
	cout <<"hello world!" << endl;
 
	system("pause");
	return 0;
}
*/
/*
#include <iostream>
 
using namespace std;

class Line
{
   public:
      void setLength( double len );
      double getLength( void );
      Line();  // 这是构造函数
 
   private:
      double length;
};
 
// 成员函数定义，包括构造函数
Line::Line(void)
{
    cout << "Object is being created" << endl;
}
 
void Line::setLength( double len )
{
    length = len;
}
 
double Line::getLength( void )
{
    return length;
}
// 程序的主函数
int main( )
{
   Line line;
 
   // 设置长度
   line.setLength(6.0); 
   cout << "Length of line : " << line.getLength() <<endl;
	while(1);
   return 0;
}
*/