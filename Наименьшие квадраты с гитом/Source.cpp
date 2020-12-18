#include <iostream>


using namespace std;


double x[10] = { 10,30,40,70,90,110,130,140,150,160 };
double y[10] = { 4.5,4.8,5.1,6,7.5,8.1,9,9.8,11.3,14 };
int Speed = 175, n = 10, m = 2;
double X, Y, X2, XY, b, k, yRas4etnoe[10], Sigma[10], Sigma2[10],S;

double RewenieSLAU(double X, double Y, double X2, double XY) {

	Y = XY * -X / X2 + Y;
	b = Y / (n + X * -X / X2);
	k = (XY - b * X) / X2;

	cout << b << "  " << k << endl;
   
   

	return 1;
}







int main() {
	for (int i = 0; i < n; i++)
	{
		X += x[i];
		Y += y[i];
		X2 += pow(x[i], 2);
		XY += x[i] * y[i];
	}
	//cout << X << "   " << Y << endl;

	RewenieSLAU(X, Y, X2, XY);
	for (int i = 0; i < n; i++)
	{
		yRas4etnoe[i] = k * x[i] + b;
		Sigma[i] = y[i] - yRas4etnoe[i];
		Sigma2[i] = pow(Sigma[i], 2);
		S += Sigma2[i];
	}
	
	cout << S << endl;

	return 1;
}