#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
		FILE *fp;
		const char* p[4]={"p0.txt","p1.txt","p2.txt","p3.txt"};
		for(int i=0;;i=(i+1)%4)
		{
			fp = fopen(p[i],"r+");
			while(!feof(fp))
			{
				printf("%c",fgetc(fp));
			}
			fclose(fp);
			Sleep(2000);
			system("cls");       
		}
	return 0;
}
