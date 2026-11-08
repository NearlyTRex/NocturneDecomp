// Name: FUN_005a1ad0
// Address: 005a1ad0
// Address Range: [[005a1ad0, 005a1b21]]
// Convention: unknown
// Signature: undefined4 * FUN_005a1ad0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint * FUN_005a1ad0(uint param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_005a14b0(param_1);
  *puVar1 = &PTR_FUN_00607454;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 1;
  FUN_005a1d60(puVar1,param_2,param_3);
  return puVar1;
}
