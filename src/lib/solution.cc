
#include "solution.h"
#include <iostream>


using std::set;
using std::cout;
using std::endl;
// std::string Solution::PrintHelloWorld() { 
//   return "**** Hello World ****"; 
// }


// Question 1 
// O(1)
int Solution::Add(int A, int B){
    return A+B;
}

// O(n)
std::string Solution::Add(int A, std::string B){
    std::string Astring = std::to_string(A);
    return Astring+B;
}

// O(n)
std::string Solution::Add(std::string A, int B){
    std::string Bstring = std::to_string(B);
    return A + Bstring;
}

// O(1)
std::string Solution::Add(std::string A, std::string B){
    return A+B;
}


// Question 2 - see main.cc


// Question 3 

// O(nlogn)
void Solution::RemoveDupSet(std::vector<int> &input){
    set<int> set;
    for (auto n : input){
        set.insert(n);
        // std::cout << n << std::endl;
}

    std::vector<int> output(set.begin(), set.end());
    input = output;

}

// O(nlogn)
void Solution::RemoveDupNoSet(std::vector<int> &input){
    if (input.size() <= 1){
        return;
    }
     std::sort(input.begin(),input.end()); //O(nlogn)
    // for (auto it = input.begin(); it != input.end() - 2; it++){
    //     if (*it == *(it+1) ){
    //         input.erase(it+1);
    //     }
    //     else if (*it == *(it-1) ){
    //         input.erase(it);
    //     }
    // }
    // if (*(input.end()-1) == *(input.end()-2)){
    //     input.erase(input.end()-1);
    // }
    auto it = std::unique(input.begin(),input.end()); // O(nlogn)
    input.resize(it - input.begin());
}

//O(n)
void Solution::ReverseVect(std::vector<int> &input){
    std::vector<int> output;
    for (auto i : input){
        output.insert(output.begin(), i);
}
    
    input = output;
}

//O(n)
void Solution::RemoveOdd(std::vector<int> &input){
    std::vector<int> output;
    

    for (auto it = input.begin(); it != input.end(); it++){
        // remove if odd
        if (*it % 2 == 0){
            output.push_back(*it);
        }
    }
    input = output;
}

//O(n)
std::vector<int> Solution::ConcatVect(std::vector<int> &in1, std::vector<int> &in2){
    std::vector<int> output = in1;
    for(auto i : in2){
        output.push_back(i);
    }

    return output;
}



// Find intersection - http://www.cplusplus.com/reference/algorithm/set_intersection/
// O(nlogn)
std::vector<int> Solution::FindIntersect(std::vector<int> &in1, std::vector<int> &in2){
    std::sort(in1.begin(),in1.end());
    std::sort(in2.begin(),in2.end());
    std::vector<int>::iterator it;
    std::vector<int> output(in1.size() + in2.size());
    it = std::set_intersection(in1.begin(), in1.end(), in2.begin(), in2.end(), output.begin()); //O(n)

    output.resize(it - output.begin());
    // for(auto i : output){
    //     std::cout << i << std::endl;
    // }

    return output;
}

// Question 4

// O(1)
void Solution::SwapRef(int& a, int& b){
    int temp = b;
    b = a;
    a = temp;

}

// O(1)
void Solution::SwapPtr(int* a, int* b){
    int temp = *b;
    *b = *a;
    *a = temp;

}

// Question 5

// O(1)
void Solution::SwapString(std::string& stringIn, int index1, int index2){
    // check if indicies are valid
    if (index1 < 0 || index1 > stringIn.size()  || index2 < 0 || index2 > stringIn.size()){
        cout << "Invalid index" << endl;
        return;
    }
    char temp = stringIn[index2];
    stringIn[index2] = stringIn[index1];
    stringIn[index1] = temp;

  }

//O(n)
void Solution::ReverseString(std::string& stringIn){
    reverse(stringIn.begin(),stringIn.end());
  }

void Solution::StringToLower(std::string& stringIn){
      std::string stringOut;
      for (char& i : stringIn){
          if(isalpha(i)){
              stringOut.push_back(tolower(i));
          }
          else{
              stringOut.push_back(i);
          }
      }
    stringIn = stringOut;
  }


  // Question 6

