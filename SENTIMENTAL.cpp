#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a statement: ";
    getline(cin, input);

    bool is_positive = false;
    bool is_negative = false;
    bool is_neutral = false;
    string positive_words[] = {"love", "happy", "excited", "hopeful", "grateful", "admire","Energise","Amuse","Ecstatic","Attractive","Ideal","cheerful","motivated","motivation","Excellent","glad","Clever","Benignant",	"Best",	"Good"	,"Better",	"Breathtaking"
"Comforting"	,"Cheerful",	"Optimistic",	"Positive",	"Dignified","Reliable","Disciplined","Accomplished","Brave","Affirm","Accurate"	,"Classy","Adept",	"Admirable"	,"Connected",
"Clever",	"Affectionate",	"Colorful",	"Valiant",	"Exciting","Exultant","Courageous"	,"Delectable"	,"Innovative"	,"Charismatic","Daring","Instinctive",	"Mighty",	"Informative",	"Luminous",
"Natural",	"Miraculous",	"Affluent",	"Nice",	"Kind-hearted","Amazing",	"Impressive",	"Determined",	"Classy",	"Mature"	,"Joyous",	"Magnificent",	"Confident","Friendly" ,"Patient"	,"Enthusiastic","	Humane","	Lucky",
"Peaceful","peaceful","good"	};
    string negative_words[] = {"hate", "angry", "frustrated", "sad", "worried", "fearful","stupid","nonsense","useless","unfavorable","adverse","hostile","harmful","detrimental","damaging","destructive","bad","destructive","hurt","coward","unhope"};
    string neutral_words[] = {"calm", "content", "indifferent", "bored", "confused", "curious"};

    for (string word : positive_words) {
        if (input.find(word) != string::npos) {
            is_positive = true;
            break;
        }
    }

    if (!is_positive) {
        for (string word : negative_words) {
            if (input.find(word) != string::npos) {
                is_negative = true;
                break;
            }
        }
    }

    if (!is_positive && !is_negative) {
        for (string word : neutral_words) {
            if (input.find(word) != string::npos) {
                is_neutral = true;
                break;
            }
        }
    }

    if (is_positive) {
        cout << "The statement is positive." << endl;
    }
    else if (is_negative) {
        cout << "The statement is negative." << endl;
    }
    else if (is_neutral) {
        cout << "The statement is neutral." << endl;
    }
    else {
        cout << "Could not determine the emotional tone of the statement." << endl;
    }

    return 0;
}
