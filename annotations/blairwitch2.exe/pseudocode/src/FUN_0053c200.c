// Name: FUN_0053c200
// Address: 0053c200
// Address Range: [[0053c200, 0053c307]]
// Convention: unknown
// Signature: int FUN_0053c200(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0053c200(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = FUN_00487db0(param_1);
  *(uint *)(iVar4 + 0x2b0) = 0x5fb424;
  FUN_005478b0(iVar4 + 0x2b4,"shadowbeast.dfm");
  *(uint *)(iVar4 + 0x3430) = 0x3f800000;
  *(uint *)(iVar4 + 0x3434) = 0x40000000;
  *(uint *)(iVar4 + 0x10af8) = 0;
  *(uint *)(iVar4 + 0x10b18) = 1;
  *(uint *)(iVar4 + 0x10b2c) = 0;
  *(uint *)(iVar4 + 0x10b30) = 0x40a00000;
  *(uint *)(iVar4 + 0x10b34) = 0;
  *(uint *)(iVar4 + 0x10b38) = 0;
  *(uint *)(iVar4 + 0x10b40) = 0;
  *(uint *)(iVar4 + 0x10b74) = 0x3f800000;
  *(uint *)(iVar4 + 0x10b3c) = 0;
  *(uint *)(iVar4 + 0x10b64) = 0;
  *(uint *)(iVar4 + 0x10b5c) = 0;
  *(uint *)(iVar4 + 0x10b60) = 0;
  uVar1 = _DAT_005fb400;
  *(uint *)(iVar4 + 0x10b6c) = 0;
  uVar2 = _DAT_005fb404;
  *(uint *)(iVar4 + 0x10b68) = 0x41200000;
  uVar3 = 0x41200000;
  *(uint *)(iVar4 + 0x10b78) = 0;
  *(uint *)(iVar4 + 0x10b7c) = 0;
  *(uint *)(iVar4 + 0x3438) = uVar1;
  *(uint *)(iVar4 + 0x343c) = uVar2;
  *(uint *)(iVar4 + 0x10b44) = uVar3;
  return iVar4;
}
