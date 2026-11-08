// Name: FUN_0040e5c0
// Address: 0040e5c0
// Address Range: [[0040e5c0, 0040e5f0]]
// Convention: unknown
// Signature: undefined4 FUN_0040e5c0(int param_1)

#include "nocturne.h"

uint FUN_0040e5c0(int param_1)

{
  uint uVar1;
  
  FUN_0044fd00(param_1 + 0x2b4);
  uVar1 = FUN_00408a80(param_1);
  *(uint *)(param_1 + 0x4a4) = 0;
  return uVar1;
}
