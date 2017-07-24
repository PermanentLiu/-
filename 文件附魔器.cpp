#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

#define V "2.4"

///////////////////////////////////////////////////////////////////ȫ�ֱ��� 
int n = 0;

//////////////////////////////////////////////////////////////////// 
struct user
{
	char number[20];
	char passcode[20];
}
user[50];
////////////////////////////////////////////////////////////////////

void product_description();
void operating_instruction();
void warning();
void judgement();
void fileopen();
void filesave();
void core_system();
void login();
void regist();
void request();
void over();

///////////////////////////////////////////////////////////////// 
int main(void)
{ 
	system("color F0");
	
	fileopen();
	product_description();
	
	return 0;
}

/////////////////////////////////////////////�ļ��½�����ȡ���� 
void fileopen()
{
	FILE *fp;
	int i;
	
	if ((fp = fopen("data", "at+")) == NULL)
	{
		fp = fopen("data", "at+");
	}
	
	for (i = 0; i < 50; i++)
	{
		fread(&user[i], sizeof(struct user), 1, fp);
	}
	fread(&n, 4, 1, fp);
	
	fclose(fp);
	
	system("attrib +h data");
}



/////////////////////////////////////////////�ļ�������� 
void filesave()
{
	FILE *fp;
	int i;
	
	fp = fopen("data", "at+");
	for (i = 0; i <= 50; i++)
	{
		fwrite(&user[i], sizeof(struct user), 1, fp);
	}
	fwrite(&n, 4, 1, fp);
	
	fclose(fp);
	
	system("attrib +h data");
}




////////////////////////////////////////////��Ʒ���ܣ����棩 
void product_description()
{
	system("cls");
	
	printf("   _______________________________________\n");
	printf("   |                                      |\n");
	printf("   |          ��ӭʹ���ļ���ħ����        |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |          ������Ա��  ����޿          |\n");
	printf("   |                                      |\n");
	printf("   |          ����汾��  v%s            |\n", V);
	printf("   |______________________________________|\n");
	system("pause");
	
	operating_instruction();
}




///////////////////////////////////////////////����˵�� �����棩 
void operating_instruction()
{
	system("cls");
	
	printf("   ________________________________________\n");
	printf("   |              �ļ���ħ��              |\n");
	printf("   |                                      |\n");
	printf("   |               ����˵��               |\n");
	printf("   |                                      |\n");
	printf("   |�ó������� �������ļ� ���кϲ�        |\n");
	printf("   |���������ļ����� ������һ�����ļ�֮�� |\n");
	printf("   |                ����                  |\n");
	printf("   |                                      |\n");
	printf("   |��һ��   docx   ��һ��   jpg �ļ��ϲ� |\n");
	printf("   |          ��������һ���ļ�            |\n");
	printf("   |         ������Ȼ��һ��ͼƬ           |\n");
	printf("   |�������ͼƬ����չ�� jpg ��Ϊ docx    |\n");
	printf("   |���������ͼƬ�� ���ص��ĵ���         |\n");
	printf("   |______________________________________|\n");	
	
	system("pause");
	
	warning();
}


void warning()
{
	system("cls");
	
	printf("   _______________________________________\n");
	printf("   |              �ļ���ħ��              |\n");
	printf("   |                                      |\n");
	printf("   |                WARNING               |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |      ******���Ƚ��������ļ�******    |\n");
	printf("   |                                      |\n");
	printf("   |      ******�ŵ���ǰ�ļ�����******    |\n");
	printf("   |                                      |\n");
	printf("   |      ******�뽫�ļ����ñ���******    |\n");
	printf("   |                                      |\n");
	printf("   |______________________________________|\n"); 
	
	system("pause");
	
	judgement();
}




////////////////////////////////////////////�ж�ģ�飨�ж��Ƿ�Ϊ��ע���û��� 
void judgement()
{
	system("cls");
	
	printf("   _______________________________________\n");
	printf("   |              �ļ���ħ��              |\n");
	printf("   |                                      |\n");
	printf("   |                ��ѡ��                |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |         ����ע��������밴 0         |\n");
	printf("   |                                      |\n");
	printf("   |         �������û������밴 1         |\n"); 
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |______________________________________|\n");
	
	
	int flag = 1;
	while(flag)
	{
		switch(getch())
		{
			case '0':
				flag = 0;
				login();
				break;
				
			case '1': 
				flag = 0;
				regist();
				break; 
			
			default : 
				printf("\n   _______________________________________\n");
                printf("   |                                      |\n");			
			    printf("   |        �밡��ֻ�ܰ� 0 ���� 1 !       |\n");
			    printf("   |______________________________________|\n");
		}
	}
}



/////////////////////////////////////////////��ȡ��֤�� �����棩 
void request()
{
	system("cls");
	
	printf("   _______________________________________\n");
	printf("   |              �ļ���ħ��              |\n");
	printf("   |                                      |\n");
	printf("   |             ��������֤��             |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |         (��֤���ȡ��������)         |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |      ���QQ�ţ� 1014  2406  58       |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |        �����䷢һ�� ��� �ĺ��      |\n");
	printf("   |            ���ɻ����֤��            |\n");
	printf("   |______________________________________|\n");
}



