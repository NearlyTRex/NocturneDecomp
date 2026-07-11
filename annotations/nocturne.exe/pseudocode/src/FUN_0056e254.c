// Name: FUN_0056e254
// Address: 0056e254
// Address Range: [[0056e254, 0056e2f6]]
// Convention: unknown
// Signature: LPCRITICAL_SECTION FUN_0056e254(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

LPCRITICAL_SECTION FUN_0056e254(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (_DAT_02de5c10 < 0x40) {
    lpCriticalSection = (LPCRITICAL_SECTION)(_DAT_02de5c10 * 0x18 + 0x2de55e0);
    _DAT_02de5c10 = _DAT_02de5c10 + 1;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_00565c50(1,0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      FUN_0056ddc0("Unable to allocate semaphore data\r\n",1);
    }
    _DAT_02de5c18 = FUN_00564a70(_DAT_02de5c18,(_DAT_02de5c14 + 1) * 4);
    if (_DAT_02de5c18 == 0) {
      FUN_0056ddc0("Unable to allocate semaphore data\r\n",1);
    }
    *(LPCRITICAL_SECTION *)(_DAT_02de5c18 + _DAT_02de5c14 * 4) = lpCriticalSection;
    _DAT_02de5c14 = _DAT_02de5c14 + 1;
  }
  InitializeCriticalSection(lpCriticalSection);
  return lpCriticalSection;
}
