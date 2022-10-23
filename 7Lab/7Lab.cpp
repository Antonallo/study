#include <iostream>
#include "7Lab.h"
using namespace std;

int main()
{	
	int mmm[100][100];
	int k, n;
	cin >> k >> n;
	Reading(mmm,k,n);
	bubblesort(mmm, k, n);
	vivod(mmm, k, n);
}
