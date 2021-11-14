#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab-7.1.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int** a = new int* [2];
			a[0] = new int[2]{ 0, 0 };
			a[1] = new int[2]{ 0, 1 };
			int S;
			int k;
			Calc(a, 2, 2, S, k);
			Assert::AreEqual(0, S);
		}
	};
}