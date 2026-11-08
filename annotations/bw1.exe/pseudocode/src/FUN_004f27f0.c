// Name: FUN_004f27f0
// Address: 004f27f0
// Address Range: [[004f27f0, 004f2855]]
// Convention: unknown
// Signature: int FUN_004f27f0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004f27f0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_004a0410(param_1);
  *(byte ***)(iVar3 + 0x154) = &PTR_FUN_006027f4;
  FUN_00569f50(iVar3 + 0x158,"imp.dfm");
  uVar1 = _DAT_006027e0;
  *(uint *)(iVar3 + 0x2fec) = 0x3f19999a;
  uVar2 = _DAT_006027e4;
  *(uint *)(iVar3 + 0x2ff0) = 0x3f000000;
  *(uint *)(iVar3 + 0x27c0) = 0;
  *(uint *)(iVar3 + 0x2ff4) = uVar1;
  *(uint *)(iVar3 + 0x2ff8) = uVar2;
  return iVar3;
}
