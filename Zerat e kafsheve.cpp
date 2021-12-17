#include<iostream>
#include<math.h>
using namespace std;
void shkruajSiBenKafsha(int k) {
	switch (k)
	{
	case 1:
		cout << "Ham ham!\n";
		break;
	case 2:
		cout << "Miau miau!\n";
		break;
	case 3:
		cout << "Ciu ciu!\n";
		break;
	case 4:
		cout << "Muuu muu!\n";
		break;
	case 5:
		cout << "Auuu auuu!\n";
		break;
	default:
		cout << "Kafshe e panjohur!";
		break;
	}
}
int fuqia(int a, int b) {
	int p = 1;
	for (int i = 1; i <= b; i++) {
		p = p * a;
	}
	return p;
}
int numroShifrat(int n) {
	int k = 0;
	n = abs(n);
	while (n >= 10) {
		n = n / 10;
		k++;
	}
	return k + 1;
}
bool isInt(double n) {
	double r = n - (int)n;
	if (r == 0)
		return true;
	else
		return false;
}
int main() {
	//cout << "Zgjedh kafshen (1-5): ";
	//int k;
	//cin >> k;
	//shkruajSiBenKafsha(k);
	//int a = 2, b=5;
	//cout << "Fuqia: " << fuqia(a, b) << endl;
	//cout << "Power: " << pow(a, b) << endl;
	//int k = -984;
	//cout << "Numri i shifrave: " << numroShifrat(k) << endl;
	cout << "Numer i plote: " << isInt(2.00) << endl;
	return 0;
}