/* Problem Statement: If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 Find the sum of all the multiples of 3 or 5 below 1000. */

//////////////////////////////////////
// Author: Ananta Asim Joy		    //
// Email: anantajoy007@gmail.com 	//
//////////////////////////////////////


#include<iostream>
using namespace std;

int main() {
	int sum = 0;
	int max_number = 1000;

	for (int i = 0; i < max_number; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			sum += i;
		}
	}
	cout << sum << endl;
}
// Output: 233168