// O(n/2) = O(n)
// -------------------
// ^it1->   |   <-it2^
bool Solution::SinglePalindrome(std::string& stringIn){
    
    // base case: palindrome if empty string or size 1
    if (stringIn.size() == 1 || stringIn.size() == 0){
        return true;
    }
    else{
        // start iterators at beginning and end
        // compare values and increment and decrement respectively
        std::string::iterator it1, it2;
        it1 = stringIn.begin();
        it2 = stringIn.end() -1;
        while(it1 != it2){
            // compare char values
            if(*it1 != *it2){
                return false;
            }
            it1++;
            it2--;
        }
        return true;
    }


  }

// Runtime: O(n/2)
bool Solution::ApproxPalindrome(std::string& stringIn){
    
    // base case: palindrome if empty string or size 1
    if (stringIn.size() == 1 || stringIn.size() == 0){
        return true;
    }
    else{
        // start iterators at beginning and end
        // compare values and increment and decrement respectively
        std::string::iterator it1, it2;
        it1 = stringIn.begin();
        it2 = stringIn.end() -1;
        while(it1 != it2){
            //ignore punctuation, case sensative, spaces
            if(!(std::isalpha(*it1) || std::isdigit(*it1)) ){
                it1++;
                continue;
            }
            else if(!(std::isalpha(*it2) || std::isdigit(*it2)) ){
                it2--;
                continue;
            }
            // compare char values
            else if(std::tolower(*it1) != std::tolower(*it2)){
                return false;
            }
            it1++;
            it2--;
        }
        return true;
    }
  }

  // Question 7

// O(nlogn)
std::map<char,char> Solution::MapString(std::string& from, std::string& to){
    std::map<char,char> output;
    // cannot map if sizes are different
    if (from.size() != to.size()){
        return output;
    }
    for (int i = 0; i < from.size(); i++){
        // if from is not in map, then it can be inserted
        if(output.find(from[i]) == output.end()){
            output.insert( std::pair<char,char>(from[i],to[i]));
        }
        // if from is in map and the to is different that what already exists, then clear map
        else if(output.at(from[i]) != to[i]){
            output.clear();
            return output;
        }
        
        // from or to are not letters
        if (!std::isalpha(from[i]) || !std::isalpha(to[i]) ){
            output.clear();
            return output;
        }
    }

    return output;
}



  // Question 8 


// Find median of  vector
// O(nlogn)
double Solution::FindMedian(std::vector<int>& inputs){

    std::sort(inputs.begin(), inputs.end());

    // check if vector is valid size
    if(inputs.size() < 1){
        return -1;
    }

    if(inputs.size() == 1){
        return inputs[0];
    }
    else{
        // if even number vector
        if (inputs.size() % 2 == 0){
            return (inputs[inputs.size()/2 - 1] + inputs[inputs.size()/2]) / 2.0 ;
        }
        // if odd number vector
        else {
            return inputs[(inputs.size() / 2)];
        }
    
  }
}
//O(nlogn)
void Solution::RearrangeFromMedian(std::vector<int>& inputs){

    double median = FindMedian(inputs);
    cout << "median: " << median << endl;
    for (auto& i : inputs){
        std::cout << i << " ";
    }
    std::cout << std::endl;
    // invalid median
    if(median == -1){
        std::cout << "Invalid vector" << std::endl;
        return;
    }
    // If the array has even number of elements, you just need to sort the input array and reverse the first half and then reverse the second half.
    if(inputs.size() % 2 == 0){
        std::sort(inputs.begin(), inputs.begin() + inputs.size()/2 , std::greater<int>());
        std::sort(inputs.begin() + inputs.size()/2, inputs.end(), std::greater<int>());
    }

    // If the array has odd number of elements, you can do a similar thing but leave the median element alone just like the sample input/output.
    else{
        std::sort(inputs.begin(), inputs.begin() + inputs.size()/2, std::greater<int>());
        sort(inputs.begin() + inputs.size()/2 + 1, inputs.end(), std::greater<int>());
    }
}