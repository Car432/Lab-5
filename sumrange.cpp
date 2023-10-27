#include <iostream>

int main(){
  int x =0;
  int y =0;
  int sum;
  std::cin>>x;
  std::cin>>y;

  for (int z=x; z<=y;z++)
    {
      sum+=z;
    }
  std::cout<<sum;
  
}
