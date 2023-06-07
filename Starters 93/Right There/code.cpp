#include <iostream>
using namespace std;

int main() {
	int cases;
	cin >> cases;
	while(cases)
	{
	    cases--;
	    int x,y;
	    cin >> x>> y;
	    if(x<=y)
	    cout << "YES" << endl;
	    else
	    cout << "NO" << endl;
	}
}
