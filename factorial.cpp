 #include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int i = 1;
    do{
        i *= N;
        N--;
    } while(N>0);
    cout << i;
    return 0;

}
