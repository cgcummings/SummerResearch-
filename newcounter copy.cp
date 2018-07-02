#include <iostream>
#include <fstream>
#include <map>
using namespace std;

int main()
{
    int sum = 0; 
    int counter = 0;
    int input = 0;
    std::map<int, int> hits; // hit counter

    std::ifstream in("hits.txt");
    if (in.is_open())
    {
        while (in >> input)
        {
            hits[input]++;
            sum += input; 
            ++counter;
        }
    }
    else
    {
        std::ofstream out("hits.txt");
        int input;

        do
        {
            std::cout << "Please enter the hit data: "; 

            // after putting in data, input zero 
            if (!(std::cin >> input) || (input == 0))
                break; 

            out << input << " ";

            hits[input]++;
            sum += input; 
            ++counter;
        }
        while (true);
    }

    std::cout << "Sum of hits entered: " << sum << endl ; 
    std::cout << "Number of hits entered: " << counter << endl ;

    if (counter < 100)
    {
        std::cout << "The hits are less than 100" << std::endl;
    }
    else if (counter > 100) 
    {
        std::cout << "The hits are greater than 100" << std::endl;
    }
    else
    {
        std::cout << "The hits are equal to 100" << std::endl;
    }

    for (std::map<int, int>::iterator iter = hits.begin(); iter != hits.end(); ++iter)
    {
        std::map<int, int>::value_type &p = *iter;

        if (p.first == 11)
            std::cout << "there was " << p.second << " electrons counted" << std::endl;
        else if (p.first == -11)
            std::cout << "there was " << p.second << " posatrons counted" << std::endl;
        else
            std::cout << "there were " << p.second << " number " << p.first << "'s counted" << std::endl;
    }
    

    return 0;
}

/*  Ideas for next steps next steps
// COMPLETED 1). Make the program be able to use a .txt made with the selective step printer or whatever else may be used 
GETTING THERE 2). While being able to count the number of hits is good the program needs to be able to classify hits from 
 Specific particles (using the Monte carol code) and output what exactly hit and how many of that particle hit.
 3). The program needs to also tell us where a particle hit
 4). Maybe turn this into a root thing to get some images of the data  
5). just noticed the program funtion that tells us if the hits are =, <, > 100 are based of the sum and not the counter i will fix that tomorrow 
*/

 
