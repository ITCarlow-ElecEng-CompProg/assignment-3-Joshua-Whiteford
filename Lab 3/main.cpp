/**
 *Joshua Whiteford
 *02/10/2017
 *main.c
 *Standard Deviation Calculator
 */

    /**< preprocessor directives */
#include <iostream>
#include <math.h>

using namespace std;

    /**< Starting the function */
int main()
{
    /**< Setting the DataTypes */
    int i;

    double values[10] = {0};
    double sum = 0;
    double avg;
    double tpln = 0;
    double stndrd;
    double total;

    /**< Getting the User to input The values they want to Use for the calculation */
    cout << "Enter 10 values You want to find the average of" << endl;

    /**< Getting the User to enter in 10 values */
    for(i = 0 ; i < 10 ; i++ )
    {
        cin >> values[i] ;
    }

    /**< Doing the calculations to Get the sum  */
    for(i = 0 ; i < 10 ; i++ )
    {
        sum = values[i]+sum;
    }

    /**< Equation to get the Average */
    avg = sum / 10;

    /**< Equations to get the top line of the Equation */
    for(i = 0 ; i < 10 ; i++ )
    {
        tpln = tpln + pow(values[i]-avg,2);
    }

    /**< Equations to Get the Desired Results */
    stndrd = tpln / 9;
    total = sqrt(stndrd);

    /**< Displaying the Answers to the User */
    cout<<"the average is "<< total << endl;

    return 0;
}
