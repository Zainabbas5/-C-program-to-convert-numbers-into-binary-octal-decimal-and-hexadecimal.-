#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
void decimatoloctal(int n5);
void decimatohexa(int n6);


void binarytodecimal(int n1)                //to convert binary to decimal funcation
{
    	int array1[20],temp,end=0,i=0,sum=0;    
	  while(n1>0)
	 {
		 temp=n1%10;
		 n1=n1/10;
		 array1[i]=temp;
		 end++;                   
		 i++;
	     }
	 // convert binary to decimal
	   for(int i=0;i<end;i++)
	   {
	
	     sum+=(pow(2,i)*array1[i]);
		 
	   }
	   cout<<"Decimal number of enter number is  "<<sum;
	}
void binarytooctal(int n2)                        //to convert binary to octal  funcation
{
	int array2[20],temp,end=0,i=0,sum=0;
	while(n2>0)
	{
		temp=n2%10;
		n2=n2/10;
		array2[i]=temp;
		end++;
		i++;	
	}
	// convert binary to decimal
	for(int i=0;i<end;i++)
	{
		 sum+=(pow(2,i)*array2[i]);
	}
	// call function to convert decimal to octal
	decimatoloctal(sum);
}
void binarytohexa(int n3)                      //to convert binary to hexadecimal funcation
{
    int array3[20], end = 0, i = 0, sum = 0;
    while (n3 > 0) {
        int temp = n3 % 10;
        n3 = n3 / 10;
        array3[i] = temp;
        end++;
        i++;
    }
    // convert binary to hexadecimal
    
    char hex[20];
    int index = 0;
    for (int i = 0; i < end; i += 4) {
        int decimal = 0;
        for (int j = 0; j < 4; j++) {
            decimal += pow(2, j) * array3[i + j];
        }
        if (decimal > 9) {
            hex[index] = char('A' + decimal - 10);
        } else {
            hex[index] = char('0' + decimal);
        }
        index++;
     }
     
     // print the hexadecimal number
     cout << "The hexa number of enter number is ";
     for (int i = index - 1; i >= 0; i--) {
         cout << hex[i];
     }
}

