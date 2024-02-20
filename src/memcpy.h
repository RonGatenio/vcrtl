#include "stddef.h"

extern "C" void * memcpy(void * dest, void const * src, size_t size);
#pragma intrinsic(memcpy)

extern "C" void* __cdecl memset(void*, int, size_t);
#pragma intrinsic(memset)

extern "C" void* __cdecl memmove(void* s1, const void* s2, size_t n);
#pragma intrinsic(memmove)

#pragma once
