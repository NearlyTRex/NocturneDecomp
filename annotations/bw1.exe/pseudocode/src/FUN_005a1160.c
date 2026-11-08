// Name: FUN_005a1160
// Address: 005a1160
// Address Range: [[005a1160, 005a11aa]]
// Convention: unknown
// Signature: undefined4 * FUN_005a1160(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint * FUN_005a1160(uint param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_0059f540(param_1);
  *puVar1 = &PTR_FUN_006073c4;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  FUN_005a1450(puVar1,param_2,param_3);
  return puVar1;
}
