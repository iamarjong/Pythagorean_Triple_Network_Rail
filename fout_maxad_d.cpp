#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
int main() {
    ofstream fout("ffout_maxad_d.out");
    int Amax;
    int dmax;
    int A=1;
    int d=1;
    int B;
    double C;
    int dC;
    int Da;
    int Db;
    int Dc;
    int DD;
    int dd;
    int DD3;
    int dd3;
    int ddbox;
    int dd3box;
    int DaDb;
    int Dabc;
    double s;
    double t;
    cout<<"a(max)= ";
    cin>>Amax;
    cout<<"d(max)= ";
    cin>>dmax;
    while(d<dmax) {
        while(A<Amax) {
            B=A+d;
           C=sqrt(A*A+B*B+0.0);
            if(A*A+B*B-int(C)*int(C)==0) {
                Da=A;
                Db=B;
                Dc=ceil(C);
                if(Da>=Db) {
                    DD=Da;
                    dd=Db;
                } else {
                    DD=Db;
                    dd=Da;
                }
                while(dd!=0) {
                    ddbox=dd;
                    dd=DD%dd;
                    DD=ddbox;
                }
                DaDb=DD;
                if(DaDb>=Dc) {
                    DD3=DaDb;
                    dd3=Dc;
                } else {
                    DD3=Dc;
                    dd3=DaDb;
                }
                while(dd3!=0) {
                    dd3box=dd3;
                    dd3=DD3%dd3;
                    DD3=dd3box;
                }
                Dabc=DD3;
                dC=C;
                if(Dabc==1 && dC>A) {
                    if(B%2==0) {
                        s=sqrt((C-A)/2);
                        t=sqrt((C+A)/2);
                    } else {
                        s=sqrt((C-B)/2);
                        t=sqrt((C+B)/2);
                    }
                    if(s-int(s)==0 && t-int(t)==0 ) {
                        fout<<d<<"  "<<endl;
                             } 
                    A=Amax+1;
                } else {
                    A=A+1;
                }
            } else {
                A=A+1;
            }
        }
        A=1;
        d=d+1;
    }
	system("pause");
    return 0; 
}

