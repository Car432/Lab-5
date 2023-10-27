#include <iostream>

int main(){

    int grades[100];
    float sum=0;
    int count=0;
    for(int i =0; i<100;i++){
    	    int grade=0;
    	    std::cout<<"Enter grade (or -1 to end): ";
	    std::cin>>grade;
	    
	    if (grade==-1)
	    {
		break;	
	    }
	    else
	    {
	      grades[i]=grade;
	      sum+=grade;
	      count+=1;
	    }
    	    
    }
    std::cout<<sum/count;
    

}
