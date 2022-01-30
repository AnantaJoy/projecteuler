/* Problem Statement: Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms. */

//////////////////////////////////////
// Author: Ananta Asim Joy		    //
// Email: anantajoy007@gmail.com 	//
//////////////////////////////////////

#include <iostream>
using namespace std;

int main(){
    int first_term = 1;
    int second_term = 2;
    int sum = 0;

    while(second_term < 4000000){
    cout << second_term << endl;
        if(second_term % 2 == 0){
            sum += second_term;
        }
        int temp = second_term;
        second_term = first_term + second_term;
        first_term = temp;
    }
    cout << sum << endl;
}
// Output: 4613732
// Solution Explanation: https://brokensandals.net/technical/programming-challenges/projecteuler-2/