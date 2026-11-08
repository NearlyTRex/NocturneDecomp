// Name: FUN_0057de40
// Address: 0057de40
// Address Range: [[0057de40, 0057de76]]
// Convention: unknown
// Signature: void FUN_0057de40(undefined4 param_1)

#include "nocturne.h"

void FUN_0057de40(uint param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_0057d860(param_1);
  *puVar1 = &PTR_FUN_005fd4b4;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 1;
  return;
}
