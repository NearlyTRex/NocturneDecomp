// Name: crt_unknown.c_FUN_005ad794
// Address: 005ad794
// Address Range: [[005ad794, 005ad836]]
// Convention: unknown
// Signature: LPCRITICAL_SECTION crt_unknown_c_FUN_005ad794(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

LPCRITICAL_SECTION FUN_005ad794(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (_DAT_02d261b0 < 0x40) {
    lpCriticalSection = (LPCRITICAL_SECTION)(_DAT_02d261b0 * 0x18 + 0x2d25b80);
    _DAT_02d261b0 = _DAT_02d261b0 + 1;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_005a4b20(1,0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      FUN_005acde0("Unable to allocate semaphore data\r\n",1);
    }
    _DAT_02d261b8 = realloc(_DAT_02d261b8,(_DAT_02d261b4 + 1) * 4);
    if (_DAT_02d261b8 == (void *)0x0) {
      FUN_005acde0("Unable to allocate semaphore data\r\n",1);
    }
    *(LPCRITICAL_SECTION *)((int)_DAT_02d261b8 + _DAT_02d261b4 * 4) = lpCriticalSection;
    _DAT_02d261b4 = _DAT_02d261b4 + 1;
  }
  InitializeCriticalSection(lpCriticalSection);
  return lpCriticalSection;
}
