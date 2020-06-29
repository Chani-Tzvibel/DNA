#include "dna.h"
#include <gtest/gtest.h>

TEST(UseDnaSequence, initDnaSeqence)
{
    DnaSequence d("AAGTTTTAAAAAA");
	std::string s="AAGTTTTAAAAAA";
	DnaSequence d1(s);
	ASSERT_EQ(d,s);
}

TEST(UseDnaSequence,testSlicing)
{
	DnaSequence d("AAGTTTTAAAAAA");
    ASSERT_EQ(d.slicing(3,6),"TTT");
}

TEST(UseDnaSequence, testCount)
{
	DnaSequence d("AAGTTTTAAAAAA");
    ASSERT_EQ(d.count("A"),8);
}




