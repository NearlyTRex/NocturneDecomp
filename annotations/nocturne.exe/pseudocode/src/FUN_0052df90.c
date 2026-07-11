// Name: FUN_0052df90
// Address: 0052df90
// Address Range: [[0052df90, 0052dfdb]]
// Convention: unknown
// Signature: void FUN_0052df90(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052df90(void)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  _DAT_02dc9c94 = 0;
  do {
    puVar1 = (uint *)(iVar2 + 0x2dc9cb0);
    iVar2 = iVar2 + 0x10;
    FUN_00527230(*puVar1);
  } while (iVar2 != 0xa0);
  FUN_00527230(_DAT_02dc9d58);
  FUN_00527230(_DAT_02dc9d5c);
  FUN_00528080();
  return;
}
