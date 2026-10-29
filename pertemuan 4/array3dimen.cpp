// Array 3D
#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int arr[3][3][4], n = 2;
    //3 baris dan 4 kolom 
    //paling atas itu ada 2
    //x=4,y,z 
    //klau dikasi nilai besar pakai flot klau nilainya gak besar pakai int aj 

    cout << "Array 3D\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++) 
        {
            for (int k = 0; k < 4; k++)
            {
                arr[i][j][k] = n;
                cout << arr[i][j][k] << "\t";
                if (k < 3) cout << " - \t"; 
                n *= 2;
            }
            cout << "\n";
        }
        cout << "\n";
    }

    return 0;
}