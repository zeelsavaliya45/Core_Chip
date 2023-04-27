//including headerfile
#include<iostream>
#include<string.h>   // header file for string manipulation

using namespace std;

// function to check if a string is a palindrome
bool isPalindrome(string input) {
    int length = input.length();
    for (int i = 0; i < length / 2; i++) {
        if (input[i] != input[length - i - 1]) {
            return false;          // if they don't match, the string is not a palindrome
        }
    }
    return true;    // if all pairs of characters match, the string is a palindrome
}
//function to check if a number is palindrome
bool isNumberPalindrome(int num) {
    int temp = num;    // store the original number for comparison later
    int reversedNum = 0;
    while (temp > 0) {
        int digit = temp % 10;
        reversedNum = reversedNum * 10 + digit;
        temp /= 10;
    }
    return num == reversedNum;   // compare the original number with the reversed number
}


int main()
{
	
	int choice;
	
	cout<<"WELCOME TO THE PALINDROME CHECKER."<<endl<<endl;
	
    for(int i =1;i;i++)
 {
		
	label:
	cout<<"1. For String"<<endl;
	cout<<"2. For Number"<<endl<<endl;
	cout<<"Enter your choice :";
	cin>>choice;
	
	switch(choice)
	{
		
    	case 1:
		{
		  string input;
          cout<<endl << "Enter a string : ";
          cin >> input;
    
	      if (isPalindrome(input)) 
		  {
            cout << input << " is a palindrome." << endl;
          }
          else
		  {
            cout << input << " is not a palindrome." << endl;
          }
        
            cout<<endl<<"Want to check again?(y|n): ";
          
            char temp,y;
            cin>>temp;
         
            system("cls");
        
          if(temp=='y')
		  {
        	goto label;
		  }
		  else
		  {
		    cout<<"Thank You";
		    return 0;
		    break;
	      }
	    }
		
	case 2 :
		{
		
		    int num;
            cout<<endl << "Enter a number: ";
            cin >> num;
        
           if (isNumberPalindrome(num)) 
		   {
              cout << num << " is a palindrome." << endl;
           } 
		   else
		   {
              cout << num << " is not a palindrome." << endl;
           }
        
              cout<<endl<<"Want to check again?(y|n): ";
              
			  char temp,y;
              cin>>temp;
          
		      system("cls");  //function for clear screen
           if(temp=='y')
		   {
        	   goto label;
		   }
		   else
		   {
		       cout<<"Thank You";
		       return 0;
		       break;
	       }
        }
    }
 }
}
