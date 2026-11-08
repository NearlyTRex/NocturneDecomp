// Name: FUN_005638a0
// Address: 005638a0
// Address Range: [[005638a0, 0056390a]]
// Convention: unknown
// Signature: int FUN_005638a0(undefined4 param_1)

#include "nocturne.h"

int FUN_005638a0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00408600(param_1);
  iVar1 = FUN_0054bf00(iVar1 + 0x1d0);
  *(uint *)(iVar1 + -0x7c) = 0x5e4a24;
  *(uint *)(iVar1 + -0x14) = 0x41f00000;
  *(byte *)(iVar1 + -0x5a) = 0;
  *(byte *)(iVar1 + -0x3c) = 0;
  *(uint *)(iVar1 + -0xd0) = 1;
  *(uint *)(iVar1 + -0x10) = 0;
  *(uint *)(iVar1 + -0xc) = 10;
  *(uint *)(iVar1 + -0x18) = 0;
  *(uint *)(iVar1 + -0x1c) = 0;
  *(uint *)(iVar1 + -8) = 0;
  *(uint *)(iVar1 + -4) = 0x42c80000;
  return iVar1 + -0x1d0;
}
