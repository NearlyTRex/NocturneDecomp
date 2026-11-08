// Name: FUN_005a2e90
// Address: 005a2e90
// Address Range: [[005a2e90, 005a2ea9]]
// Convention: unknown
// Signature: void FUN_005a2e90(undefined4 param_1,int param_2)

#include "nocturne.h"

void FUN_005a2e90(uint param_1,int param_2)

{
  *(uint *)(param_2 + 8) = 0;
  FUN_0059f800(param_1,param_2);
  return;
}
