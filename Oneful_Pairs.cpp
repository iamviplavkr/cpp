/*Oneful Pairs

Chef defines a pair of positive integers (a,b)(a,b) to be a Oneful PairOneful Pair, if

a+b+(a⋅b)=111a+b+(a⋅b)=111

For example, (1,55)(1,55) is a Oneful PairOneful Pair, since 1+55+(1⋅55)=56+55=1111+55+(1⋅55)=56+55=111.
But (1,56)(1,56) is not a Oneful PairOneful Pair, since 1+56+(1⋅56)=57+56=113≠1111+56+(1⋅56)=57+56=113=111.

Given two positive integers aa and bb, output Yes if they are a Oneful PairOneful Pair. And No otherwise.*/

#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    if(a+b+(a*b)==111)
    {
        cout << "YES";
    }
    else{
        cout << "NO";
    }
	// your code goes here
	return 0;
}
