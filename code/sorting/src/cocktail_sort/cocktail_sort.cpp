// C++ Demostration of the Cocktail Sort in Cpp
// 
// Cocktail sort is a version of bubble sort in 
// which the algorithm traverses in both directions
// and compares two values, then moves the largest
// element to the right, ending with all values 
// sorted in the correct position.

/*--- Start program ---*/
#include <iostream>
#include <ctime>

// using std::swap; 
// using std::cin; using std::cout; using std::endl;

// Sorts an array using Cocktail Sort
void CocktailSort(int a[], int n){
    bool swapped = true;
    int start = 0;
    int end = n - 1;

    // while flag is set
    while(swapped){
        swapped = false;

        // go through array, swap larger values to 
        // the right
        for (int i = start; i < end; ++i){
            if (a[i] > a[i+1]){
                std::swap(a[i], a[i+1]);
                swapped = true;
            }
        }
        // nothing was swapped so go to the next step
        if(!swapped){
            break;
        }
        swapped = false;
        --end; // move one to the left from end of array

        // iterate from right to left, swap larger
        // values to the right
        for(int i = end - 1; i >= start; --i){
            if(a[i] > a[i+1]){
                std::swap(a[i], a[i+1]);
                swapped = true;
            }
        }
        ++start;
    }
}

// Print the array
void printArr(int a[], int n){
    for (int i = 0; i < n; ++i){
        std::cout << a[i] << ", ";
    }
    std::cout << std::endl;
}

int main(){
    int testArr[] = {12, 4, 3, 7, 2, 1, 8, 15, 20, 5};
    int n = 10;

    CocktailSort(testArr, n);
    printArr(testArr, n);
}
