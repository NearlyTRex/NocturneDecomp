// Name: crt_unknown.c_FUN_005ca9f4
// Address: 005ca9f4
// Address Range: [[005ca9f4, 005caa4b]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005ca9f4(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ca9f4(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < _DAT_02c9ff64) {
    iVar2 = 0;
    do {
      DeleteCriticalSection(*(LPCRITICAL_SECTION *)(iVar2 + _DAT_02c9ff68));
      puVar1 = (uint *)(iVar2 + _DAT_02c9ff68);
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 1;
      FUN_005c09f0(*puVar1);
    } while (iVar3 < _DAT_02c9ff64);
  }
  if (_DAT_02c9ff68 != 0) {
    FUN_005c09f0(_DAT_02c9ff68);
  }
  return;
}
