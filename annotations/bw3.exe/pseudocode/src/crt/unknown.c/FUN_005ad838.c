// Name: crt_unknown.c_FUN_005ad838
// Address: 005ad838
// Address Range: [[005ad838, 005ad863]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005ad838(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ad838(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  
  iVar1 = 0;
  if (0 < _DAT_02d261b0) {
    lpCriticalSection = (LPCRITICAL_SECTION)0x2d25b80;
    do {
      iVar1 = iVar1 + 1;
      DeleteCriticalSection(lpCriticalSection);
      lpCriticalSection = lpCriticalSection + 1;
    } while (iVar1 < _DAT_02d261b0);
  }
  return;
}
