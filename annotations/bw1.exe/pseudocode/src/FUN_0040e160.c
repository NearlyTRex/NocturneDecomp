// Name: FUN_0040e160
// Address: 0040e160
// Address Range: [[0040e160, 0040e190]]
// Convention: unknown
// Signature: undefined4 FUN_0040e160(int param_1)

#include "nocturne.h"

uint FUN_0040e160(int param_1)

{
  uint uVar1;
  
  FUN_004688e0(param_1 + 0x158);
  uVar1 = FUN_00408850(param_1);
  *(uint *)(param_1 + 0x348) = 0;
  return uVar1;
}
