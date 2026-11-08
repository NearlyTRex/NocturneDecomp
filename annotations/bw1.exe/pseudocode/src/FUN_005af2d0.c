// Name: FUN_005af2d0
// Address: 005af2d0
// Address Range: [[005af2d0, 005af37d]]
// Convention: unknown
// Signature: int FUN_005af2d0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005af2d0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = FUN_004a0410(param_1);
  *(byte ***)(iVar4 + 0x154) = &PTR_FUN_00607ff4;
  FUN_00569f50(iVar4 + 0x158,0x5f99d4);
  *(uint *)(iVar4 + 0x2fec) = 0x3f800000;
  *(uint *)(iVar4 + 0x2ff0) = 0x40000000;
  *(uint *)(iVar4 + 0xc268) = 0;
  *(uint *)(iVar4 + 0xc280) = 1;
  *(uint *)(iVar4 + 0xc294) = 0;
  uVar1 = _DAT_00607fd0;
  *(uint *)(iVar4 + 0xc298) = 0x40a00000;
  uVar2 = _DAT_00607fd4;
  *(uint *)(iVar4 + 0xc29c) = 0;
  uVar3 = 0x41200000;
  *(uint *)(iVar4 + 0xc2a0) = 0;
  *(uint *)(iVar4 + 0xc2a4) = 0;
  *(uint *)(iVar4 + 0x2ff4) = uVar1;
  *(uint *)(iVar4 + 0x2ff8) = uVar2;
  *(uint *)(iVar4 + 0xc2a8) = uVar3;
  return iVar4;
}
