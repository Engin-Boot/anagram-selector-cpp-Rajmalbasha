#include "anagram.h"
#define no_of_chars 256
bool Anagram::WordPairIsAnagram(const std::string& word1, const std::string& word2) {
    int count[no_of_chars]={0}
     for (i = 0; str1[i] && str2[i]; i++) { 
        count[str1[i]]++; 
        count[str2[i]]--; 
    } 
    if (str1[i] || str2[i]) 
        return false; 
    
    for (i = 0; i < NO_OF_CHARS; i++) 
        if (count[i]) 
            return false; 
    return true; 
  
}

std::vector<std::string> Anagram::SelectAnagrams(
        const std::string& word,
        const std::vector<std::string>& candidates) {
    vector <string> Candidates={}
    for (int i=0;i<candidates.size();i++)
    {
        if (WordPairIsAnagram(word,candidates[i])
            {
                Candidates.push_back(candidates[i]);
            }
    }
    return candidates;
}
