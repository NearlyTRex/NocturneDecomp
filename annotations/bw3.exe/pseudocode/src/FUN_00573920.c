// Name: FUN_00573920
// Address: 00573920
// Address Range: [[00573920, 0057398d]]
// Convention: unknown
// Signature: undefined4 * FUN_00573920(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint * FUN_00573920(uint param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_00572530(param_1);
  *puVar1 = &PTR_FUN_005e5a84;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  FUN_00573f50(puVar1,param_2,param_3);
  return puVar1;
}
