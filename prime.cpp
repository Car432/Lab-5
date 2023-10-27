#include <iostream>

  
bool isPrime(int number){

  for(int x=number-1; x>1; x--)
  {
      if(number%x==0)
	{
	  return false;
	}
  }
  return true;
  
}



int main(){


  
  int num=0;
  std::cout<<"Enter an integer\n";
	     
  std::cin>>num;

  std::cout<<"primes to "<<num<<" are: ";
  for(int i=2;i<=num;i++)
  {
    if(isPrime(i))
    {

      std::cout<<i<<" ";
    }
  }
  
}


