#include<iostream>
#include<cmath>
#include<string>
#include<iomanip>

using namespace std;

int main() {
/*
	// a bank account starts out with $10,000. interest is compounded monthly at 6 percent % per year,(5 % per month). Every month, $500 is withdrawn to meet college expenses. After how many years is the account depleted?

	/* Variables :	av = account value
					nav = new account value (after interest deposit)
					pm = percent monthly
					py = percent yearly
					wm = withdrawl monthly
					m = month count
	

	double av;//av = account value
	double nav;//nav = new account value (after interest deposit)
	double pm = 1.005;//pm = percent monthly
	double wm = 500;//wm = withdrawl monthly
	int m = 0;

	cout << (" please input initial amount of money in bank account : ") << endl;

	cin >> av;
	
	nav = av;
	
	while ((nav-500) >= 0)
	{

		nav = (nav * pm) - wm;
			++m;
			cout << nav << endl;

			}
	
	cout << (" the starting balance of : ") << av << (" will run out in : ") << m << (" months, which is : ") << m / 12 << (" years ") << endl;
	*/
	
/* Question 10 - review questions
// wall area 
	double ewh; // ewh = exterior wall height
	double lww; // lww = long wall width
	double sww; // sww = short wall width
	double wallArea; // wallArea = wall area

// door area

	double hd; // hd = door height
	double wd; // wd = door width
	int numDoor; // number of doors
	double doorArea; // doorArea = door area

// window area

	double hw; // hw = window height
	double ww; // ww = window width
	int numWin; // numwin
	double windowArea; // windowArea = window area

// total area
	
	double totArea;

// calculate


	cout << " please input height of walls : " << endl;
	cin >> ewh;

	cout << " please input width of long walls : " << endl;
	cin >> lww;

	cout << " please input width of short walls : " << endl;
	cin >> sww;

	cout << " please input height doors : " << endl;
	cin >> hd;
	
	cout << " please input width doors : " << endl;
	cin >> wd;

	cout << " please input number of doors : " << endl;
	cin >> numDoor;

	cout << " please input height windows : " << endl;
	cin >> hw;

	cout << " please input width windows : " << endl;
	cin >> ww;

	cout << " please input number of windows : " << endl;
	cin >> numWin;

	
	
		wallArea = ((2 * lww * ewh) + (2 * sww * ewh));

		doorArea = hd * wd * numDoor;

		windowArea = hw * ww *numWin;

		totArea = wallArea - doorArea - windowArea;
		
		cout << " the total surface area is : " << totArea << endl;

		system("pause");
		*/

/*
// Question 11 - review questions - write a program that prints the sum of the first ten positive integers, 1+2+...+10 without using variables
int sum = 0;

for (int i = 2; i <= 10; i = i + 2)
sum += i;

cout << " the sum of the first ten positive integers is : " << sum << endl;
*/

/*
// write a program that prints the balance of an account that earns 5 percent interest per year after the first, second and third year. do not use variables 
cout << "the starting balance is $10,000. " << endl;
cout << "the interest rate is 5%. " << endl;

cout << "the balance after one year is: " << 10000 * 1.05 << endl;
cout << "the balance after two years is: " << (10000 * 1.05)*1.05 << endl;
cout << "the balance after three years is: " << (10000 * 1.05*1.05)*1.05 << endl;
*/

/*
//Question 12b -  write a program that prints the balance of an account that earns 5 percent interest per year after the first, second and third year. now use variables 

	double sb;//starting balance
	double interest = 1.05;//interest
	double nb; // new balance

	cout << "please input starting balance" << endl;
		cin >> sb;

nb = sb * interest;

	cout << " the interest after 1 year is : " << nb << endl;

nb = nb * interest;

	cout << " the interest after 2 years is : " << nb << endl;

nb = nb * interest;

	cout << " the interest after 3 years is : " << nb << endl;
	*/

/*
// write a program that displays your name inside a box on the terminal screen

cout << endl;
cout << "          +--------+" << endl;
cout << "          |  Kyle  |" << endl;
cout << "          +--------+" << endl;
cout << endl;
*/

//				exponents
/*
//write the folllowing math expressions in c==
// kinematics equation

double s1, s0, v0, dt, g;



cout << "please input s0 : " << endl;
cin >> s0;

cout << "please input value for v0" << endl;
cin >> v0;

cout << " please input the value for acceleration : " << endl;
cin >> g;

cout << " Please input the value for time : " << endl;
cin >> dt;

s1 = s0 + v0 * dt + ((1 / 2)*g*pow(dt, 2));


cout << "the distance travelled is : " << s1 << endl;
*/

//				strings
/*
// playing with strings

string fname = "Kyle";
string lname = "Cannon";
string name = fname + lname;

cout << name << endl;
name = fname + " " + lname;
cout << name << endl;

char middleinitial = 'a';
char letter = A;

cout << fname + " " + middleinitial + "." + " " + lname << endl;
*/

//				substring
/*// when using substring .substr(a,b); a is the number place where the first charachter you want to print lies, b is the number of charachters you want to print after that point.
string greeting = "hello, Kyle Cannon!";

string sub = greeting.substr(0, 5);

string fname = greeting.substr(7, 4);

string lname = greeting.substr(12, 7);

cout << " " << sub << endl;

cout << " " << fname << endl;

cout << " " << lname << endl;
*/
 
//				<iomanip>
/*
//showpoint - display the decimal point
//fixed - decimal notation
//scientific - scientific notation
//setprecision(n) - set the number of significant digits to be printed to the integer value n
//setw(n) - set the minimum number of columns for printing the next value to the integer value n
//Right - right justification
//Left - left justification

	double price_per_liter = 1.21997;
		cout << fixed << setprecision(2) << "price per liter: $" << price_per_liter << endl;
		
//use the setw manipulator to set the width of the next output field.
//the width is the total number of charachters used for showing the value, including digits, the decimal point and spaces.
// if you want columns of certain widths use the setw manipulator.
//example, if you want a number to be printed, right justified, in a column that is eight charachters wide, you use << setw(8).
  
	double price_per_ounce_1 = 10.2372;
	double price_per_ounce_2 = 117.2;
	double price_per_ounce_3 = 6.9923435;

		cout << fixed <<  setprecision(2);
		cout << setw(8) << price_per_ounce_1 << endl;
		cout << setw(8) << price_per_ounce_2 << endl;
		cout << setw(8) << price_per_ounce_3 << endl;
		cout << "--------" << endl;

		cout << fixed << setprecision(2);
		cout << setw(2) << price_per_ounce_1 << endl;
		cout << setw(2) << price_per_ounce_2 << endl;
		cout << setw(2) << price_per_ounce_3 << endl;
		cout << "--------" << endl;

		cout << fixed << setprecision(2);
		cout << setw(20) << price_per_ounce_1 << endl;
		cout << setw(10) << price_per_ounce_2 << endl;
		cout << setw(20) << price_per_ounce_3 << endl;
		cout << "--------" << endl;

*/


//				tutorial # 4 02/04/2019
/*
double x, y, k;
cout << "enter the value of x" << endl;
cin >> x;

cout << "enter the value of y" << endl;
cin >> y;

k = ++x * --y;

cout << k << endl;
*/

/*
double x, y, k1, k2, k3, a, b, c, sum = 150, average = 12.368;
*/

/*cout << "enter the value of x:" << endl;
cin >> x;
cout << "enter the value for y:" << endl;
cin >> y; 

k1 = 5 + ++x;
cout << "(a) " << k1 << endl;

k2 = --y - x++;
cout << "(a) " << k2 << endl;

k3 = ++x * --y;
cout << "(c) " << k3 << endl;*/

/*
cout << "enter the value of a:" << endl;
cin >> a;
cout << "enter the value for b:" << endl;
cin >> b;

a = (b++) + 3;
cout << "a = " << a << endl;
c = 2 * a + (++b);
cout << "c = " << c << endl;

b = 2 * (++c) - (a++);
cout << "b = " << b << endl;

*/

/*
//Examples
//Assume that the integer object sum contains the value 150 and that the double object
//average contains the value 12.368 and that the header files iomanip and iostream
//have been included.Show the output generated by the following code segments.Assume
//each is an independent code segment.
//cout << fixed << setprecision(2);
// a)	
cout << "a) " << sum << " " << average << endl;
	
// b)
cout << "b) " << sum << endl;
cout << average << endl;

// c)
	cout << "c) " <<  sum << endl << average << endl;

	cout.precision(2);

// d)
	cout << "d) " << sum << endl << average << endl;

// e)
cout.setf(ios::showpoint);
cout.precision(3);
cout << "e) " << sum << '.' << average << endl;

// f)
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(3);
cout << "f) " << sum << '.' << average << endl;

// g)
cout << setprecision(2) << "g) "<< sum << endl << average << endl;

// h)
cout << fixed << setprecision(3) << "h) " 
<< setw(10) << average << endl << setw(10)
<< sum << endl;

*/

//				reciept
/*
//Write a program that processes a transaction and prints a receipt to the user. The program
//should first prompt the user for how many Coffee and Doughnuts they are purchasing.
//The price for the coffee and doughnuts are 4.99 and 1.99 respectively.The receipt should
//have a similar format as the example below. (Note: Ensure all the currency decimal places
//	line up)
//	Jim Hortons
//	Customer Receipt
//	------------------------ -
//	Coffee x2 9.98
//	Doughnut x1 1.99
//	Subtotal 11.97
//	HST % 13 1.56
//	Total 13.53
	
								// set variables
double priceOfcoffee = 4.99;
int numberOfcoffee;
double coffeeSubtotal;
float priceOfdoughnut = 1.99;
int numberOfdoughnut;
double doughnutSubtotal;
double hst;
double subtotal;
double total;
float cinput;
float dinput;


cout << "please enter the number of coffee to be purchased : " << endl;
cin >> cinput;

cout << " Please enter the number of doughnuts to be purchased : " << endl;
cin >> dinput;
 

numberOfcoffee = cinput + .5;

numberOfdoughnut = dinput + .5;

coffeeSubtotal = numberOfcoffee * priceOfcoffee;
doughnutSubtotal = numberOfdoughnut * priceOfdoughnut;

subtotal = coffeeSubtotal + doughnutSubtotal;
hst = (subtotal * .13);
total = (subtotal + hst);

cout << "" << endl;
cout << fixed << setprecision(2);
cout << setw(2) << "Jim Hortons" << endl;
cout << setw(2) << "Customer Reciept" << endl;
cout << setw(2) << "----------------" << endl;
cout << "" << endl;
cout << setw(2) << "Coffee" << setw(10) << "x" << numberOfcoffee  << setw(10) << coffeeSubtotal << endl;
cout << setw(2) << "Doughnut" << setw(8) << "x" << numberOfdoughnut << setw(10) << doughnutSubtotal << endl;
cout << setw(2) << " " << endl;
cout << setw(2) << "Subtotal" << setw(19) << subtotal << endl;
cout << setw(2) << "Hst" << setw(14) << "%13" << setw(10) << hst << endl;
cout << setw(2) << " " << endl;
cout << setw(2) << "Total" << setw(22) << total << endl;

*/


//				Lecture feb 5 2019


system("pause");
		
return 0;
}
