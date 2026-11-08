// Name: FUN_005a1a90
// Address: 005a1a90
// Address Range: [[005a1a90, 005a1ac6]]
// Convention: unknown
// Signature: void FUN_005a1a90(undefined4 param_1)

#include "nocturne.h"

void FUN_005a1a90(uint param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_005a14b0(param_1);
  *puVar1 = &PTR_FUN_00607454;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 1;
  return;
}
