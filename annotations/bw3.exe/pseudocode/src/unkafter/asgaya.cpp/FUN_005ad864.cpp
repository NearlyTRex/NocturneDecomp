// Name: unkafter_asgaya.cpp_FUN_005ad864
// Address: 005ad864
// Address Range: [[005ad864, 005ad8bb]]
// Convention: unknown
// Signature: void unkafter_asgaya_cpp_FUN_005ad864(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_asgaya_cpp_FUN_005ad864(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < _DAT_02d261b4) {
    iVar2 = 0;
    do {
      DeleteCriticalSection(*(LPCRITICAL_SECTION *)(iVar2 + _DAT_02d261b8));
      puVar1 = (uint *)(iVar2 + _DAT_02d261b8);
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 1;
      FUN_005a3770(*puVar1);
    } while (iVar3 < _DAT_02d261b4);
  }
  if (_DAT_02d261b8 != 0) {
    FUN_005a3770(_DAT_02d261b8);
  }
  return;
}
