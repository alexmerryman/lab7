#include "eecs230.h"
#include <vector>

//function declarations
void pointer_fun(int, int);
void pointer_arithmetic_chars();
short greater_val(short *, short *);

void pointer_arithmetic_ints();
void pointer_data(int);


int main()
{
    cout << "main()" << endl;

    pointer_data(3);
    //pointer_arithmetic_ints();


    //pointer_fun(6,3);
    //greater_val(...);
    //pointer_arithmetic_chars();

}

/* Creates two integer pointers named ptrA and ptrB that point to ints a and b, respectively.
 * Prints to terminal the values of the ints at the pointers. Then, prints to terminal the value of the ints at the pointer locations.*/
void pointer_fun(int a, int b)
{
    int * ptrA = &a;
    int * ptrB = &b;

    cout << "\nFUNCTION pointer_fun:\n";
    cout << *ptrA << "\n";
    cout << *ptrB << "\n";
    cout << ptrA << "\n";
    cout << ptrB << "\n";

    //follow-up question; how far away, in bytes, is location of ptrA versus location of ptrB? How many bytes is an int stored in?
    cout << "\n Int size (bytes): "<< sizeof(a) << endl;

}

void pointer_arithmetic_chars()
{
    char course[] = "Programming for Engineers";
    char *pc = course;

    int length = sizeof(course)/sizeof(char);

    for(int i=0; i<length; i++)
    {
        *pc = course[i];
        cout << *(pc + i);
    }
}

short greater_val(short * ptrA, short * ptrB)
{
    short a = *ptrA;
    short b = *ptrB;

    if (a > b) {
        //return a;
        cout << a;
    }
    else if (b > a) {
        //return b;
        cout << b;
    }
    else {
        cout << "They are equal";
    }
}

/* prints out pointer location in hex, decimal, and binary */
void pointer_data(int a)
{
    int * ptrA = &a;
    cout << "ptrA value of int: " << *ptrA << endl;
    cout << "ptrA virtual memory location: "<< endl;
    cout << "    (hexadecimal): " << ptrA << endl;
    cout << "    (decimal)    : " << (long) ptrA << endl;
    cout << "    (binary)     : " <<  bitset<64>((long) ptrA) << '\n' << endl;

    //Do the same for int b -- your code here
}

/* prints out ints and pointer addresses */
void pointer_arithmetic_ints()
{
    int array_of_ints[3] = {10, 100, 200};
    int *ptr;

    // let us have array address in pointer.
    ptr = array_of_ints;
    int num_elements = sizeof(array_of_ints) / sizeof(int);

    for (int i = 0; i < num_elements; i++) {
        cout << "Address of var[" << i << "] = ";
        cout << ptr << endl;

        cout << "Value of var[" << i << "] = ";
        cout << *ptr << endl;

        // point to the next location
        ptr++;
    }
}

