#include "anagram.h"

void increment (const std::string& word1, int* count)
{
  for (int i=0; i< word1.length(); i++)
  {
    if (word1[i]!=' ')
    {
      count[tolower(word1(i))-97]++;
    }
  }
}
  
void decrement (const std::string& word2, int* count)
{
  for (int i=0; i< word2.length();i++)
  {
    if (word2[i]!=' ')
    {
      count[tolower(word2(i))-97]--;
    }
  }
}
bool Anagram::WordPairIsAnagram(const std::string& word1, const std::string& word2) {
     
     int count[26]={0};
     increment (word1,count);
     decrement (word2,count);
    for (int i=0;i<26;i++)
    {
        if(count[i])
            return false;
    }
    return true;
  
}

std::vector<std::string> Anagram::SelectAnagrams(const std::string& word,
const std::vector<std::string>& candidates) {
  
   std::vector<std::string> Candidates={}
    for (int i=0;i<candidates.size();i++)
    {
        
         if(WordPairIsAnagram(word,candidates[i])
            {
                Candidates.push_back(candidates[i]);
            }
    }
    return Candidates;
}
