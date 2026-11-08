// Name: FUN_0054ba10
// Address: 0054ba10
// Address Range: [[0054ba10, 0054ba75]]
// Convention: unknown
// Signature: int FUN_0054ba10(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0054ba10(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_004a0410(param_1);
  *(byte ***)(iVar3 + 0x154) = &PTR_FUN_00604e64;
  FUN_00569f50(iVar3 + 0x158,"sentinel.dfm");
  uVar1 = _DAT_00604e4c;
  *(uint *)(iVar3 + 0x2fec) = 0x3f19999a;
  uVar2 = _DAT_00604e50;
  *(uint *)(iVar3 + 0x2ff0) = 0x40000000;
  *(uint *)(iVar3 + 0xc26c) = 0;
  *(uint *)(iVar3 + 0x2ff4) = uVar1;
  *(uint *)(iVar3 + 0x2ff8) = uVar2;
  return iVar3;
}
