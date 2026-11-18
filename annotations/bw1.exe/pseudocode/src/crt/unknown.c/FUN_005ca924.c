// Name: crt_unknown.c_FUN_005ca924
// Address: 005ca924
// Address Range: [[005ca924, 005ca9c6]]
// Convention: unknown
// Signature: LPCRITICAL_SECTION crt_unknown_c_FUN_005ca924(void)

#include "nocturne.h"

LPCRITICAL_SECTION FUN_005ca924(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (g_INT_02c9ff60 < 0x40) {
    lpCriticalSection = (LPCRITICAL_SECTION)(g_INT_02c9ff60 * 0x18 + 0x2c9f930);
    g_INT_02c9ff60 = g_INT_02c9ff60 + 1;
  }
  else {
    lpCriticalSection = calloc(1,0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      FUN_005c9f70("Unable to allocate semaphore data\r\n",1);
    }
    g_PTR_02c9ff68 = realloc(g_PTR_02c9ff68,(g_INT_02c9ff64 + 1) * 4);
    if (g_PTR_02c9ff68 == (byte *)0x0) {
      FUN_005c9f70("Unable to allocate semaphore data\r\n",1);
    }
    *(LPCRITICAL_SECTION *)(g_PTR_02c9ff68 + g_INT_02c9ff64 * 4) = lpCriticalSection;
    g_INT_02c9ff64 = g_INT_02c9ff64 + 1;
  }
  InitializeCriticalSection(lpCriticalSection);
  return lpCriticalSection;
}
