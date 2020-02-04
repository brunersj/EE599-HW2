#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <map>

class Solution {
public:
  // std::string PrintHelloWorld();
  int Add(int, int);
  std::string Add(int, std::string);
  std::string Add(std::string, int);
  std::string Add(std::string, std::string);
  void RemoveDupSet(std::vector<int>&);
  void RemoveDupNoSet(std::vector<int>&);
  void ReverseVect(std::vector<int>&);
  void RemoveOdd(std::vector<int>&);
  std::vector<int> ConcatVect(std::vector<int>&, std::vector<int>&);
  std::vector<int> FindIntersect(std::vector<int>&, std::vector<int>&);
  void SwapRef(int&,int&);
  void SwapPtr(int*,int*);
  void SwapString(std::string&, int, int);
  void ReverseString(std::string&);
  void StringToLower(std::string&);
  bool SinglePalindrome(std::string&);
  bool ApproxPalindrome(std::string&);
  std::map<char,char> MapString(std::string&, std::string&);
  double FindMedian(std::vector<int>&);
  void RearrangeFromMedian(std::vector<int>&);
};

#endif