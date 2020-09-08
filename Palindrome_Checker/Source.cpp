#include<iostream>
using namespace std;

void palindrome(string x, int i ,int e ,int s)
{ 	
	
	char* pt1, * pt2;
	pt1 = &x[i];
	pt2 = &x[e];
	i = 0;
	e = s - 1;
	cout << *pt1 << " = " << *pt2;
	i = i + 1;
	e = e - 1;
	
}

int main()
{
	int i = 0, s, e;
	string y;
	cout << "Enter letters: ";
	cin >> y;
	s = y.size();
	e = s - 1;	
	string x = { y };
	char* p1, * p2;
	while (i < e)
	{
		
		p1 = &x[i];
		p2 = &x[e];		
		if (*p1 != *p2 || x[i] != x[e])
		{
			cout << "The letters is not palindrome.";
			goto END;
		}
		else
		{
			palindrome(x, i, e, s);
			cout << endl;
		}
		i = i + 1;
		e = e - 1;
	}
	cout << "The letters is palindrome." << endl;
    END:

	return 0;
}