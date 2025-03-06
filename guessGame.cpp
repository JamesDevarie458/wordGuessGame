/*a text game in which the computer creates a version of a word with mixed letters, and the player has to guess the word(up to 3 times). If the player is stuck, they can ask for 3 hints: definition of the word, first letter of the word, last word. At the end, the player wins if they guess the word, if not- loses */

#include <iostream>
using namespace std;

/*welcome function, welcome the player, and explain the rules of the game */
void welcome()
{

}

/*Declare and fill the array of 5-10 words(on the topic) and array of definitions of size MAX(MAX = 5-10)
-pick a randome number for an index of an array - from 0 to MAX -1
-return this random index*/
void randomIndex()
{

}

/*set up and return a secret_word - a word corresponding to the random index*/
void PickSecretWord()
{

}

/* set up and return a definition corresponding to the random index*/
void pickDefinition()
{

}

/*in a loop for i=0 to secret word.size()
- pick two random indices (from 0 to secret_word.size()-1)
- swap two corresponding letters of the secret word
- show the scrambled word to the player*/
void sscramble()
{

}

/*interact with the player
- enter the inner game loop
- ask the player to guess or to ask for a hint
- allow at most 3 guesses and at most 3 hints: definition, first letter, last letter
- compare player's guess (convert to lower case) with a secret word
-for(char &c:guess)
    c = to lower(c)
- retunr whether the player guessed (true or false)*/
void oneRunGame()
{

}
/* the result: won (guesed correctly) or lost (was not able to guess the correct word, inform the user what was the secret word), ask if they want to play again, return the answer
- outer loop: if they do- go to pick up a new secret word.*/
void reporting()
{
    
}