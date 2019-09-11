//Note that this is a really messy first draft and should be cleaned up before this is submitted

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//void printArray(array);
//Trying to create a function that will print the array, both for debugging purposes and also for the end of the program.

int main()
{
    srand(time(0));

    int randomValues[8];
    int userValues[8]; //initializes the randomly generated array and the user entered array

    for (int i=0;i<8;i++) //cycles through to generate the random numbers for the first array
    {
        randomValues[i]=rand()%25;
        //cout<<randomValues[i]<<endl;
    }

    cout<<"Random Values: "<<endl;
   // printArray(randomValues);

    for (int i=0;i<8;i++) //prompts user to enter values between 0 and 25
    {
        int val=0;
        cout<<"Enter a value between 0 and 25."<<endl;
        cin>>val;

        userValues[i]=val;
    }

    int count=0; //initialized counter variable at 0
    for (int i=0;i<8;i++) //goes through to compare each value of both arrays
    {
        if (userValues[i]==randomValues[i])
        {
            count++;
        }
    }

    if (count==8) //checks count variable to see if the user won/partially won/lost
    {
        cout<<"You win the game!"<<endl;
    }
    if (count==7)
    {
        cout<<"You partially won, 7 guess correctly! These were the correct values:"<<endl;
    }
    if (count==6)
    {
        cout<<"You guessed 6 correctly. These were the correct values: "<<endl;
    }
    else
    {
        cout<<"Better luck next time. These were the correct values: "<<endl;
    }


  return 0;
}

//void printArray(array)
//{
//   for (int i=0;i<8;i++)
//    {
//        cout<<array[i]<<endl;
//    }
//}
