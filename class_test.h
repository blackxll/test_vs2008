#ifndef _CLASS_TEST_H_
#define _CLASS_TEST_H_
 
class CanExtTxPDO_t
{
private:
	unsigned char i;
public:
    
	unsigned char buffer[10];
 
	CanExtTxPDO_t(unsigned char arg0, unsigned char arg1);
	~CanExtTxPDO_t(void);
 
	static void ClassFunc0(unsigned int arg0, unsigned char arg1);
	static void ClassFunc1(unsigned char arg0, unsigned char arg1);
	static void ClassFunc2(unsigned char arg0, unsigned char arg1);
};
 
#endif