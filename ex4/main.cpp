#include <iostream>
#include <cstring>

using namespace std;

char* myRev(char* sentence);

int main()
{
  char sentence[100];
  for (int i = 0; i < 100; i++)
    {
      sentence[i] = '\0';
    }

  cout << "Insert a sentence." << endl;
  cin.getline(sentence, 99);

  myRev(sentence);

  cout << sentence << endl;

  return 0;
}

char* myRev(char* sentence)
{
  char *front, *rear;

  front = sentence;
  for (int i = 0; sentence[i] != '\0'; i++)
    {
      rear = &sentence[i];
    }

  for (int i = (strlen(sentence) / 2); i >= 0; i--)
    {
      cout << "Front: " << *front << " Rear: " << *rear << endl;
      cout << i << endl;
      *front = *front^*rear;
      *rear = *rear^*front;
      *front = *front^*rear;
      front++;
      rear--;
    }

  return sentence;
}