//////////////////////////////////////////////////ע��ģ�� 
void regist()
{	
	char identifying_code[4] = {"\0"};//�������֤�� 
	char ch[] = "1017";//��ȷ����֤�� 
	
	char a = '\0';
	char b = '\0';
	char mima[20] = {'\0'};
	char c[20] = {'\0'};
	char d[20] = {'\0'};
	int i = 0;
	int j = 0;

	system("cls");
	
	request();
	
	printf("\n\n");
	
	printf("                  ��֤��: ");
	scanf("%s", &identifying_code);
	fflush(stdin);
	
	printf("\n                  ������֤..");
	Sleep(500);
	printf(".");
	Sleep(400);
	printf(".");
	Sleep(300);
	printf(".");
	Sleep(300);
	printf(".");
	Sleep(200);
	printf(".");
	Sleep(200);
	printf(".");
	Sleep(100);
	printf(".");
	Sleep(100);
	printf(".\n");
	
	
	
	if ( strcmp ( identifying_code, ch ) != 0 )
	{
		printf("     	          ��֤�����\n\n");
		printf("   _______________________________________\n\n");
		
		system("pause");
		regist();
	}
	
	else
	{
		printf("\n                  ��֤�ɹ�\n\n");
		printf("   _______________________________________\n\n");
		
		system("pause");
		system("cls");
		
			printf("   ________________________________________\n");
			printf("   |              �ļ���ħ��              |\n");
			printf("   |                                      |\n");
			printf("   |                                      |\n");
			printf("   |                                      |\n");
			printf("   |                                      |\n");
			printf("   |                                      |\n");
			printf("   |                                      |\n");
			printf("   |           ��ӭ����ע����棡         |\n");
			printf("   |                                      |\n");
			printf("   |                                      |\n");
			printf("   |                                      |\n");
			printf("   |                                      |\n");
			printf("   |                     --by����޿  V%s |\n", V);
			printf("   |______________________________________|\n\n");
		
		printf("              ������ѧ��: ");
		scanf("%s", &user[n].number);
		fflush(stdin);
		
		printf("\n");
		printf(" ���������루��ĸ/���֣�: ");
		
		while((a = getch()) != '\n')
		{
			if(a == '\b')
			{
				c[i - 1] = NULL;
				
				putchar('\b');
				putchar(' ');
				putchar('\b');
				
				i--;
			}
			
			else if(isalpha(a) || isdigit(a))
			{
				printf("*");
				
				c[i++] = a;
			}
			
			else
			{
				break;
			}
		}
		fflush(stdin);
		
		printf("\n\n");
		printf("    	  ���ٴ���������: ");
		
		while((b = getch()) != '\n')
		{
			if(b == '\b')
			{
				d[j - 1] = NULL;
				
				putchar('\b');
				putchar(' ');
				putchar('\b');
				
				j--;
			}	
	
			else if(isalpha(b) || isdigit(b))
			{
				printf("*");
				
				d[j++] = b;
			}
			
			else
			{
				break;
			}
		}
		fflush(stdin);
		
		printf("\n\n");
		printf("   _______________________________________\n\n");
		
		if ( strcmp (c, d) == 0 )
		{
			strcpy ( mima, c );  
			strcpy ( user[n].passcode, mima );
			
			printf("\n   	         ע��ɹ���\n");
			printf("              ");
			
			int count_down = 0;
			for(count_down = 3; count_down >= 1 ; count_down--)
			{
				printf("%d�������½����", count_down);
				
				Sleep(1000);
				
				int temp = 1;
				for( ; temp <= 17; temp++)
				{
					putchar('\b');
				}
//				putchar ('\b');
//				putchar ('\b');
//				putchar ('\b');
//				putchar ('\b');
//				putchar ('\b');
//				putchar ('\b');
//				putchar ('\b');
//				putchar ('\b');
//				putchar ('\b');
//				putchar ('\b');
//				putchar ('\b');
//				putchar ('\b');
//				putchar ('\b');
//				putchar ('\b');
//				putchar ('\b');
//				putchar ('\b');
//				putchar ('\b');
			}
			
		}
		else
		{
			printf("\n    	     ��������������벻ͬ\n    	          ������ע�ᣡ\n\n\n!");
			
			system("pause");
			regist();
		}
		system("pause");		
	}
	filesave();
	login();
}



