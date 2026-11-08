// Name: FUN_0058b780
// Address: 0058b780
// Address Range: [[0058b780, 0058b82d]]
// Convention: unknown
// Signature: int FUN_0058b780(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0058b780(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = FUN_00487db0(param_1);
  *(uint *)(iVar4 + 0x2b0) = 0x5fe0f4;
  FUN_005478b0(iVar4 + 0x2b4,0x5ee5fc);
  *(uint *)(iVar4 + 0x3430) = 0x3f800000;
  *(uint *)(iVar4 + 0x3434) = 0x40000000;
  *(uint *)(iVar4 + 0x10af8) = 0;
  *(uint *)(iVar4 + 0x10b10) = 1;
  *(uint *)(iVar4 + 0x10b24) = 0;
  uVar1 = _DAT_005fe0d0;
  *(uint *)(iVar4 + 0x10b28) = 0x40a00000;
  uVar2 = _DAT_005fe0d4;
  *(uint *)(iVar4 + 0x10b2c) = 0;
  uVar3 = 0x41200000;
  *(uint *)(iVar4 + 0x10b30) = 0;
  *(uint *)(iVar4 + 0x10b34) = 0;
  *(uint *)(iVar4 + 0x3438) = uVar1;
  *(uint *)(iVar4 + 0x343c) = uVar2;
  *(uint *)(iVar4 + 0x10b38) = uVar3;
  return iVar4;
}
