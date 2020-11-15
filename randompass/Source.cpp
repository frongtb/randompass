#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
void enterpass();
char ch[] = "abcdefghijklmnopqrstuvwxyz!@#$%&*?ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int main()
{
	char pwd[11]="",encrypt_pwd[31]="";
	char* ptr1 = pwd;
	char* ptr2 = encrypt_pwd;
	int i, rand_num = 0;
	enterpass();
	for (i = 0; i < 10; i++)
	{
		pwd[i] = _getch();
		printf_s("*");
	}
	pwd[i] = '\0';
	srand((unsigned)time(NULL));
	for ( i = 0; i < 30; i++)
	{
		rand_num = rand() % 59 + 1;
		switch (i)
		{
		case 1 : 
			*(ptr2 + 1) = *(ptr1);
			break;
		case 2:
			*(ptr2 + 2) = *(ptr1);
			break;
		case 3:
			*(ptr2 + 3) = *(ptr1);
			break;
		case 5:
			*(ptr2 + 5) = *(ptr1);
			break;
		case 7:
			*(ptr2 + 7) = *(ptr1);
			break;
		case 11:
			*(ptr2 + 11) = *(ptr1);
			break;
		case 13:
			*(ptr2 + 13) = *(ptr1);
			break;
		case 17:
			*(ptr2 + 17) = *(ptr1);
			break;
		case 19:
			*(ptr2 + 19) = *(ptr1);
			break;
		case 23:
			*(ptr2 + 23) = *(ptr1);
			break;
		default:*(ptr2 + i) = ch[rand_num];
			break;
		}
	}
	encrypt_pwd[i] = '\0';
	printf_s("\nYour real password is %s\n", pwd);
	printf_s("You encrypt password is %s\n", encrypt_pwd);
	_getch();
}

void enterpass()
{
	printf_s("Plesae Enter Password : ");
}