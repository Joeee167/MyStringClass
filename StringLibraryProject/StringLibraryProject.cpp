#include<iostream>
#include<string>
#include "clsString.h"

using namespace std;

int main()
{
	clsString String1;
	clsString String2("Youssef Ahmed");

	String1.Value = "Leo Messi";

	cout << "\nString 1 : " << String1.Value;
	cout << "\nString 2 : " << String2.Value;




	cout << endl;
	return 0;


}