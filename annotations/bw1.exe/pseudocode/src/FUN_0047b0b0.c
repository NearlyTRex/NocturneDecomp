// Name: FUN_0047b0b0
// Address: 0047b0b0
// Address Range: [[0047b0b0, 0047b1a1]]
// Convention: unknown
// Signature: int FUN_0047b0b0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0047b0b0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = FUN_004a0410(param_1);
  *(byte ***)(iVar3 + 0x154) = &PTR_FUN_005ff1b4;
  FUN_00569f50(iVar3 + 0x158,0x5dac1b);
  *(uint *)(iVar3 + 0x2fec) = 0x3f000000;
  *(uint *)(iVar3 + 0x2ff0) = 0x3f800000;
  *(byte *)(iVar3 + 0xc28c) = 0;
  *(uint *)(iVar3 + 0x2538) = 0x43070000;
  uVar1 = _DAT_005ff184;
  *(uint *)(iVar3 + 0xc2f4) = 0;
  uVar2 = _DAT_005ff188;
  *(uint *)(iVar3 + 0xc2f8) = 0;
  *(uint *)(iVar3 + 0x2ff4) = uVar1;
  *(uint *)(iVar3 + 0x2ff8) = uVar2;
  *(uint *)(iVar3 + 0xc30c) = 0;
  *(uint *)(iVar3 + 0xc308) = *(uint *)(iVar3 + 0xc30c);
  *(uint *)(iVar3 + 0xc304) = *(uint *)(iVar3 + 0xc308);
  *(uint *)(iVar3 + 0xc310) = 0;
  *(uint *)(iVar3 + 0xc2f0) = 1;
  iVar5 = iVar3;
  do {
    iVar4 = iVar5 + 4;
    *(uint *)(iVar5 + 0xc318) = 0;
    iVar5 = iVar4;
  } while (iVar4 != iVar3 + 0xf0);
  *(uint *)(iVar3 + 0xc314) = 0;
  *(uint *)(iVar3 + 0xc40c) = 0;
  *(uint *)(iVar3 + 0xc300) = 0;
  *(uint *)(iVar3 + 0xc408) = 0;
  return iVar3;
}
