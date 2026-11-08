// Name: FUN_004d6700
// Address: 004d6700
// Address Range: [[004d6700, 004d6765]]
// Convention: unknown
// Signature: int FUN_004d6700(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004d6700(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_00488fd0(param_1);
  *(byte ***)(iVar3 + 0x154) = &PTR_FUN_005e1f04;
  FUN_0054eae0(iVar3 + 0x158,0x5c5455);
  uVar1 = _DAT_005e1ef0;
  *(uint *)(iVar3 + 0x326c) = 0x3f19999a;
  uVar2 = _DAT_005e1ef4;
  *(uint *)(iVar3 + 0x3270) = 0x3f000000;
  *(uint *)(iVar3 + 0x27c0) = 0;
  *(uint *)(iVar3 + 0x3274) = uVar1;
  *(uint *)(iVar3 + 0x3278) = uVar2;
  return iVar3;
}
