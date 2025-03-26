/*a text game in which the computer creates a version of a word with mixed letters, and the player has to guess the word(up to 3 times). If the player is stuck, they can ask for 3 hints: definition of the word, first letter of the word, last word. At the end, the player wins if they guess the word, if not- loses */

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

/*welcome function, welcome the player, and explain the rules of the game */
void welcome()
{
    cout << "Welcome to this word guessing game!" << endl;
    cout << "There will be a genrated word that will be scrambled around for you to guess what the word is." << endl;
    cout << "You have three guesses to find out what the word is." << endl;
    cout << "You are allowed three hints for the word." << endl;
    cout << "Good luck!" << endl; 
}

/*Declare and fill the array of 5-10 words(on the topic) and array of definitions of size MAX(MAX = 5-10)
-pick a random number for an index of an array - from 0 to MAX -1
-return this random index*/
void randomIndex()
{
    string myArray[5];
    myArray[0] = "laugh";
    myArray[1] = "highway";
    myArray[2] = "random";
    myArray[3] = "pirate";
    myArray[4] = "samurai";

    string myDefinitions[5];

    myDefinitions[0] = "make the spontaneous sounds and movements of the face and body that are the instinctive expressions of lively amusement and sometimes also of contempt or derision.";

    myDefinitions[1] = "a main road, especially one connecting major towns or cities.";

    myDefinitions[2] = "made, done, happening, or chosen without method or conscious decision.";

    myDefinitions[3] = "a person who attacks and robs ships at sea.";

    myDefinitions[4] = "a member of a powerful military caste in feudal Japan, especially a member of the class of military";
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

int main()
{
    welcome();
    return 0;
}