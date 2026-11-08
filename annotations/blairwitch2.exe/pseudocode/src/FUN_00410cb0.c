// Name: FUN_00410cb0
// Address: 00410cb0
// Address Range: [[00410cb0, 00410cfa]]
// Convention: unknown
// Signature: void FUN_00410cb0(undefined4 param_1)

#include "nocturne.h"

void FUN_00410cb0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00408790(param_1);
  *(uint *)(iVar1 + 0x2b0) = 0x5f2c84;
  *(uint *)(iVar1 + 700) = 0x40a00000;
  *(byte *)(iVar1 + 0x2c4) = 0;
  *(uint *)(iVar1 + 0x2c0) = 1;
  *(uint *)(iVar1 + 0x2b8) = *(uint *)(iVar1 + 700);
  *(uint *)(iVar1 + 0x2b4) = *(uint *)(iVar1 + 0x2b8);
  return;
}
