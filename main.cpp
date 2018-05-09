#include <iostream>
#include <ctime>
#include <thread>
#include <chrono>

using namespace std;

int main()
{
    string playerName;
    int chosenCard = 0;
    int playerChoice = 0;
    cout << "Welcome to The Game of Fate!" << endl;
    this_thread::sleep_for (chrono::seconds(1));
    cout << "Say, and your name is..? ";
    cin >> playerName;
    cout << "Your name is " << playerName << "? Fantastic! Let's move on then, " << playerName << "!" << endl;
    this_thread::sleep_for (chrono::seconds(1));
    cout << "Okay, " << playerName << ", In my hand are three cards. Card One contains a Seal of Magic, Card Two contains a Seal of Strength, and Card Three"
                                      " contains a Seal of Agility" << endl;
    this_thread::sleep_for (chrono::seconds(7));
    cout << "I want you to select one of three cards to take into the battle! So which will it be, " << playerName << "?" << endl;
    this_thread::sleep_for (chrono::seconds(6));

    while(chosenCard != 1 && chosenCard != 2 && chosenCard != 3) {
    cout << "Choose a card by entering a 1 for the Seal of Magic, 2 for the Seal of Strength, or 3 for the Seal of Agility! ";
    cin >> chosenCard;
    if (chosenCard == 1)
        cout << "Ah, the Seal of Magic, a wise choice, Intelligence surges through you!" << endl;
    else if(chosenCard == 2)
        cout << "The Seal of Strength! You feel a brutish power rush inside your bones!" << endl;
    else if(chosenCard == 3)
        cout << "You've chosen the Seal of Agility! You sense yourself become incredibly nimble and speedy!" << endl;
    else
        cout << "Hey! I said choose 1, 2 or 3!! Not whatever you just did!" << endl;
    }
    this_thread::sleep_for (chrono::seconds(3));
    if(chosenCard == 1) {
        cout << "You have the power of a young wizard! Good timing too, I see a demon approaching us!" << endl;
    this_thread::sleep_for (chrono::seconds(1));
    cout << "How would you like to proceed in battling with this demon!?" << endl;
    this_thread::sleep_for (chrono::seconds(1));
    cout << "Type 1 to send in a fireball! Type 2 to port away and attempt escape! Or Type 3 to engage combat with the beast! ";
    cin >> playerChoice;
    if(playerChoice == 3)
        cout << "You engaged MELEE COMBAT with a demon as a Wizard!?!? Rookie mistake, he just devoured your soul!" << endl;
    }
    cout << "You lose, sorry, kid!" << endl;
    return 0;
}
