#include <iostream>
#include <string>
using namespace std;

int main()
{ /*A     B       C      D    E   F       G    H      I      J    K       L   M      N    O      P      Q     R     S    T    U     V      W     X       Y      Z      0       1        2      3       4       5       6       7        8      9        .       ,         ?*/
    string MorsAlf[39] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", ".-.-.-", "--..--", "..--.."};
    string NormAlf[39] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", ".", ",", "?"};
    string UsrInput = "";
    unsigned short int opt = 0;
    bool space = false;
    while (true)
    {
        cout << "Do you want to decode or encode?[1-dec/2-enc]";
        cin >> opt;
        if (opt == 1 || opt == 2)
        {
            break;
        }
        else
        {
            cout << "Invalid argument, please enter again." << endl;
        }
    }

    cout << endl;
    cin.ignore();

    switch(opt)
    {
        case 1:
        {
            // decoding
            cout << "Please enter the message you want to dencode: " << endl;
            getline(cin, UsrInput);
            string currentCode = "";
            cout << "This is \"" << UsrInput << "\" in plain text: " << endl;
            for (unsigned long long i = 0; i < UsrInput.length(); i++)
            {
                bool found = false;
                if(UsrInput[i]==' '||i=UsrInput.length())
                {
                    if (UsrInput[i] == '/')
                    {
                        cout << " ";
                        continue;
                    }

                    for (unsigned long long j = 0; j < 39; j++)
                    {
                        
                    }  
                }
            }
            break;
        }
        case 2:
        {
            // encoding
            cout << "Please enter the message you want to encode: " << endl;
            getline(cin, UsrInput);
            cout << "This is \"" << UsrInput << "\" in Morse Code: " << endl;
            for (unsigned long long i = 0; i < UsrInput.length(); i++)
            {
                for (unsigned long long j = 0; j < 39; j++)
                {
                    if (UsrInput[i] == ' ')
                    {
                        if (!space)
                        {
                            cout << "/ ";
                            space = true;
                        }
                        continue;
                    }

                    space = false;

                    char CrntLetter = NormAlf[j][0];
                    if (toupper(UsrInput[i]) == CrntLetter)
                    {
                        cout << MorsAlf[j] << " ";
                        break;
                    }
                }   
            }
            break;
        }

        default:
        {
            cout << "Wrong option was provided. Please run the script again.";
            exit(1);
            return 1;
            break;
        }
    }

    cout <<endl<<endl<<endl;

    return 0;
}