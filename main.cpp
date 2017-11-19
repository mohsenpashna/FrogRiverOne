#include <iostream>
#include <vector>
#include <set>

using namespace std;
int X = 5;
vector<unsigned int> A ={1,3,1,4,2,3,5,4};

void print_vec(vector<unsigned int> A){
    int s = A.size();
    for (int i = 0; i < s; ++i) {
        cout << A[i] << " ";

    }
    cout << endl;
}


int solution(int X, vector<unsigned int> &A){
    int s = A.size();
    vector<unsigned int> Count (X+1,0);
    Count[0] = 1;
//    vector<unsigned int> IDX (s,0);
    unsigned int Counter=0;
    for (int i = 0; i <s ; ++i) {
        cout << i << endl;
        if(A[i]<=X & Count[A[i]]==0){
            Count[A[i]]=1;
            ++Counter;

            print_vec(Count);
            if(Counter==X){
                return i;
            }
        ;
    }
    }
    return 0;
}


int main() {

    cout << solution(X, A) << std::endl;
    return 0;
}