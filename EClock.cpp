// EClock.cpp : 定义控制台应用程序的入口点。
//
#include <stdlib.h>
#include "stdafx.h"
#include "stdio.h"
#include <time.h>
#include <windows.h>
#pragma warning(disable:4996)

DWORD WINAPI showTime(LPVOID lpParameter);
void One1()
{
	printf("   *    ");
}
void One2()
{
	printf("   *    ");
}
void One3()
{
	printf("   *    ");
}void One4()
{
	printf("   *    ");
}
void One5()
{
	printf("   *    ");
}
void Two1()
{
	printf("  ***   ");
}
void Two2()
{
	printf("    *   ");
}
void Two3()
{
	printf("  ***   ");
}void Two4()
{
	printf("  *     ");
}
void Two5()
{
	printf("  ***   ");
}
void Three1()
{
	printf("  ***   ");
}
void Three2()
{
	printf("    *   ");
}
void Three3()
{
	printf("  ***   ");
}
void Three4()
{
	printf("    *   ");
}
void Three5()
{
	printf("  ***   ");
}
void Four1()
{
	printf("  * *   ");
}
void Four2()
{
	printf("  * *   ");
}
void Four3()
{
	printf("  ***   ");
}
void Four4()
{
	printf("    *   ");
}
void Four5()
{
	printf("    *   ");
}
void Five1()
{
	printf("  ***   ");
}
void Five2()
{
	printf("  *     ");
}
void Five3()
{
	printf("  ***   ");
}
void Five4()
{
	printf("    *   ");
}
void Five5()
{
	printf("  ***   ");
}
void Six1()
{
	printf("  ***   ");
}
void Six2()
{
	printf("  *     ");
}
void Six3()
{
	printf("  ***   ");
}
void Six4()
{
	printf("  * *   ");
}
void Six5()
{
	printf("  ***   ");
}
void Seven1()
{
	printf("  ***   ");
}
void Seven2()
{
	printf("    *   ");
}
void Seven3()
{
	printf("    *   ");
}
void Seven4()
{
	printf("    *   ");
}
void Seven5()
{
	printf("    *   ");
}
void Eight1()
{
	printf("  ***   ");
}
void Eight2()
{
	printf("  * *   ");
}
void Eight3()
{
	printf("  ***   ");
}
void Eight4()
{
	printf("  * *   ");
}
void Eight5()
{
	printf("  ***   ");
}
void Nine1()
{
	printf("  ***   ");
}
void Nine2()
{
	printf("  * *   ");
}
void Nine3()
{
	printf("  ***   ");
}
void Nine4()
{
	printf("    *   ");
}
void Nine5()
{
	printf("  ***   ");
}
void Zero1()
{
	printf("  ***   ");
}
void Zero2()
{
	printf("  * *   ");
}
void Zero3()
{
	printf("  * *   ");
}
void Zero4()
{
	printf("  * *   ");
}
void Zero5()
{
	printf("  ***   ");
}
int main()
{
	while (1)
	{
		CreateThread(NULL, 0, showTime, NULL, 0, NULL);
		Sleep(1000);
		system("cls");
	}

	return 0;
}
DWORD WINAPI showTime(LPVOID lpParameter)
{

		time_t timep;
		struct tm *p;
		time(&timep);
		p = gmtime(&timep);
		int second = p->tm_sec;/*获取当前秒*/
		int minute = p->tm_min; /*获取当前分*/
		int hour = p->tm_hour + 8;/*获取当前时,这里获取西方的时间,刚好相差八个小时*/
		int n1, n2, n3, n4, n5, n6;
		if (hour >= 24)hour -= 24;
		n1 = hour > 10 ? hour/10 : 0;
		n2 = hour > 10 ? hour - n1 * 10 : hour;
		n3 = minute >= 10 ? minute / 10 : 0;
		n4 = minute >= 10 ? minute - n3 * 10 : minute;
		n5 = second >= 10 ? second / 10 : 0;
		n6 = second >= 10 ? second - n5 * 10 : second;
		printf("%d\n%d\n%d\n%d\n%d\n%d\n", n1, n2, n3, n4, n5, n6);
		switch (n1)
		{
		case 1: {One1(); break; }
		case 2: {Two1(); break; }
		case 3: {Three1(); break; }
		case 4: {Four1(); break; }
		case 5: {Five1(); break; }
		case 6: {Six1(); break; }
		case 7: {Seven1(); break; }
		case 8: {Eight1(); break; }
		case 9: {Nine1(); break; }
		case 0: {Zero1(); break; }
		}
		switch (n2)
		{
		case 1: {One1(); break; }
		case 2: {Two1(); break; }
		case 3: {Three1(); break; }
		case 4: {Four1(); break; }
		case 5: {Five1(); break; }
		case 6: {Six1(); break; }
		case 7: {Seven1(); break; }
		case 8: {Eight1(); break; }
		case 9: {Nine1(); break; }
		case 0: {Zero1(); break; }
		}
		switch (n3)
		{
		case 1: {One1(); break; }
		case 2: {Two1(); break; }
		case 3: {Three1(); break; }
		case 4: {Four1(); break; }
		case 5: {Five1(); break; }
		case 6: {Six1(); break; }
		case 7: {Seven1(); break; }
		case 8: {Eight1(); break; }
		case 9: {Nine1(); break; }
		case 0: {Zero1(); break; }
		}
		switch (n4)
		{
		case 1: {One1(); break; }
		case 2: {Two1(); break; }
		case 3: {Three1(); break; }
		case 4: {Four1(); break; }
		case 5: {Five1(); break; }
		case 6: {Six1(); break; }
		case 7: {Seven1(); break; }
		case 8: {Eight1(); break; }
		case 9: {Nine1(); break; }
		case 0: {Zero1(); break; }
		}
		switch (n5)
		{
		case 1: {One1(); break; }
		case 2: {Two1(); break; }
		case 3: {Three1(); break; }
		case 4: {Four1(); break; }
		case 5: {Five1(); break; }
		case 6: {Six1(); break; }
		case 7: {Seven1(); break; }
		case 8: {Eight1(); break; }
		case 9: {Nine1(); break; }
		case 0: {Zero1(); break; }
		}
		switch (n6)
		{
		case 1: {One1(); break; }
		case 2: {Two1(); break; }
		case 3: {Three1(); break; }
		case 4: {Four1(); break; }
		case 5: {Five1(); break; }
		case 6: {Six1(); break; }
		case 7: {Seven1(); break; }
		case 8: {Eight1(); break; }
		case 9: {Nine1(); break; }
		case 0: {Zero1(); break; }
		}
		printf("\n");
		//第二行
		switch (n1)
		{
		case 1: {One2(); break; }
		case 2: {Two2(); break; }
		case 3: {Three2(); break; }
		case 4: {Four2(); break; }
		case 5: {Five2(); break; }
		case 6: {Six2(); break; }
		case 7: {Seven2(); break; }
		case 8: {Eight2(); break; }
		case 9: {Nine2(); break; }
		case 0: {Zero2(); break; }
		}
		switch (n2)
		{
		case 1: {One2(); break; }
		case 2: {Two2(); break; }
		case 3: {Three2(); break; }
		case 4: {Four2(); break; }
		case 5: {Five2(); break; }
		case 6: {Six2(); break; }
		case 7: {Seven2(); break; }
		case 8: {Eight2(); break; }
		case 9: {Nine2(); break; }
		case 0: {Zero2(); break; }
		}
		switch (n3)
		{
		case 1: {One2(); break; }
		case 2: {Two2(); break; }
		case 3: {Three2(); break; }
		case 4: {Four2(); break; }
		case 5: {Five2(); break; }
		case 6: {Six2(); break; }
		case 7: {Seven2(); break; }
		case 8: {Eight2(); break; }
		case 9: {Nine2(); break; }
		case 0: {Zero2(); break; }
		}
		switch (n4)
		{
		case 1: {One2(); break; }
		case 2: {Two2(); break; }
		case 3: {Three2(); break; }
		case 4: {Four2(); break; }
		case 5: {Five2(); break; }
		case 6: {Six2(); break; }
		case 7: {Seven2(); break; }
		case 8: {Eight2(); break; }
		case 9: {Nine2(); break; }
		case 0: {Zero2(); break; }
		}
		switch (n5)
		{
		case 1: {One2(); break; }
		case 2: {Two2(); break; }
		case 3: {Three2(); break; }
		case 4: {Four2(); break; }
		case 5: {Five2(); break; }
		case 6: {Six2(); break; }
		case 7: {Seven2(); break; }
		case 8: {Eight2(); break; }
		case 9: {Nine2(); break; }
		case 0: {Zero2(); break; }
		}
		switch (n6)
		{
		case 1: {One2(); break; }
		case 2: {Two2(); break; }
		case 3: {Three2(); break; }
		case 4: {Four2(); break; }
		case 5: {Five2(); break; }
		case 6: {Six2(); break; }
		case 7: {Seven2(); break; }
		case 8: {Eight2(); break; }
		case 9: {Nine2(); break; }
		case 0: {Zero2(); break; }
		}
		//第三行
		printf("\n");
		switch (n1)
		{
		case 1: {One3(); break; }
		case 2: {Two3(); break; }
		case 3: {Three3(); break; }
		case 4: {Four3(); break; }
		case 5: {Five3(); break; }
		case 6: {Six3(); break; }
		case 7: {Seven3(); break; }
		case 8: {Eight3(); break; }
		case 9: {Nine3(); break; }
		case 0: {Zero3(); break; }
		}
		switch (n2)
		{
		case 1: {One3(); break; }
		case 2: {Two3(); break; }
		case 3: {Three3(); break; }
		case 4: {Four3(); break; }
		case 5: {Five3(); break; }
		case 6: {Six3(); break; }
		case 7: {Seven3(); break; }
		case 8: {Eight3(); break; }
		case 9: {Nine3(); break; }
		case 0: {Zero3(); break; }
		}
		switch (n3)
		{
		case 1: {One3(); break; }
		case 2: {Two3(); break; }
		case 3: {Three3(); break; }
		case 4: {Four3(); break; }
		case 5: {Five3(); break; }
		case 6: {Six3(); break; }
		case 7: {Seven3(); break; }
		case 8: {Eight3(); break; }
		case 9: {Nine3(); break; }
		case 0: {Zero3(); break; }
		}
		switch (n4)
		{
		case 1: {One3(); break; }
		case 2: {Two3(); break; }
		case 3: {Three3(); break; }
		case 4: {Four3(); break; }
		case 5: {Five3(); break; }
		case 6: {Six3(); break; }
		case 7: {Seven3(); break; }
		case 8: {Eight3(); break; }
		case 9: {Nine3(); break; }
		case 0: {Zero3(); break; }
		}
		switch (n5)
		{
		case 1: {One3(); break; }
		case 2: {Two3(); break; }
		case 3: {Three3(); break; }
		case 4: {Four3(); break; }
		case 5: {Five3(); break; }
		case 6: {Six3(); break; }
		case 7: {Seven3(); break; }
		case 8: {Eight3(); break; }
		case 9: {Nine3(); break; }
		case 0: {Zero3(); break; }
		}
		switch (n6)
		{
		case 1: {One3(); break; }
		case 2: {Two3(); break; }
		case 3: {Three3(); break; }
		case 4: {Four3(); break; }
		case 5: {Five3(); break; }
		case 6: {Six3(); break; }
		case 7: {Seven3(); break; }
		case 8: {Eight3(); break; }
		case 9: {Nine3(); break; }
		case 0: {Zero3(); break; }
		}
		printf("\n");
		//第四行
		switch (n1)
		{
		case 1: {One4(); break; }
		case 2: {Two4(); break; }
		case 3: {Three4(); break; }
		case 4: {Four4(); break; }
		case 5: {Five4(); break; }
		case 6: {Six4(); break; }
		case 7: {Seven4(); break; }
		case 8: {Eight4(); break; }
		case 9: {Nine4(); break; }
		case 0: {Zero4(); break; }
		}
		switch (n2)
		{
		case 1: {One4(); break; }
		case 2: {Two4(); break; }
		case 3: {Three4(); break; }
		case 4: {Four4(); break; }
		case 5: {Five4(); break; }
		case 6: {Six4(); break; }
		case 7: {Seven4(); break; }
		case 8: {Eight4(); break; }
		case 9: {Nine4(); break; }
		case 0: {Zero4(); break; }
		}
		switch (n3)
		{
		case 1: {One4(); break; }
		case 2: {Two4(); break; }
		case 3: {Three4(); break; }
		case 4: {Four4(); break; }
		case 5: {Five4(); break; }
		case 6: {Six4(); break; }
		case 7: {Seven4(); break; }
		case 8: {Eight4(); break; }
		case 9: {Nine4(); break; }
		case 0: {Zero4(); break; }
		}
		switch (n4)
		{
		case 1: {One4(); break; }
		case 2: {Two4(); break; }
		case 3: {Three4(); break; }
		case 4: {Four4(); break; }
		case 5: {Five4(); break; }
		case 6: {Six4(); break; }
		case 7: {Seven4(); break; }
		case 8: {Eight4(); break; }
		case 9: {Nine4(); break; }
		case 0: {Zero4(); break; }
		}
		switch (n5)
		{
		case 1: {One4(); break; }
		case 2: {Two4(); break; }
		case 3: {Three4(); break; }
		case 4: {Four4(); break; }
		case 5: {Five4(); break; }
		case 6: {Six4(); break; }
		case 7: {Seven4(); break; }
		case 8: {Eight4(); break; }
		case 9: {Nine4(); break; }
		case 0: {Zero4(); break; }
		}
		switch (n6)
		{
		case 1: {One4(); break; }
		case 2: {Two4(); break; }
		case 3: {Three4(); break; }
		case 4: {Four4(); break; }
		case 5: {Five4(); break; }
		case 6: {Six4(); break; }
		case 7: {Seven4(); break; }
		case 8: {Eight4(); break; }
		case 9: {Nine4(); break; }
		case 0: {Zero4(); break; }
		}
		//第五行
		printf("\n");
		switch (n1)
		{
		case 1: {One5(); break; }
		case 2: {Two5(); break; }
		case 3: {Three5(); break; }
		case 4: {Four5(); break; }
		case 5: {Five5(); break; }
		case 6: {Six5(); break; }
		case 7: {Seven5(); break; }
		case 8: {Eight5(); break; }
		case 9: {Nine5(); break; }
		case 0: {Zero5(); break; }
		}
		switch (n2)
		{
		case 1: {One5(); break; }
		case 2: {Two5(); break; }
		case 3: {Three5(); break; }
		case 4: {Four5(); break; }
		case 5: {Five5(); break; }
		case 6: {Six5(); break; }
		case 7: {Seven5(); break; }
		case 8: {Eight5(); break; }
		case 9: {Nine5(); break; }
		case 0: {Zero5(); break; }
		}
		switch (n3)
		{
		case 1: {One5(); break; }
		case 2: {Two5(); break; }
		case 3: {Three5(); break; }
		case 4: {Four5(); break; }
		case 5: {Five5(); break; }
		case 6: {Six5(); break; }
		case 7: {Seven5(); break; }
		case 8: {Eight5(); break; }
		case 9: {Nine5(); break; }
		case 0: {Zero5(); break; }
		}
		switch (n4)
		{
		case 1: {One5(); break; }
		case 2: {Two5(); break; }
		case 3: {Three5(); break; }
		case 4: {Four5(); break; }
		case 5: {Five5(); break; }
		case 6: {Six5(); break; }
		case 7: {Seven5(); break; }
		case 8: {Eight5(); break; }
		case 9: {Nine5(); break; }
		case 0: {Zero5(); break; }
		}
		switch (n5)
		{
		case 1: {One5(); break; }
		case 2: {Two5(); break; }
		case 3: {Three5(); break; }
		case 4: {Four5(); break; }
		case 5: {Five5(); break; }
		case 6: {Six5(); break; }
		case 7: {Seven5(); break; }
		case 8: {Eight5(); break; }
		case 9: {Nine5(); break; }
		case 0: {Zero5(); break; }
		}
		switch (n6)
		{
		case 1: {One5(); break; }
		case 2: {Two5(); break; }
		case 3: {Three5(); break; }
		case 4: {Four5(); break; }
		case 5: {Five5(); break; }
		case 6: {Six5(); break; }
		case 7: {Seven5(); break; }
		case 8: {Eight5(); break; }
		case 9: {Nine5(); break; }
		case 0: {Zero5(); break; }
		}
		return 0;

}




/**
One1();
Two1();
Three1();
Four1();
Five1();
Six1();
Seven1();
Eight1();
Nine1();
printf("\n");
One2();
Two2();
Three2();
Four2();
Five2();
Six2();
Seven2();
Eight2();
Nine2();
printf("\n");
One3();
Two3();
Three3();
Four3();
Five3();
Six3();
Seven3();
Eight3();
Nine3();
printf("\n");
One4();
Two4();
Three4();
Four4();
Five4();
Six4();
Seven4();
Eight4();
Nine4();
printf("\n");
One5();
Two5();
Three5();
Four5();
Five5();
Six5();
Seven5();
Eight5();
Nine5();
**/
