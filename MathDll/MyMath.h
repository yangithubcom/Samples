#pragma once

#ifdef MATHDLL_EXPORTS
#define API_DECLSPEC  __declspec(dllexport)
#else
#define API_DECLSPEC  __declspec(dllimport)
#endif

class API_DECLSPEC MyMath
{
public:
	int  Add(int a, int b);
};

