// Name: FUN_004b5e90
// Address: 004b5e90
// Address Range: [[004b5e90, 004b5eb5]]
// Convention: unknown
// Signature: void FUN_004b5e90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_004b5e90(int param_1,uint param_2,uint param_3,uint param_4)

{
  *(uint *)(param_1 + 0xbc8c) = 0;
  FUN_00424f40(param_1,param_2,param_3,param_4);
  return;
}
