// Name: crt_unknown.c_FUN_005ad794
// Address: 005ad794
// Address Range: [[005ad794, 005ad836]]
// Convention: unknown
// Signature: LPCRITICAL_SECTION crt_unknown_c_FUN_005ad794(void)

#include "nocturne.h"

LPCRITICAL_SECTION FUN_005ad794(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (g_INT_02d261b0 < 0x40) {
    lpCriticalSection = (LPCRITICAL_SECTION)(g_INT_02d261b0 * 0x18 + 0x2d25b80);
    g_INT_02d261b0 = g_INT_02d261b0 + 1;
  }
  else {
    lpCriticalSection = calloc(1,0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      FUN_005acde0("Unable to allocate semaphore data\r\n",1);
    }
    g_PTR_02d261b8 = realloc(g_PTR_02d261b8,(g_INT_02d261b4 + 1) * 4);
    if (g_PTR_02d261b8 == (byte *)0x0) {
      FUN_005acde0("Unable to allocate semaphore data\r\n",1);
    }
    *(LPCRITICAL_SECTION *)(g_PTR_02d261b8 + g_INT_02d261b4 * 4) = lpCriticalSection;
    g_INT_02d261b4 = g_INT_02d261b4 + 1;
  }
  InitializeCriticalSection(lpCriticalSection);
  return lpCriticalSection;
}
