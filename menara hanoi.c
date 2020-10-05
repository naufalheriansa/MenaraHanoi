#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int m;
    void hanoi(int n, char a, char b, char c);
       
    printf("Masukan jumlah cakram> ");
    scanf("%d",&m);
    
    printf("Langkah-langkah pemindahan cakram:\n");
    hanoi(m,'1','2','3');
       
    system("pause");
       
    return 0;
}

void hanoi(int n, char x, char y, char z)
{ 
    if (n==1)
    	printf("Pindahkan cakram paling atas dari tiang %c ke tiang   %c\n",x, z);
	else   
	{
        hanoi(n-1,x,z,y);
        hanoi(1,x,y,z);
        hanoi(n-1,y,x,z);
    }
}
