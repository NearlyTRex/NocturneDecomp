// Name: FUN_004390e0
// Address: 004390e0
// Address Range: [[004390e0, 0043914f]]
// Convention: unknown
// Signature: int FUN_004390e0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004390e0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_00487db0(param_1);
  *(uint *)(iVar3 + 0x2b0) = 0x5f49c4;
  FUN_005478b0(iVar3 + 0x2b4,0x5ce08d);
  *(uint *)(iVar3 + 0x3430) = 0x3fe00000;
  uVar1 = _DAT_005f49ac;
  *(uint *)(iVar3 + 0x3434) = 0x40600000;
  uVar2 = _DAT_005f49b0;
  *(uint *)(iVar3 + 0x10b00) = 0;
  *(uint *)(iVar3 + 0x259c) = 0x3f490fdb;
  *(uint *)(iVar3 + 0x3438) = uVar1;
  *(uint *)(iVar3 + 0x343c) = uVar2;
  return iVar3;
}
