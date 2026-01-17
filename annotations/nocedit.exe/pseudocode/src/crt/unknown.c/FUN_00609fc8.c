// Name: crt_unknown.c_FUN_00609fc8
// Address: 00609fc8
// Address Range: [[00609fc8, 00609ff3]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00609fc8()

#include "nocturne.h"

void crt_unknown_c_FUN_00609fc8(void)

{
  CRITICAL_SECTION *lpCriticalSection;
  int iVar1;
  
  iVar1 = 0;
  if (0 < (int)g_StaticCriticalSectionCounter) {
    lpCriticalSection = g_StaticCriticalSectionArray;
    do {
      iVar1 = iVar1 + 1;
      (*g_DeleteCriticalSectionFunc)(lpCriticalSection);
      lpCriticalSection = lpCriticalSection + 1;
    } while (iVar1 < (int)g_StaticCriticalSectionCounter);
  }
  return;
}
