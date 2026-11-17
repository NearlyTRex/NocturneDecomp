// Name: crt_unknown.c_FUN_005c2624
// Address: 005c2624
// Address Range: [[005c2624, 005c26c6]]
// Convention: unknown
// Signature: LPCRITICAL_SECTION crt_unknown_c_FUN_005c2624(void)

#include "nocturne.h"

LPCRITICAL_SECTION FUN_005c2624(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (g_INT_02681070 < 0x40) {
    lpCriticalSection = (LPCRITICAL_SECTION)(g_INT_02681070 * 0x18 + 0x2680a40);
    g_INT_02681070 = g_INT_02681070 + 1;
  }
  else {
    lpCriticalSection = calloc(1,0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      FUN_005c1c20("Unable to allocate semaphore data\r\n",1);
    }
    g_PTR_02681078 = realloc(g_PTR_02681078,(g_INT_02681074 + 1) * 4);
    if (g_PTR_02681078 == (byte *)0x0) {
      FUN_005c1c20("Unable to allocate semaphore data\r\n",1);
    }
    *(LPCRITICAL_SECTION *)(g_PTR_02681078 + g_INT_02681074 * 4) = lpCriticalSection;
    g_INT_02681074 = g_INT_02681074 + 1;
  }
  InitializeCriticalSection(lpCriticalSection);
  return lpCriticalSection;
}
