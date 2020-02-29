#include <iostream>
using namespace std;
char matrix[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char player = 'X';

void Matrix_Environment()
{
    for(int row=0; row<3; row++)
    {
        for(int column=0; column<3; column++)
        {
            cout << matrix[row][column]<<' ';
        }
        cout<<endl;
    }
}

void input()
{
    int x1;
    cout << "Press Number:";
    cin >> x1;
    if (x1 == 1)
       matrix[0][0] = player;
    else if (x1 == 2)
       matrix[0][1] = player;
    else if (x1 == 3)
       matrix[0][2] = player;
    else if (x1 == 4)
       matrix[1][0] = player;
    else if (x1 == 5)
       matrix[1][1] = player;
    else if (x1 == 6)
       matrix[1][2] = player;
    else if (x1 == 7)
       matrix[2][0] = player;
    else if (x1 == 8)
       matrix[2][1] = player;
    else if (x1 == 9)
       matrix[2][2] = player;
}

void Switch_Player()
{
    if (player == 'X')
    {
       player = 'O';
    } 
    else
    {
       player = 'X';
    }   
}

int main()
{
    Matrix_Environment();
    while(1);
    {
        input();
        Matrix_Environment();
        Switch_Player();
    }
    system("pause");
    return 0;
}
