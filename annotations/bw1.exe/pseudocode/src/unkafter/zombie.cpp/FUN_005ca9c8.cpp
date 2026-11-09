// Name: unkafter_zombie.cpp_FUN_005ca9c8
// Address: 005ca9c8
// Address Range: [[005ca9c8, 005ca9f3]]
// Convention: unknown
// Signature: void unkafter_zombie_cpp_FUN_005ca9c8(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_zombie_cpp_FUN_005ca9c8(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  
  iVar1 = 0;
  if (0 < _DAT_02c9ff60) {
    lpCriticalSection = (LPCRITICAL_SECTION)0x2c9f930;
    do {
      iVar1 = iVar1 + 1;
      DeleteCriticalSection(lpCriticalSection);
      lpCriticalSection = lpCriticalSection + 1;
    } while (iVar1 < _DAT_02c9ff60);
  }
  return;
}
