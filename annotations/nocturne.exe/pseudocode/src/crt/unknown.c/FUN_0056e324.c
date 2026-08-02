// Name: crt_unknown.c_FUN_0056e324
// Address: 0056e324
// Address Range: [[0056e324, 0056e37b]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_0056e324(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056e324(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < _DAT_02de5c14) {
    iVar2 = 0;
    do {
      DeleteCriticalSection(*(LPCRITICAL_SECTION *)(iVar2 + _DAT_02de5c18));
      puVar1 = (uint *)(iVar2 + _DAT_02de5c18);
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 1;
      FUN_005638d0(*puVar1);
    } while (iVar3 < _DAT_02de5c14);
  }
  if (_DAT_02de5c18 != 0) {
    FUN_005638d0(_DAT_02de5c18);
  }
  return;
}
