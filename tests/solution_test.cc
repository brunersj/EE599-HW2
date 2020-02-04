#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

// TEST(HelloWorldShould, ReturnHelloWorld) {
//   Solution solution;
//   std::string actual = solution.PrintHelloWorld();
//   std::string expected = "**** Hello World ****";
//   EXPECT_EQ(expected, actual);
// }

// Question 1
TEST(Add2IntTest, HandlesPosValue) {
    Solution solution;
    int A = 3;
    int B = 1;
    int actual = solution.Add( A,  B);
    int expected = 4;
    EXPECT_EQ(expected, actual);
}

TEST(Add2StringTest, HandlesStrings) {
    Solution solution;
    std::string A = "abc";
    std::string B = "efg";
    std::string actual = solution.Add( A,  B);
    std::string expected = "abcefg";
    EXPECT_EQ(expected, actual);
}

TEST(AddIntStringTest, HandlesStringFirst) {
    Solution solution;
    std::string A = "EE";
    int B = 599;
    std::string actual = solution.Add( A,  B);
    std::string expected = "EE599";
    EXPECT_EQ(expected, actual);
}

TEST(AddStringIntTest, HandlesIntFirst) {
    Solution solution;
    std::string B = "EE";
    int A = 599;
    std::string actual = solution.Add( A,  B);
    std::string expected = "599EE";
    EXPECT_EQ(expected, actual);
}

// Question 2 - no tests required

// Question 3

TEST(RemoveDupStringSetTest, HandlesAllIdentical) {
    Solution solution;
    std::vector<int> actual = {1,1,1};
    solution.RemoveDupSet(actual);
    std::vector<int> expected = {1};
    EXPECT_EQ(expected, actual);
}

TEST(RemoveDupStringSetTest, HandlesConsecutive) {
    Solution solution;
    std::vector<int> actual = {1,2,3,4};
    solution.RemoveDupSet(actual);
    std::vector<int> expected = {1,2,3,4};
    EXPECT_EQ(expected, actual);
}

TEST(RemoveDupStringSetTest, HandlesMultDup) {
    Solution solution;
    std::vector<int> actual = {3,2,3,4,6,6};
    solution.RemoveDupSet(actual);
    std::vector<int> expected = {2,3,4,6};
    EXPECT_EQ(expected, actual);
}

  TEST(RemoveDupStringSetTest, HandlesEmptySet) {
    Solution solution;
    std::vector<int> actual = {};
    solution.RemoveDupSet(actual);
    std::vector<int> expected = {};
    EXPECT_EQ(expected, actual);
}


TEST(RemoveDupStringNoSetTest, HandlesAllIdentical) {
    Solution solution;
    std::vector<int> actual = {1,1,1,1};
    solution.RemoveDupNoSet(actual);
    std::vector<int> expected = {1};
    EXPECT_EQ(expected, actual);
}

TEST(RemoveDupStringNoSetTest, HandlesConsecutive) {
    Solution solution;
    std::vector<int> actual = {1,2,3,4};
    solution.RemoveDupNoSet(actual);
    std::vector<int> expected = {1,2,3,4};
    EXPECT_EQ(expected, actual);
}

TEST(RemoveDupStringNoSetTest, HandlesMultDup) {
    Solution solution;
    std::vector<int> actual = {3,2,3,4,6,6};
    solution.RemoveDupNoSet(actual);
    std::vector<int> expected = {2,3,4,6};
    EXPECT_EQ(expected, actual);
}

TEST(RemoveDupStringNoSetTest, HandlesEmptySet) {
    Solution solution;
    std::vector<int> actual = {};
    solution.RemoveDupNoSet(actual);
    std::vector<int> expected = {};
    EXPECT_EQ(expected, actual);
}

TEST(ConcatVectTest, HandlesBothEmpty) {
    Solution solution;
    std::vector<int> in1 = {};
    std::vector<int> in2 = {};  
    std::vector<int> actual = solution.ConcatVect(in1,in2);
    std::vector<int> expected = {};
    EXPECT_EQ(expected, actual);
}

TEST(ConcatVectTest, HandlesFirstEmpty) {
    Solution solution;
    std::vector<int> in1 = {};
    std::vector<int> in2 = {1,2,3};  
    std::vector<int> actual = solution.ConcatVect(in1,in2);
    std::vector<int> expected = {1,2,3};
    EXPECT_EQ(expected, actual);
}

