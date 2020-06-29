
#include "dna.h"

int main()
{
   std::string str = "AGTAGG";
	try
	{
	    DnaSequence dna1((char *) "CCTG");
    	DnaSequence dna2(dna1);
    	DnaSequence dna3(str);
		std::cout <<std::endl;
		std::cout <<std::endl;
		std::cout <<std::endl;
    	std::cout << "dna1: " << dna1.getDnaSequence() << std::endl;
    	std::cout << "dna2: " << dna2.getDnaSequence() << std::endl;
    	std::cout << "dna3: " << dna3.getDnaSequence() << std::endl;
	}catch(std::exception &e)
	{
		std::cout<<e.what()<<std::endl;
	}
	std::cout <<std::endl;
	std::cout <<std::endl;
	std::cout <<std::endl;
	DnaSequence dna4(std::string("CTGCTG"));
    DnaSequence dna5((char*)"TGTGTG");

    std::cout << "dna4: " << dna4.getDnaSequence() << std::endl;
    std::cout << "dna5: " << dna5.getDnaSequence() << std::endl;

    dna4 = (std::string)"GGGCCC";
    dna5 = (std::string)"CCCGGG";

    std::cout << "dna4: " << dna4.getDnaSequence() << std::endl;
    std::cout << "dna5: " << dna5.getDnaSequence() << std::endl;

    dna4 = dna5;

    std::cout << "dna4: " << dna4.getDnaSequence() << std::endl;
    std::cout << "dna5: " << dna5.getDnaSequence() << std::endl;
    std::cout <<std::endl;
	std::cout <<std::endl;
	std::cout <<std::endl;
	DnaSequence dna6((char*)"CCC");
    DnaSequence dna7(std::string("TTT"));
    std::cout << (dna6 == dna7) << std::endl;
    std::cout << (dna6 != dna7) << std::endl;
    std::cout <<std::endl;
	std::cout <<std::endl;
	std::cout <<std::endl;
	DnaSequence dna8((char*)"ACTGGTCA");
    std::cout << "dna8: " << dna8 << std::endl;
    std::cout << "dna8 length: " << dna8.length() << std::endl;
    std::cout<<"dna1[3]: "<<dna8.getDnaSequence()[3]<<std::endl;
    std::cout<<"dna1[7]: "<<dna8.getDnaSequence()[7]<<std::endl;
    dna8[0]='G';
    char c=dna8[0];
    std::cout<<c<<std::endl;
    std::cout << "dna8: " << dna8 << std::endl;
    dna8[0]=dna8[1];
    std::cout << "dna8: " << dna8 << std::endl;
    std::cout <<std::endl;
	std::cout <<std::endl;
	std::cout <<std::endl;
	try
	{
		dna8[0]='E';
	}
	catch (std::exception &e)
	{
		std::cout<<e.what();
	}
	std::cout <<std::endl;
	std::cout <<std::endl;
	std::cout <<std::endl;
	std::cout<<dna8[0];
	std::cout <<std::endl;
	std::cout <<std::endl;
	std::cout <<std::endl;
	DnaSequence dna9((char *)"AAGTTTTAAAAAA");
    DnaSequence dna10=(dna9.slicing(0,2));
    std::cout <<dna10;
    std::cout <<std::endl;
    std::cout <<std::endl;
    std::cout <<std::endl;
    DnaSequence dna11=dna9.pairing();
    std::cout<<dna11;
    std::cout <<std::endl;
    std::cout <<std::endl;
    std::cout <<std::endl;
    std::cout<<dna9.find("TAG");
    std::cout <<std::endl;
    std::cout <<std::endl;
    std::cout <<std::endl;
    std::cout<<dna9.count((const char*)"A");
    std::cout <<std::endl;
    std::cout <<std::endl;
    std::cout <<std::endl;
	std::vector <size_t> arr=dna9.findAll((char *)"A");
	std::cout<<arr[0]<<std::endl;
	std::cout<<arr[1]<<std::endl;
	std::cout<<arr[2]<<std::endl;
	std::cout<<arr[3]<<std::endl;
	std::cout<<arr[4]<<std::endl;
	std::cout<<arr[5]<<std::endl;
	std::cout<<arr[6]<<std::endl;
	std::cout<<arr[7]<<std::endl;
    std::cout <<std::endl;
    std::cout <<std::endl;
    std::cout <<std::endl;
	DnaSequence dna13("TGATAGTAGTAATGATAA");
	std::vector <DnaSequence> arr1=dna13.consensusSequences();
	std::cout<<arr1[0]<<std::endl;
	std::cout<<arr1[1]<<std::endl;
	std::cout<<arr1[2]<<std::endl;
	std::cout<<arr1[3]<<std::endl;
	std::cout<<arr1[4]<<std::endl;
	std::cout<<arr1[4]<<std::endl;
    std::cout <<std::endl;
    std::cout <<std::endl;
    std::cout <<std::endl;
    return 0;
}

