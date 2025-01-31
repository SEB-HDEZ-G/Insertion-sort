#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& arr) { //complejidad O(n^2)
    int n = arr.size();
    for(int i=1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
    }
}

int main() {
    vector <int> array = {5,2,4,6,1,3};

    insertionSort(array);

    for(int num: array) {
        cout << num << " ";
    }

    return 0;
}