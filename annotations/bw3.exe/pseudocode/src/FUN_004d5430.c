// Name: FUN_004d5430
// Address: 004d5430
// Address Range: [[004d5430, 004d548b]]
// Convention: unknown
// Signature: int FUN_004d5430(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004d5430(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_00488fd0(param_1);
  *(byte ***)(iVar3 + 0x154) = &PTR_FUN_005e1914;
  FUN_0054eae0(iVar3 + 0x158,"hotdemon.dfm");
  uVar2 = _DAT_005e1904;
  uVar1 = _DAT_005e1900;
  *(uint *)(iVar3 + 0x326c) = 0x3f19999a;
  *(uint *)(iVar3 + 0x3270) = 0x3f666666;
  *(uint *)(iVar3 + 0x3274) = uVar1;
  *(uint *)(iVar3 + 0x3278) = uVar2;
  return iVar3;
}
