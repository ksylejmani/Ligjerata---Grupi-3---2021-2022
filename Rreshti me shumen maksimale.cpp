//#include<iostream>
//using namespace std;
//int main() {
//	const int m = 4, n = 5;
//	int A[m][n] = { {1,5,-1,-2,100},{3,4,1,6,8},{5,5,4,3,3},{1,-6,0,2,3} };
//	int imax = -1;
//	int smax = -1;
//	int i = 0;
//	do
//	{
//		int j = 0;
//		int srr = 0;
//		do
//		{
//			srr += A[i][j];
//			j++;
//		} while (j<n);
//		if (imax == -1||srr>smax) {
//			imax = i;
//			smax = srr;
//		}
//		i++;
//	} while (i<m);
//	cout << "Rreshti me shume maksimale eshte " << imax + 1 << " dhe ka vleren "
//		<< smax << ".\n";
//	return 0;
//}