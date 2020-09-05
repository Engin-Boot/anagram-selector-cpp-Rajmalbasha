#include "anagram.h"

bool Anagram::WordPairIsAnagram(const std::string& word1, const std::string& word2) {
  int count[26]={0};
    for (int i=0;word1[i]&&word2[i];i++)
    {   
        if (word1(i)!=' ')
            count[tolower(word1(i))-97]++;
        if(word2(i)!=' ') 
            count[tolower(word2(i))-97]--;
    }
    for (int i=0;i<26;i++)
    {
        if(count[i])
            return false;
    }
    return true;
  
}

std::vector<std::string> Anagram::SelectAnagrams(
        const std::string& word,
        const std::vector<std::string>& candidates) {
    vector <string> Candidates={}
    for (int i=0;i<candidates.size();i++)
    {
        
         if(WordPairIsAnagram(word,candidates[i])
            {
                Candidates.push_back(candidates[i]);
            }
    }
    return Candidates;
}
