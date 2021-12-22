//#include<iostream>
//#include<math.h>
//using namespace std;
//double mae(int m, float X[], float Y[]);
//float max_error(int m, float X[], float Y[]);
//int main() {
//	const int m = 5;
//	float X[m] = { 1,1.5,1.8,0.9,1.1 };
//	float Y[m] = { 0.9,1.3,1.1,1,1.6 };
//	double e = mae(m, X, Y);
//	cout << "Mean absolute error: " << e << endl;
//	cout << "Max error: " << max_error(m, X, Y) << endl;
//	return 0;
//}
//double mae(int m, float X[], float Y[]) {
//	float s = 0;
//	for (int i = 0; i < m; i++) {
//		s = s + abs(X[i] - Y[i]);
//	}
//	return s / m;
//}
//
//float max_error(int m, float X[], float Y[]) {
//	float max = abs(X[0] - Y[0]);
//	for (int i = 1; i < m; i++) {
//		if (abs(X[i] - Y[i]) > max) {
//			max = abs(X[i] - Y[i]);
//		}
//	}
//	return max;
//}