///////////////////////////////////////////////////////////////////////��¼ģ�� 
void login()
{
	system("cls");
	
	printf("   ________________________________________\n");
	printf("   |              �ļ���ħ��              |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |           ��ӭ������½���棡         |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |                     --by����޿  V%s |\n", V);
	printf("   |______________________________________|\n\n");
	
	int i = 0;
	int j = 0;
	int log[100] = {0};
	int l = 0;
	int t = 0;
	
	char number[20] = {'\0'};
	char passcode[20] = {'\0'};
	char a = '\0';
	
	printf("\n              ������ѧ��: ");
	scanf("%s", &number);
	fflush(stdin);
	
	printf("\n");
	printf("\n              ����������: ");
	
	
	while((a = getch()) != '\n')
	{
		if(a == '\b')
		{
			passcode[t - 1] = NULL;
			
			putchar('\b');
			putchar(' ');
			putchar('\b');
			
			t--;
		}
		
		else if(isalpha(a) || isdigit(a))
		{
			printf("*");
			
			passcode[t++] = a;
		}
		
		else
		{
			break;
		}
	}
	fflush(stdin);

	printf("\n\n");
	
	l = t;
	for(i = 0; i < l; i++)
	{
		if( ! strcmp(user[i].number, number))
		{
			if(strcmp(user[i].passcode, passcode) != 0)
			{
				printf("\n              ��¼ʧ�ܣ� �������\n\n");
				printf("   _______________________________________\n\n");
				
				system("pause");
				
				login();
			}
			else
			{
				printf("\n              ��½�ɹ���\n");
				printf("              ");
			
				int count_down = 0;
				for ( count_down = 3; count_down >= 1 ; count_down-- )
				{
					printf("%d�����븽ħ����", count_down);
					
					Sleep(1000);
					
					int temp = 1;
					for( ; temp <= 17; temp++)
					{
						putchar('\b');
					}
				}
				core_system();
				break;
			}

		}
		else
		{
			printf("\n              ��¼ʧ�ܣ� �û�������\n");
			printf("   _______________________________________\n\n");
			
			system("pause");
				
			login();
		}
	}
	
	
}




/////////////////////////////////////////////////////////////////////////�ļ���ħģ�飨����ģ�飩 
void core_system()
{
	system("cls");
	
	printf("   ________________________________________\n");
	printf("   |              �ļ���ħ��              |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |           ��ӭ������ħ���棡         |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |                     --by����޿  V%s |\n", V);
	printf("   |______________________________________|\n\n");
	
	FILE *fp_1;
	FILE *fp_2;
	FILE *fp_3;
	
	char ch_1 = '\0';
	char ch_2 = '\0';
	char ch_3 = '\0';
	char filename_1[20] = {"\0"};
	char filename_2[20] = {"\0"};
	char filename_3[20] = {"\0"};
	
	printf("\n�����뱻���ص��ļ������֣�����չ����: ");
	scanf("%s", &filename_1);
	fflush(stdin);
	
	printf("\n����������ļ������֣�����չ����: ");
	scanf("%s", &filename_2);
	fflush(stdin);
	
	strcpy(filename_2, filename_3);
	
//	printf("\n������ɵ����ļ�����������չ������");
//	scanf("%s", &filename_3);
//	fflush(stdin);

	//��ֻд�ķ�ʽ���ļ� 3 
	if( ! (fp_3 = fopen(filename_3, "ab")))
	{
		printf("\n");
		printf("    �޷��򿪴��ļ���\n");
		printf("    �����˳��˳���\n");
		
		system("pause");
		
		exit (0);
	}
	
	//��ֻ���ķ�ʽ���ļ� 1 
	if( ! (fp_1 = fopen(filename_1, "rb")))
	{
		printf("\n");
		printf("    �޷��򿪴��ļ���\n");
		printf("    �����˳��˳���\n");
		
		system("pause");
		
		exit (0);
	}
	
	//��ֻ���ķ�ʽ���ļ� 2
	if( ! (fp_2 = fopen(filename_2, "rb")))
	{
		printf("\n");
		printf("    �޷���ȡ���ļ���\n");
		printf("    �����˳��˳���\n");
		
		system("pause");
		
		exit (0);
	} 
	
	
	printf("\n              ���ڸ�ħ...");
	int wait = 0;
	for(wait = 1; wait <= 20; wait++)
	{
		Sleep(100);
		printf(".");
	}
	
	
	
	while( ! (feof(fp_1)))
	{
		//��ȡ�ļ� 1 
		ch_1 = fgetc (fp_1);
		
		//д���ļ� 3	
		ch_3 = ch_1;
		fputc(ch_3, fp_3);	
	}
	
	printf("\n              �����ĵȴ�\n");
	
	while( ! (feof(fp_2)))
	{
		//��ȡ�ļ� 2
		ch_2 = fgetc(fp_2);
		
		//д���ļ� 3 
		ch_3 = ch_2;
		fputc(ch_3, fp_3);
	}
	
	fclose(fp_2);
	fclose(fp_1);
	fclose(fp_3);
	
	remove(filename_1);
	remove(filename_2);
	
	printf("\n");
	printf("\n              ��ħ�ɹ���\n");
	printf("   _______________________________________\n\n");
	system("pause");
	
	over();
}



////////////////////////////////////////////////////////���������棩 
void over()
{
	system("cls");
	
	printf("   ________________________________________\n");
	printf("   |              �ļ���ħ��              |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |     *****��л����ʹ�ã��ټ���*****   |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |                                      |\n");
	printf("   |                     --by����޿  V%s |\n", V);
	printf("   |______________________________________|\n\n\n");
	
	system("pause");
	
	exit (0);
}
