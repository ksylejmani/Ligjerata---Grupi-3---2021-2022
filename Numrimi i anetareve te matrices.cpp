//#include<iostream>
//using namespace std;
//int main() {
//	const int m = 3, n = 4;
//	int A[m][n];// = { {-1,2,-6,-3},{0,4,0,2},{3,5,6,1} };
//	cout << "Vlerat e matrices:\n";
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			cout << "Cakto vleren per A[" << i + 1 << "][" << j + 1 << "]: ";
//			cin >> A[i][j];
//		}
//	}
//
//	int rr;
//	while (true)
//	{
//		cout << "Per cilin rresht deshironi te shtypni vlerat: ";
//		cin >> rr;
//		if (rr < 1 || rr>3)
//			cout << "Ky rresht nuk ekziston ne matrice!\n";
//		else
//			break;
//	}
//
//	int k = 0;
//	int i = 0;
//	do
//	{
//		int j = 0;
//		do
//		{
//			if (A[i][j] < 0) {
//				k++;
//			}
//			j++;
//		} while (j < n);
//		i++;
//	} while (i < m);
//	//cout << "Numri i vlerave negative eshte: " << k << endl;
//	cout << "Elementet e rreshtit "<<rr<<" jane: ";
//	for (int i = 0; i < n; i++)
//		cout << A[rr-1][i] << " ";
//	cout << endl;
//	return 0;
//}