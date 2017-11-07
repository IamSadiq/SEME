#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
int menuOption();

int main()
{

	int option;
	int exit;
	while (true){
	option = menuOption();
	if (option == 1)
	{
		float x, y;
		float a, b, c, d, e, f;

		cout << "The equations are of the form: \n";
		cout << "______________________________ \n";
		cout << "============================== \n";
		cout << " ax + by = c\n";
		cout << " dx + ey = f\n";
		cout << "______________________________ \n";
		cout << "============================== \n";
		cout << "\nEnter the Coefficients and Constants in the Order a,b,c,d,e & f: ";

		cout << "\nEnter coefficient a, as shown above: ";
		cin >> a;
		cout << "\nEnter b value: ";
		cin >> b;
		cout << "\nEnter c value: ";
		cin >> c;
		cout << "\nEnter d value: ";
		cin >> d;
		cout << "\nEnter e value: ";
		cin >> e;
		cout << "\nEnter f value: ";
		cin >> f;

		cout << "\nThe equations you have input are: \n";
		cout << " "<< a <<"x + "<< b <<"y = "<< c <<"\n";
		cout << " "<< d <<"x + "<< e <<"y = "<< f <<"\n";

		// d * (ax + by = c) ==>> (d*a)x + (d*b)y = (d*c) --> (3)
		// a * (dx + ey = f) ==>> (a*d)x + (a*e)y = (a*f) --> (4)
		// (3) - (4)

		// 0*x + ((d*b)-(a*e))y = ((d*c)-(a*f))

		y = ((d*c)-(a*f))/((d*b)-(a*e));


		// we solve for x with our FOUND "y" value ==> ax + by = c
		x = (c - (b*y))/a;

		cout << "\nThe solutions to the above equations are: \n";
		cout << "______________________________\n";
		cout << "============================== \n";
		cout << " \nY: " << y << "\n";
		cout << " \nX: " << x << "\n";
		cout << "______________________________ \n";
		cout << "==============================\n";
		cout<<"Results Successfully Displayed, returning to Main-Menu\n\n";
	}
	else if (option == 2)
	{
		float x,y,z;
		float a,b,c,d,e,f,g,h,i,j,k,l;

		cout << "\n_________________________________\n";
		cout << "\n=================================\n";
		cout << "\nThe equations are of the form: \n";
		cout << " ax + by + cz = d\n";
		cout << " ex + fy + gz = h\n";
		cout << " ix + jy + kz = l\n";
		cout << "\n_________________________________\n";
		cout << "\n=================================\n";

		cout << "\nEnter the variable coefficients as shown above: \n";

		cout << "\nEnter a parameter for a: ";
		cin >> a;

		cout <<"\nEnter b parameter: ";
		cin >> b;

		cout << "\nEnter c parameter: ";
		cin >> c;

		cout << "\nEnter d parameter: ";
		cin >> d;

		cout << "\nEnter e parameter: ";
		cin >> e;

		cout << "\nEnter f parameter: ";
		cin >> f;

		cout << "\nEnter g parameter: ";
		cin >> g;

		cout << "\nEnter h parameter: ";
		cin >> h;

		cout << "\nEnter i parameter: ";
		cin >> i;

		cout << "\nEnter j parameter: ";
		cin >> j;

		cout << "\nEnter k parameter: ";
		cin >> k;

		cout << "\nEnter l parameter: ";
		cin >> l;

		cout << "\nThe equations you have input are: \n";
		cout << " "<< a <<"x + "<< b <<"y + "<< c <<"z = "<< d <<"\n";
		cout << " "<< e <<"x + "<< f <<"y + "<< g <<"z = "<< h <<"\n";
		cout << " "<< i <<"x + "<< j <<"y + "<< k <<"z = "<< l <<"\n";

		// t = a*x + b*y + c*z = d
		// s = e*x + f*y + g*z = h
		// u = i*x + j*y + k*z = l

		// t * e = (e*a)x + (e*b)y + (e*c)z = (e*d)
		// s * a = (a*e)x + (a*f)y + (a*g)z = (a*h)
		// (t*e) - (s*a) = 0*x + ((e*b) - (a*f))y + ((e*c) - (a*g))z = ((e*d) - (a*h))

		// ((e*b) - (a*f))y + ((e*c) - (a*g))z = ((e*d) - (a*h))   --> eqn(4)

		// u * a = (a*i)x + (a*j)y + (a*k)z = (a*l)
		// t * i = (i*a)x + (i*b)y + (i*c)z = (i*d)

		// (u*a) - (t*i) = 0*x + ((a*j)-(i*b))y + ((a*k)-(i*c))z = ((a*l)-(i*d))

		// ((a*j)-(i*b))y + ((a*k)-(i*c))z = ((a*l)-(i*d))  --> eqn (5)

		// ((a*j)-(i*b)) * eqn (4)
		// (((a*j)-(i*b)) * ((e*b)-(a*f)))y + (((a*j)-(i*b)) * ((e*c)-(a*g)))z = ((a*j)-(i*b)) * ((e*d) - (a*h)) --> eqn(6)

		// ((e*b) - (a*f)) * eqn (5)
		// (((e*b) - (a*f)) * ((a*j)-(i*b)))y + (((e*b) - (a*f)) * ((a*k)-(i*c)))z  = ((e*b) - (a*f)) * ((a*l)-(i*d)) ---> eqn(7)

		// (6) - (7) = 0*y + [(((a*j)-(i*b)) * ((e*c)-(a*g)))  -  (((e*b) - (a*f)) * ((a*k)-(i*c)))]z = [((a*j)-(i*b)) * ((e*d) - (a*h))] - [((e*b) - (a*f)) * ((a*l)-(i*d))]

		z = ((((a*j)-(i*b)) * ((e*d) - (a*h))) - (((e*b) - (a*f)) * ((a*l)-(i*d)))) / ((((a*j)-(i*b)) * ((e*c)-(a*g)))  -  (((e*b) - (a*f)) * ((a*k)-(i*c))));

		// from eqn (5)

	 	y  = (((a*l)-(i*d)) - (((a*k)-(i*c))*z)) / ((a*j)-(i*b));

		// from t = a*x + b*y + c*z = d

		x = (d - (c*z) - (b*y)) / a;

		cout << "\nThe solutions to the above equations are: \n";
		cout << "______________________________\n";
		cout << "============================== \n";
		cout << " \nX: " << x << "\n";
		cout << " \nY: " << y << "\n";
		cout << " \nZ: " << z << "\n";
		cout << "______________________________ \n";
		cout << "==============================\n";
		cout<<"Results Successfully Displayed, returning to Main-Menu\n\n";
	}
	else if (option == 3)
	{
		float w,x,y,z;
		float a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t;

		cout << "\n_________________________________\n";
		cout << "\n=================================\n";
		cout << "\nThe equations are of the form\n";
		cout << " aw + bx + cy + dz = e\n";
		cout << " fw + gx + hy + iz = j\n";
		cout << " kw + lx + my + nz = o\n";
		cout << " pw + qx + ry + sz = t\n";
		cout << "\n_________________________________\n";
		cout << "\n=================================\n";

		cout << "\nEnter the variable coefficients as shown above: \n";

		cout << "\nEnter a parameter for a: ";
		cin >> a;

		cout <<"\nEnter b parameter: ";
		cin >> b;

		cout << "\nEnter c parameter: ";
		cin >> c;

		cout << "\nEnter d parameter: ";
		cin >> d;

		cout << "\nEnter e parameter: ";
		cin >> e;

		cout << "\nEnter f parameter: ";
		cin >> f;

		cout << "\nEnter g parameter: ";
		cin >> g;

		cout << "\nEnter h parameter: ";
		cin >> h;

		cout << "\nEnter i parameter: ";
		cin >> i;

		cout << "\nEnter j parameter: ";
		cin >> j;

		cout << "\nEnter k parameter: ";
		cin >> k;

		cout << "\nEnter l parameter: ";
		cin >> l;

		cout << "\nEnter m parameter: ";
		cin >> m;

		cout << "\nEnter n parameter: ";
		cin >> n;

		cout << "\nEnter o parameter: ";
		cin >> o;

		cout << "\nEnter p parameter: ";
		cin >> p;

		cout << "\nEnter q parameter: ";
		cin >> q;

		cout << "\nEnter r parameter: ";
		cin >> r;

		cout << "\nEnter s parameter: ";
		cin >> s;

		cout << "\nEnter t parameter: ";
		cin >> t;

		cout << "\nThe equations you have input are: \n";
		cout << " "<< a <<"w + "<< b <<"x + "<< c <<"y + "<< d <<"z = "<< e <<"\n";
		cout << " "<< f <<"w + "<< g <<"y + "<< h <<"y + "<< i <<"z = "<< j <<"\n";
		cout << " "<< k <<"w + "<< l <<"y + "<< m <<"y + "<< n <<"z = "<< o <<"\n";
		cout << " "<< p <<"w + "<< q <<"y + "<< r <<"y + "<< s <<"z = "<< t <<"\n";

		// aw + bx + cy + dz = e --> eqn (1)
		// fw + gx + hy + iz = j --> eqn (2)
		// kw + lx + my + nz = o --> eqn (3)
		// pw + qx + ry + sz = t --> eqn (4)

		// f * (1) ==>> (f*a)w + (f*b)x + (f*c)y + (f*d)z = (f*e) --> (5)
		// a * (2) ==>> (a*f)w + (a*g)x + (a*h)y + (a*i)z = (a*j) --> (6)


		// (5)-(6) ===>> o*w + ((f*b)-(a*g))x + ((f*c)-(a*h))y + ((f*d)-(a*i))z = ((f*e)-(a*j))

		//((f*b)-(a*g))x + ((f*c)-(a*h))y + ((f*d)-(a*i))z = ((f*e)-(a*j)) --> (7)

		// k * (1) ==>> (k*a)w + (k*b)x + (k*c)y + (k*d)z = (k*e) ---> (8)
		// a * (3) ==>> (a*k)w + (a*l)x + (a*m)y + (a*n)z = (a*o) --> (9)

		// (8)-(9) ===>> 0*w + ((k*b)-(a*l))x + ((k*c)-(a*m))y + ((k*d)-(a*n))z = ((k*e)-(a*o))

		// ((k*b)-(a*l))x + ((k*c)-(a*m))y + ((k*d)-(a*n))z = ((k*e)-(a*o)) --> (10)

		// p * (1) ==>> (p*a)w + (p*b)x + (p*c)y + (p*d)z = (p*e) --> (11)
		// a * (4) ==>> (a*p)w + (a*q)x + (a*r)y + (a*s)z = (a*t) --> (12)


		// (11)-(12) ===>> 0*w + ((p*b)-(a*q))x + ((p*c)-(a*r))y + ((p*d)-(a*s))z = ((p*e)-(a*t))
		// ((p*b)-(a*q))x + ((p*c)-(a*r))y + ((p*d)-(a*s))z = ((p*e)-(a*t)) -->(13)


		// EQUATIONS WITH THREE VARIABLES (W = ELIMINATED)

			//((f*b)-(a*g))x + ((f*c)-(a*h))y + ((f*d)-(a*i))z = ((f*e)-(a*j)) --> (7)
		//((k*b)-(a*l))x + ((k*c)-(a*m))y + ((k*d)-(a*n))z = ((k*e)-(a*o)) --> (10)
		//((p*b)-(a*q))x + ((p*c)-(a*r))y + ((p*d)-(a*s))z = ((p*e)-(a*t)) -->(13)



		//((k*b)-(a*l)) * (7) ==>> (((k*b)-(a*l))*((f*b)-(a*g)))x + (((k*b)-(a*l))*((f*c)-(a*h)))y + (((k*b)-(a*l))*((f*d)-(a*i)0)z = (((f*e)-(a*j))*((k*b)-(a*l))) --> (14)
		//((f*b)-(a*g)) * (10) ==>> (((f*b)-(a*g))*((k*b)-(a*l)))x + (((f*b)-(a*g))*((k*c)-(a*m)))y + (((f*b)-(a*g))*((k*d)-(a*n)))z = (((f*b)-(a*g))*((k*e)-(a*o))) --> (15)

		// (15)-(14) ===>> 0*X + [(((k*b)-(a*l))*((f*c)-(a*h))) - ((k*c)-(a*m)))]y + [(((k*b)-(a*l))*((f*d)-(a*i))) - ((k*d)-(a*n))] = [(((f*e)-(a*j))*((k*b)-(a*l))) - ((k*e)-(a*o))]



		//[(((k*b)-(a*l))*((f*c)-(a*h))) - ((k*c)-(a*m)))]y + [(((k*b)-(a*l))*((f*d)-(a*i))) - ((k*d)-(a*n))]z = [(((f*e)-(a*j))*((k*b)-(a*l))) - ((k*e)-(a*o))] --> (16)



		//((p*b)-(a*q)) * (7) ==>> (((p*b)-(a*q))*((f*b)-(a*g)))x + (((p*b)-(a*q))*((f*c)-(a*h)))y + (((p*b)-(a*q))*((f*d)-(a*i)))z = (((p*b)-(a*q))*((f*e)-(a*j))) --> (17)
		//((f*b)-(a*g)) * (13) ==>> (((f*b)-(a*g))*((p*b)-(a*q)))x + (((f*b)-(a*g))*((p*c)-(a*r)))y + (((f*b)-(a*g))*((p*d)-(a*s)))z = (((f*b)-(a*g))*((p*e)-(a*t))) --> (18)


		// (17)-(18) ===>> 0*x + [(((p*b)-(a*q))*((f*c)-(a*h))) - ((p*c)-(a*r))]y  +  [(((p*b)-(a*q))*((f*d)-(a*i))) - ((p*d)-(a*s))]z = [(((p*b)-(a*q))*((f*e)-(a*j))) - ((p*e)-(a*t))]

		// [(((p*b)-(a*q))*((f*c)-(a*h))) - ((p*c)-(a*r))]y  +  [(((p*b)-(a*q))*((f*d)-(a*i))) - ((p*d)-(a*s))]z = [(((p*b)-(a*q))*((f*e)-(a*j))) - ((p*e)-(a*t))] --> (19)



		// EQUATIONS WITH TWO VARIABLES (W & X ELIMINATED)

		//[(((k*b)-(a*l))*((f*c)-(a*h))) - ((k*c)-(a*m)))]y + [(((k*b)-(a*l))*((f*d)-(a*i))) - ((k*d)-(a*n))]z = [(((f*e)-(a*j))*((k*b)-(a*l))) - ((k*e)-(a*o))] --> (16)
		//[(((p*b)-(a*q))*((f*c)-(a*h))) - ((p*c)-(a*r))]y  +  [(((p*b)-(a*q))*((f*d)-(a*i))) - ((p*d)-(a*s))]z = [(((p*b)-(a*q))*((f*e)-(a*j))) - ((p*e)-(a*t))] --> (19)


		//[(((k*b)-(a*l))*((f*c)-(a*h))) - ((k*c)-(a*m)))] * (19) ==>> [[(((k*b)-(a*l))*((f*c)-(a*h))) - ((k*c)-(a*m)))]*[(((p*b)-(a*q))*((f*c)-(a*h))) - ((p*c)-(a*r))]]y + [(((p*b)-(a*q))*((f*c)-(a*h))) - ((p*c)-(a*r))]*[[(((p*b)-(a*q0)*((f*d)-(a*i))) - ((p*d)-(a*s))]]z = [[(((p*b)-(a*q))*((f*c)-(a*h))) - ((p*c)-(a*r))]*[(((p*b)-(a*q))*((f*e)-(a*j))) - ((p*e)-(a*t))]] --> (20)

		// [(((p*b)-(a*q))*((f*c)-(a*h))) - ((p*c)-(a*r))] * (16) ==>> [[(((p*b)-(a*q))*((f*c)-(a*h))) - ((p*c)-(a*r))]*[(((k*b)-(a*l))*((f*c)-(a*h))) - ((k*c)-(a*m)))]]y  + [[(((p*b)-(a*q))*((f*c)-(a*h))) - ((p*c)-(a*r))]*[(((p*b)-(a*q))*((f*d)-(a*i))) - ((p*d)-(a*s))]]z = [[(((p*b)-(a*q))*((f*c)-(a*h))) - ((p*c)-(a*r))]*[(((f*e)-(a*j))*((k*b)-(a*l))) - ((k*e)-(a*o))]] --> (21)



		// (20)-(21) ==>> 0*y + [[(((p*b)-(a*q))*((f*c)-(a*h))) - ((p*c)-(a*r))]*[[(((p*b)-(a*q0)*((f*d)-(a*i))) - ((p*d)-(a*s))]] -  [[(((p*b)-(a*q))*((f*c)-(a*h))) - ((p*c)-(a*r))]*[(((p*b)-(a*q))*((f*d)-(a*i))) - ((p*d)-(a*s))]]z = [[[(((p*b)-(a*q))*((f*c)-(a*h))) - ((p*c)-(a*r))]*[(((p*b)-(a*q))*((f*e)-(a*j))) - ((p*e)-(a*t))]] - [[(((p*b)-(a*q))*((f*c)-(a*h))) - ((p*c)-(a*r))]*[(((f*e)-(a*j))*((k*b)-(a*l))) - ((k*e)-(a*o))]]]

		// [[(((p*b)-(a*q))*((f*c)-(a*h))) - ((p*c)-(a*r))]*[[(((p*b)-(a*q0)*((f*d)-(a*i))) - ((p*d)-(a*s))]] -  [[(((p*b)-(a*q))*((f*c)-(a*h))) - ((p*c)-(a*r))]*[(((p*b)-(a*q))*((f*d)-(a*i))) - ((p*d)-(a*s))]]z = [[[(((p*b)-(a*q))*((f*c)-(a*h))) - ((p*c)-(a*r))]*[(((p*b)-(a*q))*((f*e)-(a*j))) - ((p*e)-(a*t))]] - [[(((p*b)-(a*q))*((f*c)-(a*h))) - ((p*c)-(a*r))]*[(((f*e)-(a*j))*((k*b)-(a*l))) - ((k*e)-(a*o))]]]

		float u = ((((((p*b)-(a*q))*((f*c)-(a*h))) - ((p*c)-(a*r)))*((((p*b)-(a*q))*((f*e)-(a*j))) - ((p*e)-(a*t)))) - (((((p*b)-(a*q))*((f*c)-(a*h))) - ((p*c)-(a*r)))*((((f*e)-(a*j))*((k*b)-(a*l))) - ((k*e)-(a*o)))));
		float v = (((((p*b)-(a*q))*((f*c)-(a*h))) - ((p*c)-(a*r)))*(((((p*b)-(a*q))*((f*d)-(a*i))) - ((p*d)-(a*s)))) -  (((((p*b)-(a*q))*((f*c)-(a*h))) - ((p*c)-(a*r)))*((((p*b)-(a*q))*((f*d)-(a*i))) - ((p*d)-(a*s)))));

		z = u/v;
		y = (((((f*e)-(a*j))*((k*b)-(a*l))) - ((k*e)-(a*o))) - ((((k*b)-(a*l))*((f*d)-(a*i))) - (((k*d)-(a*n))*z))/((((k*b)-(a*l))*((f*c)-(a*h))) - ((k*c)-(a*m))));
		x = (((f*e)-(a*j)) - (((f*d)-(a*i))*z) - (((f*c)-(a*h))*y))/((f*b)-(a*g));
		w = (e - (d*z) - (c*y) - (b*x))/a;

		cout << "\nThe solutions to the above equations are: \n";
		cout << "______________________________\n";
		cout << "============================== \n";
		cout << " \nW: " << w << "\n";
		cout << " \nX: " << x << "\n";
		cout << " \nY: " << y << "\n";
		cout << " \nZ: " << z << "\n";
		cout << "______________________________ \n";
		cout << "==============================\n";
		cout<<"Results Successfully Displayed, returning to Main-Menu\n\n";
	}
	else if (option == 4)
	{
		cout << "--Program...TERMINATED--\n";
		cout << "\n--THANK YOU USING SIMULTANEOUS EQUATION MADE EASY--\n";
		cout << "\nDeveloper/Programmer: Siddique Adam \n";
		cout << "\nSpecial Thanks to the Mingw crew for the GCC Compiler\n";
		return 0;
	}
	}
	// Solves a simultaneous equation
	// Coding by Siddik Adam
	// www.facebook.com/siddiqueadam
	// www.twitter.com/dhatsidd
system("pause");

	return 0;
}
int menuOption(){
	int option= 0;
	cout << "===============================================================================\n";
	cout << "                                                                               \n";
	cout << "------------------------SIMULTANEOUS EQUATION MADE EASY------------------------\n";
	cout << "                                                                               \n";
	cout << "==============================CHOOSE AN OPTION=================================\n";
	cout << "Press 1 to solve for 2 unknowns              Press 2 to solve for 3 unknowns   \n";
	cout << "Press 3 to solve for 4 unknowns              Press 4 to Quit                   \n";
	cout << "                                                                               \n";
	cout << "===============================================================================\n";
	cout << "==========CODING==============BY:SIDDIQUE ADAM============@abu_bakr_adam=======\n";

	cin >> option;
	if (option >0 && option <5){
		return option;
	}

	else {
		cout<<"--Incorrect Value--\n\n";
		return menuOption();
	}


}
