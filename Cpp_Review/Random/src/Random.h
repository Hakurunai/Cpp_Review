#ifndef RANDOM__H
#define RANDOM__H

namespace Random
{
	enum class RandomTypes
	{
		CRand = 0,
		Other
	};

	void ExecuteRandom(const RandomTypes Mode);
}

#endif // RANDOM__H