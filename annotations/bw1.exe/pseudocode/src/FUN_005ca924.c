// Name: FUN_005ca924
// Address: 005ca924
// Address Range: [[005ca924, 005ca9c6]]
// Convention: unknown
// Signature: LPCRITICAL_SECTION FUN_005ca924(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

LPCRITICAL_SECTION FUN_005ca924(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (_DAT_02c9ff60 < 0x40) {
    lpCriticalSection = (LPCRITICAL_SECTION)(_DAT_02c9ff60 * 0x18 + 0x2c9f930);
    _DAT_02c9ff60 = _DAT_02c9ff60 + 1;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_005c1cb0(1,0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      FUN_005c9f70("Unable to allocate semaphore data\r\n",1);
    }
    _DAT_02c9ff68 = FUN_005c10d0(_DAT_02c9ff68,(_DAT_02c9ff64 + 1) * 4);
    if (_DAT_02c9ff68 == 0) {
      FUN_005c9f70("Unable to allocate semaphore data\r\n",1);
    }
    *(LPCRITICAL_SECTION *)(_DAT_02c9ff68 + _DAT_02c9ff64 * 4) = lpCriticalSection;
    _DAT_02c9ff64 = _DAT_02c9ff64 + 1;
  }
  InitializeCriticalSection(lpCriticalSection);
  return lpCriticalSection;
}
