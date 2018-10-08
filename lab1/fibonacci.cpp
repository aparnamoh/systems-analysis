#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(void){
	double a=0, b=1, c=0, n=0, i;
	std::cout<<"Enter the number of Fibonacci terms you would like printed: " << endl;
	std::cin>>n;
	std::cout<<"Output: "<<endl;
	
  for(i=1; i<=n; i++){	
		c = a + b;
    		std::cout<<c<<", ";
		a = b;
		b = c;
	}
	
	return 0;
}
