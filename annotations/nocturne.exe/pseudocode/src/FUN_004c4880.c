// Name: FUN_004c4880
// Address: 004c4880
// Address Range: [[004c4880, 004c4903]]
// Convention: unknown
// Signature: int FUN_004c4880(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004c4880(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_00479560(param_1);
  *(byte ***)(iVar3 + 0x14c) = &PTR_FUN_0059fa84;
  FUN_0051e0c0(iVar3 + 0x150,"worm.dfm");
  *(uint *)(iVar3 + 0x2dd4) = 0x3e800000;
  *(uint *)(iVar3 + 0x2dd8) = 0x3f000000;
  *(uint *)(iVar3 + 0x2608) = 1;
  uVar1 = _DAT_0059fa70;
  *(uint *)(iVar3 + 0x2434) = 0x41700000;
  uVar2 = _DAT_0059fa74;
  *(uint *)(iVar3 + 0xbd28) = 0;
  *(uint *)(iVar3 + 0xbd2c) = 0;
  *(uint *)(iVar3 + 0x2ddc) = uVar1;
  *(uint *)(iVar3 + 0x2de0) = uVar2;
  return iVar3;
}
