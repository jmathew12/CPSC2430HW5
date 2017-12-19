// James Mathew
// p5.cpp

// #include <iostream>
#include <iomanip>
// #include <fstream>
// #include <cstring>
// #include <string>

#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <cctype>
#include <stdio.h>

using namespace std;

struct Words
{
  int count;
  string word;
  Words* next;
};

// void merge(Words set[], Words temp[], int left, int right,
           // int rightEnd);
// void mergeSort(Words set[], Words temp[], int first, int last);
// void print(Words set[], int count);


// const int MAX = 267948;
const int MAX = 10000;
// const int PRINT_MAX = 10000;
// const string INPUTFILE = "p5.txt";
const string INPUTFILE = "test.txt";
// const string INPUTFILE = "ex.txt";
int main () 
{
  ifstream inputFile;
  Words data[MAX];
  // Words tempData[MAX];
  int indx = 0;
  
  inputFile.open(INPUTFILE);
  if (inputFile.fail()) {
    cout <<"Error opening the file .." << endl;
  }
  int totalCount = 0;
  int acount = 0;
	string s;
  while(inputFile >> s) {
	  if (s.size() > 5) {
		  totalCount++;
	  }
		  
	  for (unsigned  int i = 0; i < s.size(); i++) {
		  if(!isalpha(s[i])) {
			  s.erase(i);
		  }
	  s = toLower(s);
	  if (s.size() > 5) {
		data[indx].word = s;
	  indx++;
	  acount++;
		}
	  }
	  cout << "total count " << totalCount << endl;
	  cout << "acount " << acount << endl;
   // Words data[totalCount];
  // Words tempData[totalCount];

  // inputFile.open(INPUTFILE);
  // while (inputFile >> data[indx].key){
    // getline(inputFile, data[indx].place);
    // indx++;
  // }
  inputFile.close();
  // cout << "Before sorting, ";
  // print(data, indx);
  // mergeSort(data, tempData, 0, count - 1);
  // cout << "After sorting, ";
  // print(data, count);
  return 0;
}
 

















// void mergeSort(Words set[], Words temp[], int first, int last)
// {
  // if(first < last) {
    // int center = (first + last) / 2;
    // mergeSort(set, temp, first, center);
    // mergeSort(set, temp, center + 1, last);
    // merge(set, temp, first, center + 1, last);
  // }
// }

// void merge(Words set[], Words temp[], int left, int right,
           // int rightEnd)
// {
  // int leftEnd = right - 1;
  // int tempIndx = left;
  // int numElements = rightEnd - left + 1;
  // while(left <= leftEnd && right <= rightEnd){
    // if(set[left].key <= set[right].key){
      // temp[tempIndx] = set[left];
      // tempIndx++;
      // left++;
    // }
    // else{
      // temp[tempIndx] = set[right];
      // tempIndx++;
      // right++;
    // }
  // }
  // while(left <= leftEnd){
    // temp[tempIndx] = set[left];
    // tempIndx++;
    // left++;
  // }
  // while(right <= rightEnd){
    // temp[tempIndx] = set[right];
    // tempIndx++;
    // right++;
  // }
  // for(int i = 0; i < numElements; i++){
    // set[rightEnd] = temp[rightEnd];
    // rightEnd--;
  // }
// }

// void print(Words set[], int count)
// {
  // cout << "the first 10 entries are the following:" << endl;
  // for (int i = 0; i < 10; i++) {
    // cout << set[i].key << " ";
    // cout << set[i].place << endl;
  // }
  // cout << endl;
  // cout << "And the last 10 entries are the following:" << endl;
  // for (int i = count - 10; i < count; i++) {
    // cout << set[i].key << " ";
    // cout << set[i].place << endl;
  // }
  // cout << endl;
  
// }