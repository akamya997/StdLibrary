#include<bits/stdc++.h>
using namespace std;
#define compute
#ifdef compute
#define dbg(x...) do{cout<<"\033[32;1m"<<#x<<"->";err(x);} while(0)
void err(){cout<<"\033[39;0m"<<endl;}
template<template<typename...> class T,typename t,typename... A>
void err(T<t> a,A... x){for (auto v:a) cout<<v<<' ';err(x...);}
template<typename T,typename... A>
void err(T a,A... x){cout<<a<<' ';err(x...);}
#else
#define dbg(...)
#endif
int main(){
    long long x=0x3f3f3f3f3f3f3f3f;
    dbg(x);
    vector<int> arr;
    mt19937 rnd(time(NULL));
    for(int i=0;i<10;i++) arr.push_back(rnd()%10000);
    dbg(arr);
}
