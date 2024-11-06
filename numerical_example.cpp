
//************************************************************************************************************
//************************************************************************************************************

	#include <iostream>
	#include <cmath>
	#include <fstream>
	#include <sstream>

	using namespace std;

//************************************************************************************************************
//************************************************************************************************************

int main(){

	ofstream outfile1("output.txt");

	int n = 12;
	float p_max = 0.0, H_max = 0.0, H_obs = 0.0, I = 0.0;

	//float p[n]  = {1};
	//float p[n]  = {0.9,0.1};
	//float p[n]  = {0.9,0.05,0.05};
	//float p[n]  = {0.85,0.05,0.05,0.05};
	//float p[n]  = {0.80,0.09,0.06,0.04,0.01};
	//float p[n]  = {0.77,0.10,0.05,0.03,0.03,0.02};
	//float p[n]  = {0.70,0.10,0.05,0.05,0.04,0.03,0.03};
	//float p[n]  = {0.60,0.11,0.06,0.05,0.05,0.05,0.04,0.04};
	//float p[n]  = {0.52,0.10,0.08,0.07,0.06,0.05,0.04,0.04,0.04};
	//float p[n]  = {0.43,0.09,0.08,0.07,0.07,0.06,0.05,0.05,0.05,0.05};
	//float p[n]  = {0.28,0.10,0.09,0.08,0.08,0.07,0.06,0.06,0.06,0.06,0.06};
	float p[n]  = {0.14,0.10,0.09,0.09,0.08,0.08,0.07,0.07,0.07,0.07,0.07,0.07};

//************************************************************************************************************
//************************************************************************************************************
	
	p_max = 1.0 / float(n);

	for (int i = 0; i < n; i++){
		H_max = H_max + (-p_max * log2(p_max));
		H_obs = H_obs + (-p[i] * log2(p[i]));
	}

	I = H_max - H_obs;

	outfile << n << '\t' << H_max << '\t' << H_obs << '\t' << I << endl;

//************************************************************************************************************

	outfile.close();

return 0;
}


//************************************************************************************************************
//************************************************************************************************************
