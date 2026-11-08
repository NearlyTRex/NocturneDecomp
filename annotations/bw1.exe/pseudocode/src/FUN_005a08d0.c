// Name: FUN_005a08d0
// Address: 005a08d0
// Address Range: [[005a08d0, 005a0922]]
// Convention: unknown
// Signature: void FUN_005a08d0(undefined4 param_1)

#include "nocturne.h"

void FUN_005a08d0(uint param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_0059f540(param_1);
  *puVar1 = &PTR_FUN_00607384;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  return;
}
