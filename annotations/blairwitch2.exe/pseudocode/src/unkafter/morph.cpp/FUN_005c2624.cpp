// Name: unkafter_morph.cpp_FUN_005c2624
// Address: 005c2624
// Address Range: [[005c2624, 005c26c6]]
// Convention: unknown
// Signature: LPCRITICAL_SECTION unkafter_morph_cpp_FUN_005c2624(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

LPCRITICAL_SECTION unkafter_morph_cpp_FUN_005c2624(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (_DAT_02681070 < 0x40) {
    lpCriticalSection = (LPCRITICAL_SECTION)(_DAT_02681070 * 0x18 + 0x2680a40);
    _DAT_02681070 = _DAT_02681070 + 1;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_005b98d0(1,0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      FUN_005c1c20("Unable to allocate semaphore data\r\n",1);
    }
    _DAT_02681078 = realloc(_DAT_02681078,(_DAT_02681074 + 1) * 4);
    if (_DAT_02681078 == (void *)0x0) {
      FUN_005c1c20("Unable to allocate semaphore data\r\n",1);
    }
    *(LPCRITICAL_SECTION *)((int)_DAT_02681078 + _DAT_02681074 * 4) = lpCriticalSection;
    _DAT_02681074 = _DAT_02681074 + 1;
  }
  InitializeCriticalSection(lpCriticalSection);
  return lpCriticalSection;
}
