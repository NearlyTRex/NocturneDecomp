// Name: FUN_00505920
// Address: 00505920
// Address Range: [[00505920, 00505985]]
// Convention: unknown
// Signature: int FUN_00505920(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00505920(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_00479560(param_1);
  *(byte ***)(iVar3 + 0x14c) = &PTR_FUN_005a1754;
  FUN_0051e0c0(iVar3 + 0x150,"sentinel.dfm");
  uVar1 = _DAT_005a173c;
  *(uint *)(iVar3 + 0x2dd4) = 0x3f19999a;
  uVar2 = _DAT_005a1740;
  *(uint *)(iVar3 + 0x2dd8) = 0x40000000;
  *(uint *)(iVar3 + 0xbd28) = 0;
  *(uint *)(iVar3 + 0x2ddc) = uVar1;
  *(uint *)(iVar3 + 0x2de0) = uVar2;
  return iVar3;
}
