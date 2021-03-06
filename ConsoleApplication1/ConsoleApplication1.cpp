#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

string ZeroToNine(int x)
{
	switch (x)
	{
	case 0:return  "Zero\n"; break;
	case 1:return "One\n"; break;
	case 2:return  "Two\n"; break;
	case 3:return  "Thre\n"; break;
	case 4:return  "Fore\n"; break;
	case 5:return  "Five\n"; break;
	case 6:return  "Six\n"; break;
	case 7:return  "Sevin\n"; break;
	case 8:return  "Eighte\n"; break;
	case 9:return  "Nine\n"; break;
	default:break;
	}
}

string TenToNinetene(int x)
{
	switch (x)
	{
	case 10:return "Ten\n"; break;
	case 11:return "Eleven\n"; break;
	case 12:return "Twelve\n"; break;
	case 13:return "Thirteen\n"; break;
	case 14:return "Fourteen\n"; break;
	case 15:return "Fifteen\n"; break;
	case 16:return "Sixteen\n"; break;
	case 17:return "Seventeen\n"; break;
	case 18:return "Eighteen\n"; break;
	case 19:return "Nineteen\n"; break;
	default:break;
	}
}

string TwentyToNinty(int x)
{
	int y, z;
	string ns, ss;
	if (x % 10 != 0)
	{
		z = x % 10;
		y = (x / 10) * 10;
		switch (y)
		{
		case 20:ns = "Twenty-"; break;
		case 30:ns = "Thirty-"; break;
		case 40:ns = "Forty-"; break;
		case 50:ns = "Fifty-"; break;
		case 60:ns = "Sixty-"; break;
		case 70:ns = "Seventy-"; break;
		case 80:ns = "Eighty-"; break;
		case 90:ns = "Ninty-"; break;
		default:break;
		}
		ss = ZeroToNine(z);
		return ns + ss;
	}
	else
		switch (x)
		{
		case 20:return "Twenty\n"; break;
		case 30:return "Thirty\n"; break;
		case 40:return "Forty\n"; break;
		case 50:return "Fifty\n"; break;
		case 60:return "Sixty\n"; break;
		case 70:return "Seventy\n"; break;
		case 80:return "Eighty\n"; break;
		case 90:return "Ninty\n"; break;
		default:break;
		}
}

int main()
{
	int num[4], i, n;
	string snum[4];
	for (i = 0; i <= 3; i++)
	{
		cin >> num[i];
	}
	
	for (i = 0; i <= 3; i++)
	{
		if (num[i] < 10)
			snum[i] = ZeroToNine(num[i]);
		else if (num[i] >= 10 && num[i] <= 19)
			snum[i] = TenToNinetene(num[i]);
		else if (num[i] < 100)
			snum[i] = TwentyToNinty(num[i]);

	}	
	
	for (i = 0; i <= 3; i++)
	{
		cout << snum[i];
	}
}
