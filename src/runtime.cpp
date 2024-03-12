#include "bugcheck.h"
#include "stddef.h"
using namespace vcrtl;

extern "C" void __cdecl __std_terminate()
{
	on_bug_check(bug_check_reason::std_terminate);
}
