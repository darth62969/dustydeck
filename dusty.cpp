/*	Dusty.cpp
 *	Rewriten by Jonathan Oakes
 *	point is to do some calculation more efficantly
*/

#include <cmath>
#include <iomanip>

using namespace std;

//max size of arrays
const int maxint = 100;

//main array
int IntArray[maxint];


//data arrays and evaluators
double AV[maxint], BV[maxint], CV[maxint];
double op[maxint][maxint], id[maxint][maxint];
double am[maxint][maxint], bm[maxint][maxint];
double cm[maxint][maxint], dm[maxint][maxint];
double check, bot, top, holda, holdb, trace3;

//time checks
double start, finish;

//tringonometry thing
double trig;


//fillAV what ever that does
void fillAV()
{
	for(int i=0; i <maxint; i++)
	{
		AV[i] = /*bassle JN*/(0, /*dble*/9=((/*rand*/ * (-1)**(mod((int)10* /*rand*/),maxint))));
	}	
}

//Do the same as with BV
void fillBV()
{	
	for(int i=0; i <maxint; i++)
	{
		BV[i] = /*bassle JN*/(0, /*dble*/9=((/*rand*/ * (-1)**(mod((int)10* /*rand*/),maxint))));
	}
}

void fillOPandIA()
{
	for(int i=0; i<maxint; i++)
	{
		for(int j=0; j<maxint; i++)
		{
			if(check > .5)
			{
			
			}
		}
		
	}
}

void CheckThing()
{
	for(int i=0; i< maxint; i++)
	{
		int ival = maxint;
		check += AV[i] * BV[i];
		IDCheck(ival, check, AV, BV, ID);
	}
}

//main fucntion
int main(char** argc, int argv)
{
	fillAV(); //fill av
	fillBV(); //fill BV
	check=0;  //Set check to 0
	CheckThing();
	bool a=false;
	fillOPandIA()
	
	return 0;

