# Lottery-Game
An assignment for CIS251.

"Simulate a pick 8 lottery game. Randomly generate 8 values between 0 and 25, and store them into an array. The user is prompted to create a second array where 8 values between 0 and 25 are chosen. The values of both arrays are compared and if they match, the user "wins" the game. If not, the correct values and positions are displayed. For extra work, you can set conditions for 6 and 7 matches as well.

PROBLEM STATEMENT:
Create two arrays, one with values input by a user and another randomly generated, that are then checked for equivalency.

METHOD:
Generate a random array with the random number generator, and do % so the values are below 25. The array should be length 8. Generate a second array of length 8, prompting the user to enter each value for the array, and checking to make sure that all values are between 0 and 25. Use a for loop and some conditional statements to cycle through the index of each array, and check to see if the values match. Keep a counter, that starts at 0, and goes up by one for each match there is. After all values have been checked, check the counter variable.
  -If the counter variable is 8, then all values were guessed correctly, and this is printed to the user.
  -If the counter variable is 7, then all but one value is correct, and this is printed to the user along with all the correct values/positions.
  -If the counter variable is 6, then all but two values are correct, this is printed to the user and so are the correct values.
  -If less than 6, then the user is a horrible guesser and "you lose." should be printed alongside a painful reminder of the REAL answers, obvs.
  
VARIABLES:
 int count                counter variable
 int randomValues[8]      array of random integers
 int userValues[8]        array of user entered integers
 int i                    array index
 
FUNCTIONS:
  

PSEUDOCODE:
  -Seed a RNG with the time of day. (cstd, ctime)
  -Fill the randomValues array with 8 values between 0, 25
  -Display a request to the user to enter 8 values
  -Store those values in userValues
  -Initialize counter variable at 0
  -Initialize check for each value in the two arrays (use a loop)
  -Check same index for both values, if they match, counter goes up by 1
  -After all indeces have been checked, run a check on the counter variable
  -If 8 values match, then the user wins. If 6-7 match, the user wins a partial amount. If less than 6 match, the user loses.
  -Output win/partial win/loss to user. If less than 8 values matched, also output the randomValues array to the user.
  
