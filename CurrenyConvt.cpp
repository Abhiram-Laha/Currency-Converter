/* Current Convertor */
//by Abhiram Laha

/* CURRENCY RATES ARE
TAKEN
ON
28 - NOV - 2021
 */


#include<iostream>
#include<string>
using namespace std;
 
int main(){

    string curreny1,curreny2;

    double amount,amount2;

    cout<<"------WELCOME TO CURRENCY CONVERTER------\n\n";

    cout<<"What currency would you like to convert? \n";
    
    cout<<"\nThe currencies are: Rupees, Dollars, Pesos, Pounds and Yen  :: ";
    cin>>curreny1;


    cout<<"\nWhat currency would you like to convert to ? :: ";
    cin>>curreny2;

    cout<<"\nHow much money would you like to convert? :: ";
    cin>>amount;



    //main 
    cout<<endl<<endl;

    //For Rupees


    if (curreny1=="Rupees"){
        if (curreny2=="Rupees"){
            amount2=amount*1;
            cout<<amount<<" Ruppes is equal to "<<amount2<<" Ruppes\n";

        }
        else if(curreny2=="Dollars"){
            amount2=amount*0.01332;
            cout<<amount<<" Ruppes is equal to "<<amount2<<" Dollars\n";

        }
        else if(curreny2=="Pesos"){
            amount2=amount*0.67154;
            cout<<amount<<" Ruppes is equal to "<<amount2<<" Pesos\n";

        }
        else if(curreny2=="Pounds"){
            amount2=amount*0.00998;
            cout<<amount<<" Ruppes is equal to "<<amount2<<" Pounds\n";

        }
        else if(curreny2=="Yen"){
            amount2=amount*1.51;
            cout<<amount<<" Ruppes is equal to "<<amount2<<" Yen\n";

        }
        
    }


    //For Dollars

    else if (curreny1=="Dollars"){
        if (curreny2=="Rupees"){
            amount2=amount*74.8330;
            cout<<amount<<" Dollars is equal to "<<amount2<<" Ruppes\n";

        }
        else if(curreny2=="Dollars"){
            amount2=amount*1;
            cout<<amount<<" Dollars is equal to "<<amount2<<" Dollars\n";

        }
        else if(curreny2=="Pesos"){
            amount2=amount*50.4210;
            cout<<amount<<" Dollars is equal to "<<amount2<<" Pesos\n";

        }
        else if(curreny2=="Pounds"){
            amount2=amount*0.74955;
            cout<<amount<<" Dollars is equal to "<<amount2<<" Pounds\n";

        }
        else if(curreny2=="Yen"){
            amount2=amount*113.33;
            cout<<amount<<" Dollars is equal to "<<amount2<<" Yen\n";

        }
        
    }
    

    //For Pesos
    else if (curreny1=="Pesos"){
        if (curreny2=="Rupees"){
            amount2=amount*1.48162;
            cout<<amount<<" Pesos is equal to "<<amount2<<" Ruppes\n";

        }
        else if(curreny2=="Dollars"){
            amount2=amount*0.01980;
            cout<<amount<<" Pesos is equal to "<<amount2<<" Dollars\n";

        }
        else if(curreny2=="Pesos"){
            amount2=amount*1;
            cout<<amount<<" Pesos is equal to "<<amount2<<" Pesos\n";

        }
        else if(curreny2=="Pounds"){
            amount2=amount*0.01484;
            cout<<amount<<" Pesos is equal to "<<amount2<<" Pounds\n";

        }
        else if(curreny2=="Yen"){
            amount2=amount*2.24;
            cout<<amount<<" Pesos is equal to "<<amount2<<" Yen\n";

        }
        
    }

    //For Pounds
    else if (curreny1=="Pounds"){
        if (curreny2=="Rupees"){
            amount2=amount*99.7247;
            cout<<amount<<" Pounds is equal to "<<amount2<<" Ruppes\n";

        }
        else if(curreny2=="Dollars"){
            amount2=amount*1.33263;
            cout<<amount<<" Pounds is equal to "<<amount2<<" Dollars\n";

        }
        else if(curreny2=="Pesos"){
            amount2=amount*67.1925;
            cout<<amount<<" Pounds is equal to "<<amount2<<" Pesos\n";

        }
        else if(curreny2=="Pounds"){
            amount2=amount*1;
            cout<<amount<<" Poundsis equal to "<<amount2<<" Pounds\n";

        }
        else if(curreny2=="Yen"){
            amount2=amount*151.09;
            cout<<amount<<" Pounds is equal to "<<amount2<<" Yen\n";

        }
        
    }

    //For Yen
    else if (curreny1=="Yen"){
        if (curreny2=="Rupees"){
            amount2=amount*0.65973;
            cout<<amount<<" Yen is equal to "<<amount2<<" Ruppes\n";

        }
        else if(curreny2=="Dollars"){
            amount2=amount*0.00882;
            cout<<amount<<" Yen is equal to "<<amount2<<" Dollars\n";

        }
        else if(curreny2=="Pesos"){
            amount2=amount*0.44451;
            cout<<amount<<" Yen is equal to "<<amount2<<" Pesos\n";

        }
        else if(curreny2=="Pounds"){
            amount2=amount*0.00661;
            cout<<amount<<" Yen is equal to "<<amount2<<" Pounds\n";

        }
        else if(curreny2=="Yen"){
            amount2=amount*1;
            cout<<amount<<" Yen is equal to "<<amount2<<" Yen\n";

        }
        
    }
    else{
        cout<<"\n\n-=-=-=-=-=-INVALID  INPUT (check the spelling) -=-=-=--=-=-=-\n\n";
    }


    //thank
    
    cout<<"\n\n------THANK YOU FOR USING THIS CURRENCY CALCULATER------";






    

return 0;
}