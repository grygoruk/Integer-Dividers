#include <iostream>
#include <string>

using namespace std;

int main ()
{
  int in, k=0;
  int *div = new int [1]; //Dynamic array initialization
  
  cout << "Input your number: ";
  cin >> in; //User input
  cout << endl << endl;
  
  for (int i=1; i<=in/2; i++){
  	if (in%i==0){ //Condition check
  		div[k] = i;
		k++;
  	}
  }
  
  div[k]=in; //Including the number itself as the last divider
  k++;
  
  cout<<"k: "<<k<<endl<<endl; //Printing the number of dividers
  cout << "Dividers: " << endl << endl;
  for (int i=0; i<k; i++)
  cout << "div[" << i << "]: " << div[i] << endl; //Printing all dividers to the console
  
  delete [] div; //Cleaning the memory
  
  return 0;
}
