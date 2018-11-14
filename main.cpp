#include <iostream>
//jdhjfhdihfihh
//kdwjhfihigyw

using namespace std;

int main()
{
    int array[10][3];
    for(int i=0;i<10;i++)
    {
        int k=0;
        cout<<"enter student number"<<endl;
        for(int j=0;j<3;j++)
        {
            cin>>array[i][j];
            if (array[i][j]>100)
            {
                cout<<"it is invalid input,please enter a number between 0-100"<<endl;
                cin>>array[i][j];
            }
                k=k+array[i][j];
        }
        k=k/3;
        cout<<"this student average is "<<k<<endl<<endl;
    }
        for(int i=0;i<3;i++)
            {
                int l=0;
                for (int j=0;j<10;j++)
                    {
                        l=l+array[i][j];
                    }
                l=l/10;
                cout<<"this subject average is "<<l<<endl;
            }
    for(int i=0;i<10;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<array[i][j];
            cout<<" ";
        }
        cout<<endl;
    }


    return 0;
}
