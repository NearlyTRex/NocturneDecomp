// Name: crt_unknown.c_FUN_0056e254
// Address: 0056e254
// Address Range: [[0056e254, 0056e2f6]]
// Convention: unknown
// Signature: LPCRITICAL_SECTION crt_unknown_c_FUN_0056e254(void)

#include "nocturne.h"

LPCRITICAL_SECTION FUN_0056e254(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (g_INT_02de5c10 < 0x40) {
    lpCriticalSection = (LPCRITICAL_SECTION)(g_INT_02de5c10 * 0x18 + 0x2de55e0);
    g_INT_02de5c10 = g_INT_02de5c10 + 1;
  }
  else {
    lpCriticalSection = calloc(1,0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      HandleRuntimeError("Unable to allocate semaphore data\r\n",1);
    }
    g_PTR_02de5c18 = realloc(g_PTR_02de5c18,(g_INT_02de5c14 + 1) * 4);
    if (g_PTR_02de5c18 == (byte *)0x0) {
      HandleRuntimeError("Unable to allocate semaphore data\r\n",1);
    }
    *(LPCRITICAL_SECTION *)(g_PTR_02de5c18 + g_INT_02de5c14 * 4) = lpCriticalSection;
    g_INT_02de5c14 = g_INT_02de5c14 + 1;
  }
  InitializeCriticalSection(lpCriticalSection);
  return lpCriticalSection;
}
