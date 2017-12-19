// James Mathew
// p5.cpp

#include <iomanip>
#include <iostream>
#include <fstream>

using namespace std;

struct Words
{
	int count;
	string key;
	Words* next;
};

int hash (string & key, int tableSize);

const string INPUTFILE = "test.txt";
const int MAX = 10000; // total 86347

int main ()
{
	ifstream input;
	Words* data[MAX];
	// for (int i = 0;  i < MAX; i++) {
		// // data[i] = nullptr;
		
// cout << "gets here 0" << endl; // DELETE THIS
		// data[i]->count = 0;
		// cout << "gets here 00" << endl; // DELETE THIS
	
	// }
	input.open(INPUTFILE);
	if (input.fail()) {
		cout << "Error opening the file ..." << endl;
		return 0;
	}
	int x = 0;
	string word;
	string tempWord;
	int indx;
	cout << "gets here 1" << endl; // DELETE THIS
	Words* tempNode;
	cout << "gets here 2" << endl; // DELETE THIS
	while (input >> word) {
		tempWord = "";
		if (word.size() > 5) {
			for (unsigned int i = 0; i < word.size(); i++) {
				if (isalpha(word[i])) {
					tempWord += tolower(word[i]);
				}
			}
			cout << "about to insert this word: " << tempWord << endl;
			if (tempWord.size() > 5) {
				x++;
				indx = tempWord[0] - 97;
				// cout << "the indx returned for word '" << tempWord << "' is "<< indx << endl;
				// tempNode = data[indx];
				// cout << "gets here 3" << endl; // DELETE THIS
				// // cout << tempNode
				// // if (tempNode->count == 0) {
					// // cout << "temp node is null" << endl;
				// // }
				// // if (tempNode->count != 0) {
					// // cout << "temp node is not null" << endl;
				// // }
				// while (tempNode != nullptr && tempNode->key != tempWord) {
					// cout << "gets here 4" << endl; // DELETE THIS
						// tempNode = tempNode->next;
						// cout << "gets here 5" << endl; // DELETE THIS
				// }
				
				// if (tempNode == nullptr) {
					// cout << "gets here 6" << endl; // DELETE THIS
					
					// tempNode->count = 1;
					// tempNode->key = tempWord;
					// cout << "gets here 7" << endl; // DELETE THIS
				// } else if (tempNode->key == tempWord){
						// tempNode->count++;
				// }
			}			
		}
	}
	return 0;
}

int hash (string& key, int tableSize)
{
  int hashVal = 0;

  for (unsigned int i = 0; i < key.length(); i++)
    hashVal += key[i];

  return hashVal % tableSize;
}
