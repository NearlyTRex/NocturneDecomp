// Name: FUN_005a1130
// Address: 005a1130
// Address Range: [[005a1130, 005a115f]]
// Convention: unknown
// Signature: void FUN_005a1130(undefined4 param_1)

#include "nocturne.h"

void FUN_005a1130(uint param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_0059f540(param_1);
  *puVar1 = &PTR_FUN_006073c4;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  return;
}
