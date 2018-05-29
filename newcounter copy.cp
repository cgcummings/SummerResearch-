#include <iostream>
#include <vector>
#include <string>
#include <fstream>
    
  using namespace std;
    
    
  int main() {
        

  using std::cin;
  using std::cout;
  using std::endl;


  int input=1; 
  int sum=0; 
  int counter=1;

while (input != 0) // best way to end the loop?
{
  std::cout << "Please enter the hit data: "; 
  std::cin >> input; 

if 
  (input == 0) // after puting in data input zero 
{
break;
}
else if 
  (input != 0)
{
  sum += input; // add together numbers not important but maybe useful later 
  counter++; // tells us how many hits there are 
}

}
  counter = counter - 1 ; // so 0 is not counted as a hit 
  std::cout << "Sum of hits entered: " << sum << endl ; // not that important 
  std::cout << "Number of hits entered: " << counter << endl ;

if
  ( sum < 100 ) // lines just for fun maybe useful 
{
  std::cout << "The hits are less than 100" ;
}
else if
  ( sum > 100 ) 
{
  std::cout << "The hits are greater than 100" ;
}
else if
  ( sum == 100 ) 
{
  std::cout << "The hits are equal to 100" ;
}
  }

//  Ideas for next steps next steps
// 1). Make the program be able to use a .txt made with the selective step printer or whatever else may be used 
// 2). While being able to count the number of hits is good the program needs to be able to classify hits from 
// Specific particles (using the Monte carol code) and output what exactly hit and how many of that particle hit.
// 3). The program needs to also tell us where a particle hit
// 4). Maybe turn this into a root thing to get some images of the data  
// 5). just noticed the program funtion that tells us if the hits are =, <, > 100 are based of the sum and not the counter i will fix that tomorrow 


        
        
  
