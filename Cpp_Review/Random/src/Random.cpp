#include "Random.h"
#include <stdlib.h> //Crand
#include <stdexcept>
#include <iostream>


void CRandom();

void Random::ExecuteRandom(const RandomTypes Mode)
{
	try
	{
		switch (Mode)
		{
		case RandomTypes::CRand: CRandom();
			break;

		case RandomTypes::Other:
			break;

		default:
			break;
		}
	}
	catch (const std::runtime_error& e)
	{
		std::cerr << "Caught an error : " << e.what() << std::endl;
	}

}

//TODO : Implement different random function, cf page 95
void CRandom()
{
	throw std::runtime_error("Function not implemented");
	rand();
}