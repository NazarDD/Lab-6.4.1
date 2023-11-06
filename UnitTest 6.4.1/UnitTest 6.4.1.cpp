#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.4.1/Lab 6.4.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

TEST_CLASS(ArrayFunctionsTest)
{
public:
    TEST_METHOD(TestFindMaxIndex)
    {
        std::vector<int> arr = { 5, 2, 9, 8, 4 };
        findMaxIndex(arr);
    }

    TEST_METHOD(TestProductBetweenZeros)
    {
        std::vector<int> arr = { 3, 4, 0, 6, 8, 0, 2, 5 };
        productBetweenZeros(arr);
    }

    TEST_METHOD(TestProductBetweenZerosNoZeros)
    {
        std::vector<int> arr = { 1, 2, 3, 4, 5 };
        productBetweenZeros(arr);
    }
};
