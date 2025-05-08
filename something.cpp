#include <iostream>
#include <string>
using  namespace std;

int main()
{                       /*A     B       C      D    E   F       G    H      I      J    K       L   M      N    O      P      Q     R     S    T    U     V      W     X       Y      Z      0       1        2      3       4       5       6       7        8      9        .       ,         ?*/
    string MorsAlf[39] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..","-----",".----","..---","...--","....-",".....","-....","--...","---..","----.",".-.-.-","--..--","..--.."};
    string NormAlf[39] = {"A","B","C","D","E","F","G","H","I","J","K","L","N","O","P","Q","R","S","T","U","V","W","X","Y","Z","0","1","2","3","4","5","6","7","8","9",".",",","?"};
    string UsrInput = "";
    unsigned int opt = 0;
    while (true)
    {
        cout << "Do you want to decode or encode?[1-dec/2-enc]";
        cin >> opt;
        if(opt==1||opt==2)
        {
            break;
        }
        else
        {
            cout<<"Invalid argument, please enter again."<<endl;
        }
    }
    
    switch(opt)
    {
        case 1:
            cout << "Please enter the message you want to decode: " <<endl;
            cin  >> UsrInput;
            break;
        case 2:
            //encoding
            cout << "Please enter the message you want to encode: "<<endl;
            cin >> UsrInput;
            for(long long i = 0; i < UsrInput.length(); i++)
            {
                for(long long j = 0; j < 39; i++)
                {
                    char CrntLetter = NormAlf[j][0];
                    if(UsrInput[i] == CrntLetter)
                    {
                        cout << MorsAlf[j]<< " ";
                        break;
                    }
                }
            }
            break;
        default:
            cout << "Wrong argument provided. Please run the script again.";
            exit(1);
    }

    return 0;
}