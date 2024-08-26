//Kautik Verma
//PRN:23070123073
//EnTC A3
//Experiment 5.c
#include <iostream>
using namespace std;
int main(){
    char letter;
    cout<<"Enter a character: ";
    cin>>letter;
    if (letter=='a'||letter=='A'||letter=='e'||letter=='E'||letter=='i'||letter=='I'||letter=='o'||letter=='O'||letter=='u'||letter=='U'){
        cout<<letter<<" is a Vowel";
    }
    else{
        cout<<letter<<" is a Consonant";
    }
}
/*OUTPUT
Enter a character: t
t is a Consonant*/
