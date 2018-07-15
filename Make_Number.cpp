#include "all.h"
using namespace std;
char c;
int N,C1,C2;
string S;
char S1[100],S2[100];
int main()
{
	setcolor(240);
	cls();
	freopen("tot.txt","r",stdin);
	srand(GetTickCount());
	scanf("%d",&N);
		int Rd=rand()%N+1;
		while(Rd==34)Rd=rand()%N+1;
		int A=Rd/10,B=Rd%10;
		memset(S1,0,sizeof S1);
		memset(S2,0,sizeof S2);
		S1[0]=A+'0',S1[1]='.',S1[2]='t',S1[3]='x',S1[4]='t';
		S2[0]=B+'0',S2[1]='.',S2[2]='t',S2[3]='x',S2[4]='t';
		C1=0,C2=0;
		while(1){
			freopen(S1,"r",stdin);int o=0;
			for(int i=0;i<=C1;i++){getline(cin,S);if(!S.size()){o=1;break;}}
			C1++;
			if(o)break;
			cout<<S<<"   ";
			freopen(S2,"r",stdin);
			for(int i=0;i<=C2;i++){getline(cin,S);if(!S.size()){o=1;break;}}C2++;
			if(o)break;
			cout<<S<<"   ";puts("");
		}
}
