#pragma once

#ifdef MATHLIB_EXPORTS
#define API_DECLSPEC  __declspec(dllexport)
#else
#define API_DECLSPEC  __declspec(dllimport)
#endif

namespace MathLib2 {
	API_DECLSPEC class MyMathWrapper2
	{
	public:
		API_DECLSPEC int Add(int a, int b);
	};
}

