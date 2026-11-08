// Name: FUN_004d37f0
// Address: 004d37f0
// Address Range: [[004d37f0, 004d384b]]
// Convention: unknown
// Signature: int FUN_004d37f0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004d37f0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_00487db0(param_1);
  *(byte **)(iVar3 + 0x2b0) = &DAT_005f8874;
  FUN_005478b0(iVar3 + 0x2b4,"hotdemon.dfm");
  uVar2 = _DAT_005f8864;
  uVar1 = _DAT_005f8860;
  *(uint *)(iVar3 + 0x3430) = 0x3f19999a;
  *(uint *)(iVar3 + 0x3434) = 0x3f666666;
  *(uint *)(iVar3 + 0x3438) = uVar1;
  *(uint *)(iVar3 + 0x343c) = uVar2;
  return iVar3;
}
