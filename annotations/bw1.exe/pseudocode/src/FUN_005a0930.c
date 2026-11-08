// Name: FUN_005a0930
// Address: 005a0930
// Address Range: [[005a0930, 005a099d]]
// Convention: unknown
// Signature: undefined4 * FUN_005a0930(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint * FUN_005a0930(uint param_1,uint param_2,uint param_3)

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
  FUN_005a0f60(puVar1,param_2,param_3);
  return puVar1;
}
