#include <iostream>
#include <fstream>
#include <map>
using namespace std;

int main()
{
    int sum = 0; 
    int counter = 0;
    int input = 0;
    map<int, int> hits; // hit counter

    ifstream in("hits.txt");
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
        ofstream out("hits.txt");
        int input;
    }

    cout << "Sum of hits entered: " << sum << endl ; 
    cout << "Number of hits entered: " << counter << endl ;

    if (counter < 100)
    {
        cout << "The hits are less than 100" << endl;
    }
    else if (counter > 100) 
    {
        cout << "The hits are greater than 100" << endl;
    }
    else
    {
        cout << "The hits are equal to 100" << endl;
    }

    for (map<int, int>::iterator iter = hits.begin(); iter != hits.end(); ++iter)
    {
        map<int, int>::value_type &p = *iter;

        if (p.first == 11)
            cout << "there was " << p.second << " electrons counted" << endl;
        else if (p.first == -11)
            cout << "there was " << p.second << " positrons counted" << endl;
        else
            cout << "there were " << p.second << " number " << p.first << "'s counted" << std::endl;
    }
    

    return 0;
}
