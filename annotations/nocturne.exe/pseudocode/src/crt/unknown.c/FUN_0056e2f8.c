// Name: crt_unknown.c_FUN_0056e2f8
// Address: 0056e2f8
// Address Range: [[0056e2f8, 0056e323]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_0056e2f8(void)

#include "nocturne.h"

void FUN_0056e2f8(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  
  iVar1 = 0;
  if (0 < g_INT_02de5c10) {
    lpCriticalSection = (LPCRITICAL_SECTION)0x2de55e0;
    do {
      iVar1 = iVar1 + 1;
      DeleteCriticalSection(lpCriticalSection);
      lpCriticalSection = lpCriticalSection + 1;
    } while (iVar1 < g_INT_02de5c10);
  }
  return;
}
