#include "General_Include.h"

#include "Random.h"

static void RandomTest()
{
	Random::ExecuteRandom(Random::RandomTypes::CRand);
}

void main()
{
	RandomTest();
	int32 v{ 4'000 };
	return;
}