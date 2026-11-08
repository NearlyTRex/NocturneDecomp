// Name: FUN_0055fee0
// Address: 0055fee0
// Address Range: [[0055fee0, 0055ff2b]]
// Convention: unknown
// Signature: void FUN_0055fee0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055fee0(void)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  _DAT_02cf5ec4 = 0;
  do {
    puVar1 = (uint *)(iVar2 + 0x2cf5ee0);
    iVar2 = iVar2 + 0x10;
    FUN_00556be0(*puVar1);
  } while (iVar2 != 0xa0);
  FUN_00556be0(_DAT_02cf5f88);
  FUN_00556be0(_DAT_02cf5f8c);
  FUN_00558250();
  return;
}
