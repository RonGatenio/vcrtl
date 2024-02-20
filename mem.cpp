#include "src\memcpy.h"

#pragma function(memcpy)
extern "C" void* memcpy(void* dest, void const* src, size_t size) {
	if (dest < src)
	{
		for (size_t i = 0; i < size; i++)
		{
			((char*)dest)[i] = ((char*)src)[i];
		}
	}
	else if (src < dest)
	{
		for (size_t i = 0; i < size; i++)
		{
			((char*)dest)[size - i - 1] = ((char*)src)[size - i - 1];
		}
	}

	return dest;
}

#pragma function(memset)
void* __cdecl memset(void* pTarget, int value, size_t cbTarget) {
	unsigned char* p = static_cast<unsigned char*>(pTarget);
	while (cbTarget-- > 0) {
		*p++ = static_cast<unsigned char>(value);
	}
	return pTarget;
}

#pragma function(memmove)
void* __cdecl memmove(void* s1, const void* s2, size_t n)
{
	return memcpy(s1, s2, n);
}
