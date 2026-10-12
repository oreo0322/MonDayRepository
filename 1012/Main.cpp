#include<iostream>
#include"Cat.h"
using namespace std;

int main(void)
{
	
	Cat cat("Œ¢");
	cout << cat.GetName() << endl;
	cat.Speak();
	return 0;
}