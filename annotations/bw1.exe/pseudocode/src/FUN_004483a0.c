// Name: FUN_004483a0
// Address: 004483a0
// Address Range: [[004483a0, 0044840f]]
// Convention: unknown
// Signature: int FUN_004483a0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004483a0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_004a0410(param_1);
  *(byte ***)(iVar3 + 0x154) = &PTR_FUN_005fe0c4;
  FUN_00569f50(iVar3 + 0x158,0x5d71f9);
  *(uint *)(iVar3 + 0x2fec) = 0x3fe00000;
  uVar1 = _DAT_005fe0ac;
  *(uint *)(iVar3 + 0x2ff0) = 0x40600000;
  uVar2 = _DAT_005fe0b0;
  *(uint *)(iVar3 + 0xc270) = 0;
  *(uint *)(iVar3 + 0x252c) = 0x3f490fdb;
  *(uint *)(iVar3 + 0x2ff4) = uVar1;
  *(uint *)(iVar3 + 0x2ff8) = uVar2;
  return iVar3;
}
