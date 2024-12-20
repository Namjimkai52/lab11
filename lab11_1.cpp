#include <iostream>
#include <cstdlib>
#include <ctime>

using  namespace std ;


int main(){
    cout << "Press Enter 3 times to reveal your future.";
    int i = 0;
    while(i < 3 ){
       cin.get();
       i++;
    }
    srand(time(0));
    int m = rand()%9;
    if(m == 0)  cout << "You will get A in this 261102.";
    else if (m == 1)  cout << "You will get B+ in this 261102.";
    else if (m == 2) cout << "You will get B in this 261102.";
    else if (m == 3)cout << "You will get C+ in this 261102.";
    else if (m == 4) cout << "You will get C in this 261102.";
    else if (m == 5) cout << "You will get D+ in this 261102.";
    else if (m == 6)cout << "You will get D in this 261102.";
    else if (m == 7)cout << "You will get F in this 261102.";
    else cout << "You will get W in this 261102.";


    return 0;
}
