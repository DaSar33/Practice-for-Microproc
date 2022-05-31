#include <8051.h>
void main()
{
unsigned char i,j;
unsigned char *str = "00";
unsigned char row[5] = {0xFE, 0xFD, 0xFB, 0xF7, 0xEF};
unsigned char col[5] = {0x1E, 0x1D, 0x1B, 0x17, 0xF};
unsigned char *num[12] = {"01","02","03","04","05","06","07","08","09","10","11","12"};
while(1){
for(i=0;i<4;i++)
{
	P3=col[i];
	for(j=0;j<4;j++)
	{
	if(P1 == row[j])
	{
		P0 = 0x38;
		P2 = 0x1;
		P2 = 0x0;
		P0 = 0x80;
		P2 = 0x1;
		P2 = 0x0;
		str = num[i+j*3];
		for(i=0;i<2;i++)
		{  
			P0 = str[i];
			P2 = 0x3;
			P2 = 0x2;
		}
	}
	}
}
}

}