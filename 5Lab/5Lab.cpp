#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int amount_of_aa(string a)
{
    int b = 1;
    for (int i = 0; i < a.size(); i++)
    {
        int c = 1;
        if ((isalpha(a[i]) != 0))
        {         
            for (int j = i + 1; j < a.size(); j++)
            {
                if (tolower(a[i]) == tolower(a[j])) c++;
          
            }
            if (c > b) b = c;
        }                  
    }
    return b;
}

void word_sort(string a[], int n)
{    
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (amount_of_aa(a[j]) > amount_of_aa(a[j + 1]))
                swap(a[j], a[j + 1]);
}


int main()
{
    int number_of_word = 0;
    string words[1000];
    ifstream come("Nice.txt", ios::in);
    ofstream go("Good.txt", ios::out);
    while(!come.eof())
    {       
        string str;
        come >> str;
        if (amount_of_aa(str) >= 2)
        {
            if ((ispunct(str[str.size() - 1]) != 0)) str.resize(str.size() - 1);
            words[number_of_word] = str;
            number_of_word++;
        }
    }
    word_sort(words, number_of_word);  

    for (int i = 0; i < number_of_word; i++)
    {
        go << words[i] << " " << amount_of_aa(words[i]) << '\n';
    }
}