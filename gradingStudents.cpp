#include <iostream>

using namespace std;

int roundGrade(int grade);

int main(){

    // Input Array
    int n = 4;
    int originalGrades[n] = {73, 67, 38, 33};

 // Print out the results
    for(int i = 0; i < n; ++i){
        int newGrade = roundGrade(originalGrades[i]);
        cout << newGrade << "\n";
    }    
       

    return 0;
}


int roundGrade(int grade){

    if ( grade < 38){
        return grade;
    }     // Check difference between grade and next multiple of 5.
    int modResult = grade % 5;
    int round = 5 - modResult;

    if ( round < 3) {
        return (grade + round); // Do the rounding.
    } else {
        return grade;
    }
}
