// Name: crt_unknown.c_FUN_005c26c8
// Address: 005c26c8
// Address Range: [[005c26c8, 005c26f3]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c26c8(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c26c8(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  
  iVar1 = 0;
  if (0 < _DAT_02681070) {
    lpCriticalSection = (LPCRITICAL_SECTION)0x2680a40;
    do {
      iVar1 = iVar1 + 1;
      DeleteCriticalSection(lpCriticalSection);
      lpCriticalSection = lpCriticalSection + 1;
    } while (iVar1 < _DAT_02681070);
  }
  return;
}
