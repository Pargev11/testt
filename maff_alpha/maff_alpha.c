#include <unistd.h>
int main()
{
	char c1='A';
	char c2='a';
	while(c1<='Z')
	{
		write(1,&c2,1);
		c1++;
		c2++;
		write(1,&c1,1);
		c1++;
		c2++;
	}
	write(1,"\n",1);
}
