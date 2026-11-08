// Name: FUN_0052a720
// Address: 0052a720
// Address Range: [[0052a720, 0052a785]]
// Convention: unknown
// Signature: int FUN_0052a720(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0052a720(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_00487db0(param_1);
  *(uint *)(iVar3 + 0x2b0) = 0x5fb064;
  FUN_005478b0(iVar3 + 0x2b4,"sentinel.dfm");
  uVar1 = _DAT_005fb04c;
  *(uint *)(iVar3 + 0x3430) = 0x3f19999a;
  uVar2 = _DAT_005fb050;
  *(uint *)(iVar3 + 0x3434) = 0x40000000;
  *(uint *)(iVar3 + 0x10afc) = 0;
  *(uint *)(iVar3 + 0x3438) = uVar1;
  *(uint *)(iVar3 + 0x343c) = uVar2;
  return iVar3;
}
