#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Misha\source\repos\lab 6.3(rec) 1\lab 6.3(rec) 1\lab 6.3(rec) 1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int i;
			int p;
			i = 10;
			p = (i - 1) % 3;
			Assert::AreEqual(p, 0);
		}
	};
}
