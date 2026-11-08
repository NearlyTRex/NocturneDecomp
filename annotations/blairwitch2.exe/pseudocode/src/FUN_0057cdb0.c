// Name: FUN_0057cdb0
// Address: 0057cdb0
// Address Range: [[0057cdb0, 0057ce16]]
// Convention: unknown
// Signature: undefined4 * FUN_0057cdb0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint * FUN_0057cdb0(uint param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_0057b9c0(param_1);
  *puVar1 = &PTR_FUN_005fd3e4;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  FUN_0057d320(puVar1,param_2);
  return puVar1;
}
