// Name: unkafter_morph.cpp_FUN_005c26f4
// Address: 005c26f4
// Address Range: [[005c26f4, 005c274b]]
// Convention: unknown
// Signature: void unkafter_morph_cpp_FUN_005c26f4(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_morph_cpp_FUN_005c26f4(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < _DAT_02681074) {
    iVar2 = 0;
    do {
      DeleteCriticalSection(*(LPCRITICAL_SECTION *)(iVar2 + _DAT_02681078));
      puVar1 = (uint *)(iVar2 + _DAT_02681078);
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 1;
      FUN_005b86a0(*puVar1);
    } while (iVar3 < _DAT_02681074);
  }
  if (_DAT_02681078 != 0) {
    FUN_005b86a0(_DAT_02681078);
  }
  return;
}
