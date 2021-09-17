#include "pch.h"
#include "CppUnitTest.h"
#include "../Isograms/Isogram.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestIsograms
{
	TEST_CLASS(TestIsograms)
	{
	public:
		
		TEST_METHOD(test_isogram)
		{
			Assert::IsTrue(Isogram::is_isogram("Dermatoglyphics"));
			Assert::IsFalse(Isogram::is_isogram("moose"));
			Assert::IsFalse(Isogram::is_isogram("isIsogram"));
		}
	};
}
