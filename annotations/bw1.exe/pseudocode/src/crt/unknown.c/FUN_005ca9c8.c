// Name: crt_unknown.c_FUN_005ca9c8
// Address: 005ca9c8
// Address Range: [[005ca9c8, 005ca9f3]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005ca9c8(void)

#include "nocturne.h"

void FUN_005ca9c8(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  
  iVar1 = 0;
  if (0 < g_INT_02c9ff60) {
    lpCriticalSection = (LPCRITICAL_SECTION)0x2c9f930;
    do {
      iVar1 = iVar1 + 1;
      DeleteCriticalSection(lpCriticalSection);
      lpCriticalSection = lpCriticalSection + 1;
    } while (iVar1 < g_INT_02c9ff60);
  }
  return;
}
