// Name: FUN_0055a360
// Address: 0055a360
// Address Range: [[0055a360, 0055a3ab]]
// Convention: unknown
// Signature: void FUN_0055a360(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055a360(void)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  _DAT_0264bad4 = 0;
  do {
    puVar1 = (uint *)(iVar2 + 0x264baf0);
    iVar2 = iVar2 + 0x10;
    FUN_00551050(*puVar1);
  } while (iVar2 != 0xa0);
  FUN_00551050(_DAT_0264bb98);
  FUN_00551050(_DAT_0264bb9c);
  FUN_005526b0();
  return;
}
