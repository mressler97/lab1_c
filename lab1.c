/* Name:	Michael Ressler
 * Class:	CSCI112 Programming with C
 * Assignment:	Lab 1
 * Date:	1/24/19
*/

#include<stdio.h>
#define MILEAGE_REIMBURSEMENT 0.35

int main(void) {
	double bo; //beginning odometer reading scanned in miles
	double eo; //ending odometer reading scanned from console
	double reimburse; //Reimbursement amount 
	double miles; //miles traveled

printf("MILEAGE REIMBURSEMENT CALCULATOR\n");
printf("Enter beginning odometer reading=>");
scanf("%lf",&bo); //scanning in user input of beginning odometer reading

printf("Enter ending odometer reading=>"); 
scanf("%lf",&eo); //scanning in user input of ending odometer reading

miles = eo-bo; //subtracting beginning reading from ending reading to find miles traveled
reimburse = miles*MILEAGE_REIMBURSEMENT; //multiplying by conversion value and saving to varialbe reimburse

printf("You traveled %.1lf miles.",miles);
printf("   At $0.35 per mile,\n");
printf("your reimbursement is $%.2lf.\n",reimburse);
return(0);
}
