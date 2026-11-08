// Name: FUN_005722f0
// Address: 005722f0
// Address Range: [[005722f0, 0057232f]]
// Convention: unknown
// Signature: void FUN_005722f0(undefined4 param_1)

#include "nocturne.h"

void FUN_005722f0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00408790(param_1);
  *(uint *)(iVar1 + 0x2b0) = 0x5fcb34;
  *(uint *)(iVar1 + 0x2b4) = 0x40a00000;
  *(uint *)(iVar1 + 0x2b8) = 0x41100000;
  *(uint *)(iVar1 + 700) = 0x40a00000;
  *(uint *)(iVar1 + 0x2c0) = 0;
  return;
}
