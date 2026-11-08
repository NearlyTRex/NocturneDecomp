// Name: FUN_004cf2c0
// Address: 004cf2c0
// Address Range: [[004cf2c0, 004cf343]]
// Convention: unknown
// Signature: int FUN_004cf2c0(undefined4 param_1)

#include "nocturne.h"

int FUN_004cf2c0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00408600(param_1);
  iVar1 = FUN_00462500(iVar1 + 0x158);
  *(uint *)(iVar1 + -4) = 0x5e0f24;
  FUN_004625f0(iVar1,0x5c47b6);
  *(uint *)(iVar1 + 0x17c) = 0;
  *(uint *)(iVar1 + 0x180) = 0x41f00000;
  *(uint *)(iVar1 + 0x184) = 0;
  *(uint *)(iVar1 + 0x188) = 0;
  *(uint *)(iVar1 + 0x18c) = 1;
  *(byte *)(iVar1 + 400) = 0;
  *(byte *)(iVar1 + 500) = 0;
  return iVar1 + -0x158;
}
