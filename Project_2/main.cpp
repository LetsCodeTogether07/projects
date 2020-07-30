#include <iostream>
#include<string>

using namespace std;

int main()
{
   string sentence;
   int count = 0;
   char arr[] = {'a', 'e', 'i', 'o', 'u'};

   cout<<"Enter a sentence: ";
   getline(cin, sentence);


   for(int i =0;i<=sentence.size();i++)
   {
       for(int j= 0;j<5;j++)
       if(sentence[i] == arr[j])
        count++;
   }

   for(int i =0;i<=sentence.size();i++)
   {
       if(int(sentence[i]) >=97 || int(sentence[i])<=122)

       {
           int temp = int(sentence[i]) - 32;
           sentence[i] = char(temp);
       }
   }
   cout<<sentence<<endl;

cout<<"vowels: "<<count;
   return 0;
}
