#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int mtx[50][50];
    int m,n;
    cout<<"Panjang Baris Matriks : ";
    cin>>m;
    cout<<"Panjang Kolom Matriks : ";
    cin>>n;
    cout<<endl;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cout<<"Matriks ["<<i<<"]["<<j<<"] : ";
            cin>>mtx[i][j];
           if ((m==j+i-1) && (n==j+i-1))
            {
                mtx[i][j]=0;
            }
        }
    }
    cout<<endl;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cout<<setw(5)<<mtx[i][j];
        }
        cout<<endl;
    }
    return 0;
}
