// Name: FUN_0057db80
// Address: 0057db80
// Address Range: [[0057db80, 0057db9a]]
// Convention: unknown
// Signature: void FUN_0057db80(undefined4 param_1)

#include "nocturne.h"

void FUN_0057db80(uint param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_0057d860(param_1);
  *puVar1 = &PTR_FUN_005fd484;
  puVar1[1] = 0;
  return;
}
