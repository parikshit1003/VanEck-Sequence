#include <bits/stdc++.h>

using namespace std;

int main()
{

    int i,n,p;

    map<int,int> idx;

    p = 0;

    cout << p << endl;

    for(i=0;i<1000;i++){
        if(idx.find(p)!=idx.end()){
            n = i - idx[p];
            idx[p] = i;
        }
        else{
            n = 0;
            idx.insert({p,i});
        }
        cout << n << endl;
        p = n;
    }

    return 0;
}