TEST(ConcatVectTest, HandlesBothNormal) {
    Solution solution;
    std::vector<int> in1 = {3,2,1};
    std::vector<int> in2 = {1,2,3};  
    std::vector<int> actual = solution.ConcatVect(in1,in2);
    std::vector<int> expected = {3,2,1,1,2,3};
    EXPECT_EQ(expected, actual);
}

TEST(FindIntersectionTest, HandlesReversedVect) { // fails if vectors are not sorted
    Solution solution;
    std::vector<int> in1 = {3,2,1};
    std::vector<int> in2 = {1,2,3};  
    std::vector<int> actual = solution.FindIntersect(in1,in2);
    std::vector<int> expected = {1,2,3};
    EXPECT_EQ(expected, actual);
}

TEST(FindIntersectionTest, HandlesEmptyVect) { 
    Solution solution;
    std::vector<int> in1 = {};
    std::vector<int> in2 = {1,2,3};  
    std::vector<int> actual = solution.FindIntersect(in1,in2);
    std::vector<int> expected = {};
    EXPECT_EQ(expected, actual);
}

TEST(FindIntersectionTest, Handles1Intersection) { 
    Solution solution;
    std::vector<int> in1 = {1,2,3};
    std::vector<int> in2 = {3,4,5};  
    std::vector<int> actual = solution.FindIntersect(in1,in2);
    std::vector<int> expected = {3};
    EXPECT_EQ(expected, actual);
}

// Question 4

TEST(SwapRefTest, HandlesUniqueValues) { 
    Solution solution;
    int actualX = 20;
    int actualY = 30; 
    solution.SwapRef(actualX,actualY);
    int expectedX = {30};
    int expectedY = {20};

    EXPECT_EQ(expectedX, actualX);
    EXPECT_EQ(expectedY, actualY);
}

TEST(SwapPtrTest, HandlesUniqueValues) { 
    Solution solution;
    int actualX = 20;
    int actualY = 30; 
    solution.SwapRef(actualX,actualY);
    int expectedX = {30};
    int expectedY = {20};

    EXPECT_EQ(expectedX, actualX);
    EXPECT_EQ(expectedY, actualY);
}

// Question 5 

TEST(SwapStringTest, HandlesSameIndex) { 
    Solution solution;
    std::string actual = "TEST";
    solution.SwapString(actual,0,0);
    std::string expected = "TEST";

    EXPECT_EQ(expected, actual);
}

TEST(SwapStringTest, HandlesOutOfBoundIndex) { 
    Solution solution;
    std::string actual = "TEST";
    solution.SwapString(actual,5,0);
    std::string expected = "TEST";

    EXPECT_EQ(expected, actual);
}

TEST(SwapStringTest, HandlesValidIndex) { 
    Solution solution;
    std::string actual = "TEST";
    solution.SwapString(actual,1,0);
    std::string expected = "ETST";

    EXPECT_EQ(expected, actual);
}


TEST(ReverseStringTest, HandlesValidString) { 
    Solution solution;
    std::string actual = "EE599";
    solution.ReverseString(actual);
    std::string expected = "995EE";

    EXPECT_EQ(expected, actual);
}

TEST(StringToLowerTest, HandlesValidString) { 
    Solution solution;
    std::string actual = "EE599";
    solution.StringToLower(actual);
    std::string expected = "ee599";

    EXPECT_EQ(expected, actual);
}

// Question 6 

TEST(SinglePalindromeTest, HandlesAlphaPalindrome) { 
    Solution solution;
    std::string input = "madam";
    bool actual = solution.SinglePalindrome(input);
    bool expected = true;

    EXPECT_EQ(expected, actual);
}

TEST(SinglePalindromeTest, HandlesNumPalindrome) { 
    Solution solution;
    std::string input = "10801";
    bool actual = solution.SinglePalindrome(input);
    bool expected = true;

    EXPECT_EQ(expected, actual);
}

TEST(SinglePalindromeTest, HandlesAlphaNonPalindrome) { 
    Solution solution;
    std::string input = "palindrome";
    bool actual = solution.SinglePalindrome(input);
    bool expected = false;

    EXPECT_EQ(expected, actual);
}

TEST(SinglePalindromeTest, HandlesSize1) { 
    Solution solution;
    std::string input = "1";
    bool actual = solution.SinglePalindrome(input);
    bool expected = true;

    EXPECT_EQ(expected, actual);
}

