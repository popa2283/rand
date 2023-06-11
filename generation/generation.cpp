#include  <iostream>
#include <time.h>  
#include <vector>  
#include <string>  
#include<Windows.h>  
#include < math.h>  
#include <algorithm> 
#include <fstream> 
#include <map> 
using namespace std;
HANDLE hand = GetStdHandle(STD_OUTPUT_HANDLE);
int main()
{
     srand(time(NULL)); 
    int rand_number;
    vector<int>vec_rand;
    int d = 0;
    int s = 0;
    int size_vec = 0;
    while (d < 5) {
        rand_number = rand() % 11;
        if (d == 0) {
            vec_rand.push_back(rand_number);
            d++;
        }
        else {
            for (size_t i = 0; i < vec_rand.size(); i++)
            {
                if (vec_rand[i] == rand_number) {
                    s++;
                }
            }
            if (s == 0) {
                vec_rand.push_back(rand_number);
                d++;
                size_vec++;
            }
            s = 0;
        }
    }
    sort(vec_rand.begin(), vec_rand.end());
    for (size_t i = 0; i < vec_rand.size(); i++)
    {
        cout << vec_rand[i] << " ";
    }
    cout << endl;
    ofstream print("hello.txt", ios::app);

    if (print.is_open())
    {
        
        for (size_t i = 0; i < vec_rand.size(); i++)
        {
            print << vec_rand[i] ;
        }
        
    }
    print.close();
}


