// Name: FUN_004b8ca0
// Address: 004b8ca0
// Address Range: [[004b8ca0, 004b8cfb]]
// Convention: unknown
// Signature: int FUN_004b8ca0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004b8ca0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_00479560(param_1);
  *(byte ***)(iVar3 + 0x14c) = &PTR_FUN_0059f0d4;
  FUN_0051e0c0(iVar3 + 0x150,"hotdemon.dfm");
  uVar2 = _DAT_0059f0c4;
  uVar1 = _DAT_0059f0c0;
  *(uint *)(iVar3 + 0x2dd4) = 0x3f19999a;
  *(uint *)(iVar3 + 0x2dd8) = 0x3f666666;
  *(uint *)(iVar3 + 0x2ddc) = uVar1;
  *(uint *)(iVar3 + 0x2de0) = uVar2;
  return iVar3;
}
