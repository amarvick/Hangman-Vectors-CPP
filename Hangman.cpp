#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cctype> //Preprocessor for modifying characters

using namespace std;

int main()
{vector<string> words;
    words.push_back("ALEXANDER");
    words.push_back("MICHAEL");
    words.push_back("NICHOLAS");
    words.push_back("MARGUERITE");
    words.push_back("MIKE");
    words.push_back("MARVICK");
    words.push_back("SHEA");
    words.push_back("JOSEPH");
    words.push_back("LORENZO");
    words.push_back("BLACKBOURN");
    words.push_back("JUAREZ");
    words.push_back("SHERIDAN");
    words.push_back("JANKEY");
    words.push_back("TWITTER");
    words.push_back("FACEBOOK");
    words.push_back("EXPLOG");
    words.push_back("WINDOWS");
    words.push_back("APPLE");
    words.push_back("ANDROID");
    words.push_back("INSTAGRAM");
    words.push_back("TWEET");
    words.push_back("PHOTOGRAPHY");
    words.push_back("DOGE");
    words.push_back("CAT");
    words.push_back("DOG");
    words.push_back("BUB");
    words.push_back("RUNNING");
    words.push_back("PROGRAMMING");
    words.push_back("WEBSITES");
    words.push_back("FERRARI");
    words.push_back("LAMBORGHINI");
    words.push_back("TESLA");
    words.push_back("SPACEX");
    words.push_back("PAYPAL");
    words.push_back("MILES");
    words.push_back("BICYCLING");
    words.push_back("ORANGE");
    words.push_back("BANANA");
    words.push_back("MATHEMATICS");
    words.push_back("CHEMISTRY");
    words.push_back("PHYSICS");
    words.push_back("ENGINEERING");
    words.push_back("REPUBLICAN");
    words.push_back("DEMOCRAT");
    words.push_back("LIBERTARIAN");
    words.push_back("MODERATE");
    words.push_back("INDEPENDENT");
    words.push_back("MARIO");
    words.push_back("LUIGI");
    words.push_back("HIPPOPOTAMUS");
    words.push_back("SPAIN");
    words.push_back("ITALY");
    words.push_back("FRANCE");
    words.push_back("HUNGARY");
    words.push_back("KRAKOW");
    words.push_back("CROATIA");
    words.push_back("SLOVENIA");
    words.push_back("AUSTRIA");
    words.push_back("GERMANY");
    words.push_back("SWITZERLAND");
    words.push_back("LICHTENSTEIN");
    words.push_back("TURKEY");
    words.push_back("WASHINGTON");
    words.push_back("SPOKANE");
    words.push_back("SEATTLE");
    words.push_back("BELLEVUE");
    words.push_back("SEAHAWKS");
    words.push_back("SONICS");
    words.push_back("SOUNDERS");
    words.push_back("MARINERS");
    words.push_back("ZHU");
    words.push_back("NIKE");
    words.push_back("SAUCONY");
    words.push_back("ICELAND");
    words.push_back("REYKJAVIK");
    words.push_back("PORTLAND");
    words.push_back("OREGON");
    words.push_back("TRAILBLAZERS");
    words.push_back("MADRID");
    words.push_back("BARCELONA");
    words.push_back("ISTANBUL");
    words.push_back("KRAKOW");
    words.push_back("BUDAPEST");
    words.push_back("PARIS");
    words.push_back("NANTES");
    words.push_back("LJUBLJANA");
    words.push_back("SAVUDRIJA");
    words.push_back("SALZBURG");
    words.push_back("MUNICH");
    words.push_back("ZURICH");
    words.push_back("MILAN");
    words.push_back("ROME");
    words.push_back("FLORENCE");
    words.push_back("VENICE");
    words.push_back("BOLOGNA");
    words.push_back("VATICAN");
	 	 
    srand(static_cast<unsigned int>(time(0))); //Without this, the shuffle will be the same every single time
    random_shuffle(words.begin(), words.end());
    
    string guessword = words[0];
    string sofar(guessword.size(), '-');
    int wrong = 0;
    char guess;
    string lused = "";
    cout << "\t\t\t\t   HANGMAN!" << endl;
    cout << endl;
    cout << sofar;
    cout << endl;
    vector<char>::iterator k;
    
    while ((wrong < 8 && sofar != guessword)) {
        cout << "You have " << (8 - wrong) << " guesses left." << endl;
        cout << "For reference, word: " << sofar << endl;
        cout << endl;
        cout << "Guess a letter: ";
        cin >> guess;
        guess = toupper(guess); //cctype preprocessor 'toupper' --> changes character to being in upper case
        
        while (lused.find(guess) != string::npos) {
            cout << "Letter already guessed." << endl;
            cout << endl;
            cout << "Guess a letter: ";
            cin >> guess;
            guess = toupper(guess);
        }
        
        if (guessword.find(guess) != string::npos) {
            for (int i = 0; i < guessword.length(); ++i)
            if (guessword[i] == guess) {
                cout << "Correct! The letter " << guess << " is in the phrase!" << endl;
                sofar[i] = guess;
                lused = lused + guess;
        }
    }
        
        
        else
        {cout << "Incorrect." << endl;
            ++wrong;
            lused = lused + guess;}
        
        if (wrong == 0) {
            cout << "    " << endl;
            cout << "    " << endl;
            cout << "    " << endl;
            cout << "    " << endl;
            cout << "    " << endl;
            cout << endl;
        } else if (wrong == 1) {
            cout << "    " << endl;
            cout << "    " << endl;
            cout << " O  " << endl;
            cout << "    " << endl;
            cout << "    " << endl;
            cout << endl;
        } else if (wrong == 2) {
            cout << "    " << endl;
            cout << "    " << endl;
            cout << " O  " << endl;
            cout << " |  " << endl;
            cout << "    " << endl;
            cout << endl;
        } else if (wrong == 3) {
            cout << "    " << endl;
            cout << "    " << endl;
            cout << " O  " << endl;
            cout << "-|  " << endl;
            cout << "    " << endl;
            cout << endl;
        } else if (wrong == 4) {
            cout << "    " << endl;
            cout << "    " << endl;
            cout << " O  " << endl;
            cout << "-|- " << endl;
            cout << "    " << endl;
            cout << endl;
        } else if (wrong == 5) {
            cout << "    " << endl;
            cout << "    " << endl;
            cout << " O  " << endl;
            cout << "-|- " << endl;
            cout << "|   " << endl;
            cout << endl;
        } else if (wrong == 6) {
            cout << "    " << endl;
            cout << "    " << endl;
            cout << " O  " << endl;
            cout << "-|- " << endl;
            cout << "| | " << endl;
            cout << endl;
        } else if (wrong == 7) {
            cout << "    " << endl;
            cout << " |  " << endl;
            cout << " O  " << endl;
            cout << "-|- " << endl;
            cout << "| | " << endl;
            cout << endl;
        } else if (wrong == 8) {
            cout << "  _ " << endl;
            cout << " |  " << endl;
            cout << " O  " << endl;
            cout << "-|- " << endl;
            cout << "| | " << endl;
            cout << endl;
        }
        
        cout << endl;
        cout << "Characters used: " << lused << endl;
        
    }
    
    if (wrong == 8)
    {cout << endl;
        cout << "Unfortunately, you have been hung. The correct phrase: " << guessword << endl;}
		 	
    else
    {cout << endl;
        cout << "You got the phrase! " << guessword << endl;}			 
    
}