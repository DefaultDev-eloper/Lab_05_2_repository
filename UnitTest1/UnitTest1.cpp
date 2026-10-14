#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(Test_Function_A)
        {
            double x = 2.0;
            int n = 1;
            double initial_a = -0.5;
            double expected = initial_a * (-(2.0 * n - 1.0) / ((2.0 * n + 1.0) * x * x));

            double actual = A(x, n, initial_a);

            Assert::AreEqual(expected, actual, 0.000001);
        }

        TEST_METHOD(Test_Function_S_Accuracy)
        {
            double x = 2.5;
            double eps = 0.00001;
            int n = 0;
            double s = 0;

            double actual_S = S(x, eps, n, s);

            double expected_atan = atan(x);

            Assert::AreEqual(expected_atan, actual_S, eps);

            Assert::IsTrue(n > 0);
        }
    };
}