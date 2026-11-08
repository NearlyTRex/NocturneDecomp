// Name: FUN_0049a140
// Address: 0049a140
// Address Range: [[0049a140, 0049a167]]
// Convention: unknown
// Signature: void FUN_0049a140(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

void FUN_0049a140(int param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  *(uint *)(param_1 + 0x50) = param_4;
  FUN_00509e40(param_1,param_2,param_3);
  *(uint *)(param_1 + 0x40) = param_5;
  return;
}