void decimaltobinary(int n4 )                                //to convert decimal to  binary  funcation
{
     int array4[30]; 
	 int temp, i = 0;
     while (n4 > 0)
    {
       temp = n4 % 2;
        array4[i++] = temp;
        n4 = n4 / 2;
    }
      cout << "The binary number of this number is ";
      for(int j=i-1;j>=0;j--)
        { 
          cout<<array4[j];
          
        }
}
// function to convert decimal to octal
void decimatoloctal(int n5)
{
    int  array5[20], temp, i = 0;
    while (n5 > 0)
    {
        temp = n5 % 8;
        n5 = n5 / 8;
        array5[i] = temp;
        i++;
    }
    cout << "The octal number of entered  number is ";
    for(int j=i-1;j>=0;j--)
    {
      cout<<array5[j];
    }

}
// function to convert decimal to hexadecimal
void decimatohexa(int n6)
{

    char  hexa[20];int temp, i = 0;
     while (n6 > 0)
    {
        temp = n6 % 16;
        n6 = n6 / 16;
        hexa[i] = temp;
        if(temp==10)
        {
        	hexa[i]='A';
		}
		else if(temp==11)
		{
				hexa[i]='B';
		}
			else if(temp==12)
		{
				hexa[i]='C';
		}
			else if(temp==13)
		{
				hexa[i]='D';
		}
			else if(temp==14)
		{
				hexa[i]='E';
		}
			else if(temp==15)
		{
				hexa[i]='F';
		} 
           else 
        {
           hexa[i]=(char(temp))+48;
        }
        i++;
}
    cout << "The hexa  number of entered  number is ";
    for(int j=i-1;j>=0;j--)
    {
     
	 cout<<hexa[j];
     
    }
}
// function to convert octal to decimal 
void octatodecimal( int n7)
{
	int array7[20],temp,end=0,i=0,sum=0;
	while(n7>0)
	{
		temp=n7%10;
		n7=n7/10;
		array7[i]=temp;
		end++;
		i++;
	}
	for(int i=0;i<end;i++)
	{
		 sum+=(pow(8,i)*array7[i]);
	}
	cout<<"Decimal number of enter number is  "<<sum;
}
// function to convert octal to binary 
void octaltobinary(char n8[])
{
  int i=0;
    cout<<"The value of enter number is  is = ";
    while(n8[i])
    {
        switch(n8[i])
        {
            case '0':
                cout<<"000";
                break;
            case '1':
                cout<<"001";
                break;
            case '2':
                cout<<"010";
                break;
            case '3':
                cout<<"011";
                break;
            case '4':
                cout<<"100";
                break;
            case '5':
                cout<<"101";
                break;
            case '6':
                cout<<"110";
                break;
            case '7':
                cout<<"111";
                break;
           
            default:
                cout<<" Invalid Hex Digit ";
        }
        i++;
    }
}
// function to convert octal to hexadecimal
void octatohexa(int n9) {
    int array9[20], temp, end = 0, i = 0, sum = 0;
    while (n9 > 0) {
        temp = n9 % 10;
        n9 = n9 / 10;
        array9[i] = temp;
        end++;
        i++;
    }
    for (int i = 0; i < end; i++) {
        sum += (pow(8, i) * array9[i]);
    }
    int n = sum;
    char hexa[20];
    int tempe, a = 0;
    while (n > 0) {
        tempe = n % 16;
        n = n / 16;
        if (tempe >= 10 && tempe <= 15) {
            hexa[a] = 'A' + tempe - 10;               
        } else {
            hexa[a] = '0' + tempe;              
        }
        a++;
    }
    cout << "The hexadecimal number of entered number is ";
    for (int j = a - 1; j >= 0; j--) {
        cout << hexa[j];
    }
}
// function to convert hexadecimal to decimal 
void  hextodecimal(char num[])
{
    int decimal_num = 0;
    
    for (int i = 0; i < strlen(num); i++) 
    {
        char digit = num[i];
        if (digit == 'A') {
            digit = 10;
        } else if (digit == 'B') {
            digit = 11;
        } else if (digit == 'C') {
            digit = 12;
        } else if (digit == 'D') {
            digit = 13;
        } else if (digit == 'E') {
            digit = 14;
        } else if (digit == 'F') {
            digit = 15;
        } else {
            digit = digit - '0';
        }
        
        decimal_num = decimal_num * 16 + digit;
    }
    
    cout << "Decimal of entered number is " << decimal_num << endl;
    
}
// function to convert hexadecimal to binary 
void hexatobinary(char n11[])
{
     int i=0;
     cout<<"The value of enter number  is = ";
     while(n11[i])
    {
        switch(n11[i])
        {
            case '0':
                cout<<"0000";
                break;
            case '1':
                cout<<"0001";
                break;
            case '2':
                cout<<"0010";
                break;
            case '3':
                cout<<"0011";
                break;
            case '4':
                cout<<"0100";
                break;
            case '5':
                cout<<"0101";
                break;
            case '6':
                cout<<"0110";
                break;
            case '7':
                cout<<"0111";
                break;
            case '8':
                cout<<"1000";
                break;
            case '9':
                cout<<"1001";
                break;
            case 'A':
                cout<<"1010";
                break;
            case 'B':
			  cout<<"1011";
               break;
            case 'C':
                cout<<"1100";
                break;
            case 'D':
                cout<<"1101";
                break;
            case 'E':
                cout<<"1110";
                break;
            case 'F':
                 cout<<"1111";
                break;
            default:
                cout<<"--Invalid Hex Digit ";
        }
        i++;
    }

}
// function to convert hexadecimal to octal 
void  hextooctal(char num[])
{
    int decimal_num = 0;
    
    for (int i = 0; i < strlen(num); i++) 
    {
        char digit = num[i];
        if (digit == 'A') {
            digit = 10;
        } else if (digit == 'B') {
            digit = 11;
        } else if (digit == 'C') {
            digit = 12;
        } else if (digit == 'D') {
            digit = 13;
        } else if (digit == 'E') {
            digit = 14;
        } else if (digit == 'F') {
            digit = 15;
        } else {
            digit = digit - '0';
        }
        
        decimal_num = decimal_num * 16 + digit;
    }
    
    
    int  array5[20], temp, i = 0;
    while (decimal_num> 0)
    {
        temp = decimal_num % 8;
        decimal_num = decimal_num / 8;
        array5[i] = temp;
        i++;
    }
    cout << "The octal number of entered  number is ";
    for(int j=i-1;j>=0;j--)
    {
      cout<<array5[j];
    }

}
int main()
 {
    int		choice;
    cout << "\n";
    cout << "------**MENU**-----\n"<<endl;
    cout << "1 | Binary to Decimal\n";
    cout << "2 | Binary to Octal\n";
    cout << "3 | Binary to Hexadecimal\n";
    cout << "4 | Decimal to Binary\n";
    cout << "5 | Decimal to Octal\n";
    cout << "6 | Decimal to Hexadecimal\n";
    cout << "7 | Octal to Decimal\n";
    cout << "8 | Octal to Binary\n";
    cout << "9 | Octal to Hexadecimal\n";
    cout << "10| Hexadecimal to Decimal\n";
    cout << "11| Hexadecimal to  Binary\n";
    cout << "12| Hexadecimal to Octal\n";
    cout << "13| Quit\n";
    
    do
    {
	
    cout << endl<<"Enter your choice (1-13): ";
    cin >> choice;
    
    switch(choice)
    {
    case 1:
    	 int bdnum;
    	 cout << "enter the binary  number ";
         cin >> bdnum;
         binarytodecimal(bdnum);
    	 break ;
    case 2:
    	  int bonum;
    	  cout<<"enter the binary number ";
    	  cin >> bonum;
          binarytooctal(bonum);
    	  break ;	
	case 3:
    	  int bhnum;
    	  cout<<"enter the binary number ";
    	  cin >> bhnum;
          binarytohexa(bhnum);
    	  break ;	
    case 4:
          int dbnum;
          cout << "enter the Decimal number ";
          cin >> dbnum;
          decimaltobinary(dbnum);
          break;
    case 5:
          int donum;
          cout << "enter the decimal number ";
          cin >> donum;
		  decimatoloctal(donum);
          break;
    case 6:
          int dhnum;
          cout << "enter the decimal number ";
          cin >> dhnum;
          decimatohexa(dhnum);	
          break ;
    case 7:
          int odnum;
          cout << "enter the octal number ";
          cin >> odnum;
          octatodecimal(odnum);
          break;
    case 8 :
          char obnum[20];
          cout << "enter the octal number ";
          cin >> obnum;
          octaltobinary(obnum);
          break;
    case 9:
         int  ohnum;
         cout << "enter the octal number ";
         cin >> ohnum;
         octatohexa(ohnum);
         break;
   case 10 :
         char hdnum[20];
       	 cout << "enter the hexadecimal   number ";
         cin>>hdnum;
        hextodecimal(hdnum);
         break;
    case 11 :
         char hbnum[20];
         cout << "enter the hexadecimal   number ";
         cin >> hbnum;
         hexatobinary(hbnum);
         break;
    case 12 :     
         char honum[20];
       	 cout << "enter the hexadecimal   number ";
         cin>>honum;
         hextooctal(honum);
         break;    
				
    }
    
	}while (choice != 13);
   
}


