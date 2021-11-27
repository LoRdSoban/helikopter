#include<iostream>
#include <thread>

using namespace std;
using std::this_thread::sleep_for;
using namespace std::chrono_literals;

void heli()
{
	cout << endl;
	cout<< "ROFL:ROFL:LOL:" << endl;
	cout<< "           A" <<endl;
	cout<< "  L    /--------" <<endl;
	cout<< " LOL====      []\\"<< endl;
	cout<< "       \\         \\" <<endl;
	cout<< "        \\_________]" <<endl;
	cout<< "            I     I" <<endl;
	cout<< "         --------------/" <<endl << endl;

}

void kaptor()
{
	cout << endl;
	cout<< "         :LOL:ROFL:ROFL" << endl;
	cout<< "           A" <<endl;
	cout<< "       /--------" <<endl;
	cout<< " LOL====      []\\"<< endl;
	cout<< "  L    \\         \\" <<endl;
	cout<< "        \\_________]" <<endl;
	cout<< "            I     I" <<endl;
	cout<< "         --------------/" <<endl << endl;

}

int main()
{

	system("cls");	
	while(true)
	{
		sleep_for(300ms);
		system("cls");
		heli();

		sleep_for(300ms);
		system("cls");
		kaptor();
	}

	
	return 0;
}