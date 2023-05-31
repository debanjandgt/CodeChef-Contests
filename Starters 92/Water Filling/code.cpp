#include <iostream>
using namespace std;

int main() {
	int cases;
	cin >> cases;
	while(cases)
	{
	    int cnt=0;
	    cases--;
	    int a,b,c;
	    cin >> a >> b >>c ;
	    if(a==0)
	    cnt++;
	    if(b==0)
	    cnt++;
	    if(c==0)
	    cnt++;
	    if(cnt >= 2)
	    cout <<  "Water filling time" << endl;
	    else
	    cout << "Not now" << endl;
	}
}
