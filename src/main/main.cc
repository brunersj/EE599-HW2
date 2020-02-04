#include <iostream>
#include "src/lib/solution.h"

using std::cout;
using std::endl;

int main()
{
    Solution solution ;
    // std::cout << solution.PrintHelloWorld() << std::endl;
    // Question 1:
    cout << "Question 1: " << endl;
    std::cout << "input: (3, 5), output: " << solution.Add(3,5) << std::endl;
    std::cout << "input: (“abc”, “efg”), output: \"" << solution.Add("abc","efg") << "\"" << std::endl;
    std::cout << "input: (“EE”, 599), output: \"" << solution.Add("EE",599) << "\"" << std::endl;

    // Question 2:
    cout << "Question 2: " << endl;
    int arrInt[24];
    cout << "Size of array of Int: " << sizeof(arrInt) /sizeof(arrInt[0]) << endl;
    char arrChar[27];
    cout << "Size of array of Int: " << sizeof(arrChar) /sizeof(arrChar[0]) << endl;
    float arrFloat[29];
    cout << "Size of array of Int: " << sizeof(arrFloat) /sizeof(arrFloat[0]) << endl;



    // Question 3:
    cout << "Question 3: " << endl;
    std::vector<int> before = {1,2,2,2,3,4,7,7};
// remove duplicate
    std::cout << "before: v=[";
    for (const auto& i : before){
        cout << i << " ";
    }
    solution.RemoveDupSet(before);
    cout << "], after remove duplicate using set: v=[";

    for (const auto& i : before){
        cout << i << " ";
    }
    cout << "]" << endl;

    before = {1,2,2,2,3,4,7,7};
    std::cout << "before: v=[";
    for (const auto& i : before){
        cout << i << " ";
    }
    solution.RemoveDupNoSet(before);
    cout << "], after remove duplicate without set: v=[";

    for (const auto& i : before){
        cout << i << " ";
    }
    cout << "]" << endl;

// reverse vector
    
    before = {1,2,2,2,3,4,7,7};
    std::cout << "before: v=[";
    for (const auto& i : before){
        cout << i << " ";
    }
    solution.ReverseVect(before);
    cout << "], after reverse vector: v=[";

    for (const auto& i : before){
        cout << i << " ";
    }
    cout << "]" << endl;

// remove odd
    
    before = {1,2,2,2,3,4,7,7};
    std::cout << "before: v=[";
    for (const auto& i : before){
        cout << i << " ";
    }
    solution.RemoveOdd(before);
    cout << "], after remove odd: v=[";

    for (const auto& i : before){
        cout << i << " ";
    }
    cout << "]" << endl;

// concat
    std::vector<int> before1 = {1,2,3};
    std::vector<int> before2 = {4,5,6};

    std::vector<int> after = solution.ConcatVect(before1,before2);

    std::cout << "input: v=[";
    for (const auto& i : before1){
        cout << i << " ";
    }
    cout << "], [";
    for (const auto& i : before2){
        cout << i << " ";
    }
    cout << "], after concatenate: v=[";

    for (const auto& i : after){
        cout << i << " ";
    }
    cout << "]" << endl;


// find intersection
    before1 = {1,2,3,4};
    before2 = {3,4,5};

    after = solution.FindIntersect(before1,before2);

    std::cout << "input: v=[";
    for (const auto& i : before1){
        cout << i << " ";
    }
    cout << "], [";
    for (const auto& i : before2){
        cout << i << " ";
    }
    cout << "], after intersection: v=[";

    for (const auto& i : after){
        cout << i << " ";
    }
    cout << "]" << endl;

// Question 4
    cout << "Question 4: " << endl;
    int x = 20;
    int y = 30;
    cout << "Before swap:" << endl;
    cout << "x: " << x << " y: " << y << endl;
    solution.SwapRef(x,y);
    cout << "After swap using references:" << endl;
    cout << "x: " << x << " y: " << y << endl;
    solution.SwapPtr(&x,&y);
    cout << "After swap using pointers:" << endl;
    cout << "x: " << x << " y: " << y << endl;


// Question 5
    cout << "Question 5: " << endl;
    std::string stringIn = "TEST";
    int i = 0;
    int j = 1;
    cout << "input: (\"" << stringIn << "\", " << i << ", " << j << "), ";
    solution.SwapString(stringIn, i, j);
    cout << "output swap string: \"" << stringIn << "\"" << endl;

    stringIn = "TEST";
    cout << "input: (\"" << stringIn << "\" ";
    solution.ReverseString(stringIn);
    cout << "output reverse string: \"" << stringIn << "\"" << endl;

    stringIn = "EE599";
    cout << "input: (\"" << stringIn << "\" ";
    solution.StringToLower(stringIn);
    cout << "output string to lower case: \"" << stringIn << "\"" << endl;


// Question 6
    cout << "Question 6: " << endl;
    stringIn = "madam";
    bool isPalindrome = solution.SinglePalindrome(stringIn);
    cout << "Is \"" << stringIn << "\" a simple palindrome: ";
    if(isPalindrome){
        cout << "Yes." << endl;
    }
    else{
        cout << "No." << endl;
    }

     stringIn = "A man, a plan, a canal, Panama!";
    //stringIn = "There is a man";
    isPalindrome = solution.ApproxPalindrome(stringIn);
    cout << "Is \"" << stringIn << "\" an approximate palindrome: ";
    if(isPalindrome){
        cout << "Yes." << endl;
    }
    else{
        cout << "No." << endl;
    }

// Question 7
    cout << "Question 7: " << endl;
    std::string from = "add";
    std::string to = "egg";
    std::map<char,char> fromTo = solution.MapString(from,to);
    cout << "from = \"" << from << "\", to = " << to << "\"" << endl;
    if(fromTo.empty()){
        cout << "Output: { }" << endl;
    }
    else{
        cout << "Output: {";
        for(auto it = fromTo.begin(); it != fromTo.end(); it++){
            cout << "(" << it->first << "->" << it->second << "), ";
        }
        cout << "}" << endl;
    }


// Question 8
    cout << "Question 8: " << endl;
    std::vector<int> input = {637, 231, 123, 43, 69, 43, 900, 10, 7, 21, 99, 0, 500};
    for(auto &i : input){
        cout << i << " ";
    }
    cout << endl;
    solution.RearrangeFromMedian(input);
    for(auto &i : input){
        cout << i << " ";
    }

    cout << endl;
    input = {637, 231, 123, 43, 69, 43, 900, 10, 7, 21, 99, 0};
    for(auto &i : input){
        cout << i << " ";
    }
    cout << endl;
    solution.RearrangeFromMedian(input);
    for(auto &i : input){
        cout << i << " ";
    }


    return EXIT_SUCCESS;
}