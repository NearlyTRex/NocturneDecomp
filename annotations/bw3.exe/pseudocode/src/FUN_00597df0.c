// Name: FUN_00597df0
// Address: 00597df0
// Address Range: [[00597df0, 00597e4b]]
// Convention: unknown
// Signature: int FUN_00597df0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00597df0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_00488fd0(param_1);
  *(byte ***)(iVar3 + 0x154) = &PTR_FUN_005e7874;
  FUN_0054eae0(iVar3 + 0x158,"shadowscorp.dfm");
  uVar2 = _DAT_005e7864;
  uVar1 = _DAT_005e7860;
  *(uint *)(iVar3 + 0x326c) = 0x3fe00000;
  *(uint *)(iVar3 + 0x3270) = 0x40600000;
  *(uint *)(iVar3 + 0x3274) = uVar1;
  *(uint *)(iVar3 + 0x3278) = uVar2;
  return iVar3;
}
