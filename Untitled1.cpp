#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
string laczenie(vector<string> sl){
	int x=0;
	vector<char> lit;
	for(int i=0; i<sl.size(); i++){
		lit.push_back(sl[i][0]);
		lit.push_back(sl[i][2]);
	}
	sort(lit.begin(), lit.end());
	for(int i=0; i<lit.size(); i+=2){
		if(lit[i]==lit[i+1]) x+=2;
	}
	if(x==sl.size()) return "TAK";
	else return "NIE";
}
int main(){
	int a, b;
	string s;
	vector<string> sl;
	cin>>a;
	for(int i=0; i<a; i++){
		cin>>b;
		for(int j=0; j<b; j++){
			cin>>s;
			sl.push_back(s);
		}
		cout<<laczenie(sl)<<endl;
		sl.clear();
	}
	return 0;
}
