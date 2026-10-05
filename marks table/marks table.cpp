#include <iostream>
using namespace std;

class MarksTable
{
private:
    int marks[3][3];

public:
    MarksTable() 
    {
        int data[3][3] = 
        {
            {80, 85, 90},
            {75, 88, 92},
            {90, 95, 87}
        };

        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                marks[i][j] = data[i][j];
    }

    void display() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++)
                cout << marks[i][j] << " ";
            cout << endl;
        }
    }
};

int main()
{
    MarksTable table;
    table.display();

    return 0;
}