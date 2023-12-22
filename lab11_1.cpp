#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

string grade[9] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};

string randomgrade() {
    int RanIndex = rand() % 9;
    return grade[RanIndex];
}

int main() {
    srand(time(0)); 
    int i = 0;
    cout << "Press Enter 3 times to reveal your future.";
    do {
        cin.get();
        i++;
    } while (i < 3);

    cout << "You will get " << randomgrade() << " in this 261102." << endl;

    return 0;
}
