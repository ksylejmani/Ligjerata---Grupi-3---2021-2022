#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	const int n = 8;
	int M[n];
	cout << "Ne vijim te caktohen nivelete ngjyreave te markereve\n\n";
	for (int i = 0; i < n; i++) {
		cout << "Niveli i ngjyres se markerit: ";
		cin >> M[i];
	}
	int markera = 0;
	for (int i = 0; i < n; i++) {
		if (M[i] >= 3 && M[i] <= 8) {
			markera++;
		}
	}
	cout << "Numri i markerave me nivel te ngjyeres ne mes te 3 dhe 8 eshte: "
		<< markera << endl;
	float mes = (M[0] + M[n - 1]) / (2 * 1.0);
	cout << "Mesatarja e nivelit te ngjyres se markereve eshte: "
		<< setprecision(2) << fixed << mes << endl;
	int s = 0;
	int p = 1;
	for (int i = 0; i < n; i++) {
		s = s + M[i];
		p = p * M[i];
	}
	cout << "Ndryshimi ne mest te prodhimit dhe shumes eshte "
		<< p - s << endl;
	return 0;
}