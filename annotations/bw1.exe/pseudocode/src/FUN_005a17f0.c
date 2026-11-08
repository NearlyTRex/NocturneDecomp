// Name: FUN_005a17f0
// Address: 005a17f0
// Address Range: [[005a17f0, 005a1825]]
// Convention: unknown
// Signature: undefined4 * FUN_005a17f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint * FUN_005a17f0(uint param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_005a14b0(param_1);
  *puVar1 = &PTR_FUN_00607424;
  puVar1[1] = 0;
  FUN_005a19e0(puVar1,param_2,param_3);
  return puVar1;
}
