#include <iostream>  

using namespace std;  

void main()  
{
	int totalx = 40;
	int totaly = 20;
	for(int y = 0;y <= totaly; y++) {
		for(int x = 0;x <= totalx; x++)
			if ((y == 0) || (x == 0) || (x == totalx) || (y == totaly) || ((2*y)==x) || ((2*y+x)==totalx))
				cout << "X";
			else
				cout << " ";
		cout << "\n";
	}
}  

