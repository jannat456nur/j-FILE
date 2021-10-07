


#include<iostream>
using namespace std;
int main()
{
    int coin, n, i, j, c;

    printf("Coin limit: ");

    scanf("%d", &n);

    printf("Coin type: ");
    cin >> coin;

    int Coin[coin + 1];

    printf("Coins: ");

    for(i=1; i <= coin; i++){

            scanf("%d", &Coin[i]);
    }
    int Tm[coin+1] [n+1];

    for(i=0; i<=coin; i++){
        for(j=0; j <=n; j++){
            if(j == 0){
                Tm[i][j]=0;
            }
            else if(i==0){
                Tm[i][j]= 99;
            }
            else{
                if(j-Coin[i] >= 0){
                    if(Tm[i-1][j] <= 1+ Tm[i][j-Coin[i]])
                        Tm[i][j] = Tm[i-1][j];
                    else
                        Tm[i][j] = 1+Tm[i][j-Coin[i]];
                }
                else
                    Tm[i][j] = Tm[i-1][j];
            }
        }
    }


    int cn[Tm[coin][n]];
    i = coin;
    j = n;
    c = 0;
    cout << "DP need minimum "<< Tm[i][j] <<" coins.";

    while(Tm[i][j] != 0){
        if(Tm[i-1][j] == Tm[i][j])
            i--;
        else{
            cout << Coin[i] << "+";
            j = j- Coin[i];
            c = c+Coin[i];
        }

    }
    cout<<"="<<c;

    printf("\n\n");

    return 0;
}