TEST(SinglePalindromeTest, HandlesEmptyString) { 
    Solution solution;
    std::string input = "";
    bool actual = solution.SinglePalindrome(input);
    bool expected = true;

    EXPECT_EQ(expected, actual);
}


TEST(ApproxPalindromeTest, HandlesApproxPalindrome) { 
    Solution solution;
    std::string input = "A man, a plan, a canal, Panama!";
    bool actual = solution.ApproxPalindrome(input);
    bool expected = true;

    EXPECT_EQ(expected, actual);
}

TEST(ApproxPalindromeTest, HandlesNonApproxPalindrome) { 
    Solution solution;
    std::string input = "A man, a pla, a canal, Panama!";
    bool actual = solution.ApproxPalindrome(input);
    bool expected = false;

    EXPECT_EQ(expected, actual);
}

TEST(ApproxPalindromeTest, Handles1ValidChar) { 
    Solution solution;
    std::string input = "][1- %^&";
    bool actual = solution.ApproxPalindrome(input);
    bool expected = true;

    EXPECT_EQ(expected, actual);
}

TEST(ApproxPalindromeTest, HandlesSize1) { 
    Solution solution;
    std::string input = "a";
    bool actual = solution.ApproxPalindrome(input);
    bool expected = true;

    EXPECT_EQ(expected, actual);
}

TEST(ApproxPalindromeTest, HandlesEmptyString) { 
    Solution solution;
    std::string input = "";
    bool actual = solution.ApproxPalindrome(input);
    bool expected = true;

    EXPECT_EQ(expected, actual);
}

// Question 7 

TEST(MapStringTest, Handles2CharMap) { 
    Solution solution;
    std::string from = "add";
    std::string to = "egg";
    std::map<char,char> actual = solution.MapString(from,to);
    std::map<char,char> expected = {{'a', 'e'}, {'d', 'g'}};

    EXPECT_EQ(expected, actual);
}

TEST(MapStringTest, HandlesDifferentSizeInputs) { 
    Solution solution;
    std::string from = "extreme";
    std::string to = "egg";
    std::map<char,char> actual = solution.MapString(from,to);
    std::map<char,char> expected = {};

    EXPECT_EQ(expected, actual);
}

TEST(MapStringTest, HandlesSameSizeNonMappableInputs) { 
    Solution solution;
    std::string from = "harder";
    std::string to = "waiter";
    std::map<char,char> actual = solution.MapString(from,to);
    std::map<char,char> expected = {};

    EXPECT_EQ(expected, actual);
}

TEST(MapStringTest, Handles3CharMap) { 
    Solution solution;
    std::string from = "aabbrr";
    std::string to = "ddeekk";
    std::map<char,char> actual = solution.MapString(from,to);
    std::map<char,char> expected = {{'a', 'd'},{'b','e'},{'r','k'}};

    EXPECT_EQ(expected, actual);
}

TEST(MapStringTest, HandlesMultipleCharMap) { 
    Solution solution;
    std::string from = "aabbrr";
    std::string to = "ddeekk";
    std::map<char,char> actual = solution.MapString(from,to);
    std::map<char,char> expected = {{'a', 'd'},{'b','e'},{'r','k'}};

    EXPECT_EQ(expected, actual);
}

TEST(MapStringTest, HandlesNonAlphaInput) { 
    Solution solution;
    std::string from = "aa3^b";
    std::string to = "hdioa";
    std::map<char,char> actual = solution.MapString(from,to);
    std::map<char,char> expected = {};

    EXPECT_EQ(expected, actual);
}

// Question 8


TEST(RearrangeFromMedianTest, HandlesOddVect) { 
    Solution solution;
    std::vector<int> actual = {637, 231, 123, 43, 69, 43, 900, 10, 7, 21, 99, 0, 500};
    solution.RearrangeFromMedian(actual);
    std::vector<int> expected = {43, 43, 21,10, 7, 0, 69, 900, 637, 500, 231, 123, 99};

    EXPECT_EQ(expected, actual);
}

TEST(RearrangeFromMedianTest, HandlesEvenVect) { 
    Solution solution;
    std::vector<int> actual = {637, 231, 123, 43, 43, 900, 10, 7, 21, 99, 0, 500};
    solution.RearrangeFromMedian(actual);
    std::vector<int> expected = {43, 43, 21,10, 7, 0, 900, 637, 500, 231, 123, 99};

    EXPECT_EQ(expected, actual);
}

