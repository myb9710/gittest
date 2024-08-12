#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

int main()
{
     int m,n,i,j;
     float **Vp;
     FILE *fid;
//============================================
     m=100;n=100;
     Vp=new float*[m];
     for(i=0;i<m;i++)
     {
         Vp[i]=new float[n];
	 for(j=0;j<n;j++)
//	     Vp[i][j]=10*i+j+1001;
	     Vp[i][j]=i+j;
     }
//=============================================
    ofstream out1("test2.dat");
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    out1.write((char*) &Vp[i][j],sizeof(float));
    out1.close();

     return 0;
}
