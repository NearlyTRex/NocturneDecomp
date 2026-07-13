// Name: FUN_0043bbe0
// Address: 0043bbe0
// Address Range: [[0043bbe0, 0043bc45]]
// Convention: unknown
// Signature: int FUN_0043bbe0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0043bbe0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_00479560(param_1);
  *(byte ***)(iVar3 + 0x14c) = &PTR_FUN_0059b8a4;
  FUN_0051e0c0(iVar3 + 0x150,"cow.dfm");
  uVar1 = _DAT_0059b88c;
  *(uint *)(iVar3 + 0x2dd4) = 0x3fe00000;
  uVar2 = _DAT_0059b890;
  *(uint *)(iVar3 + 0x2dd8) = 0x40600000;
  *(uint *)(iVar3 + 0xbd2c) = 0;
  *(uint *)(iVar3 + 0x2ddc) = uVar1;
  *(uint *)(iVar3 + 0x2de0) = uVar2;
  return iVar3;
}
