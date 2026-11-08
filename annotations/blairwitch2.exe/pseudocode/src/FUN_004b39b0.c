// Name: FUN_004b39b0
// Address: 004b39b0
// Address Range: [[004b39b0, 004b39c8]]
// Convention: unknown
// Signature: void FUN_004b39b0(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_004b39b0(int param_1,uint param_2,uint param_3)

{
  *(uint *)(param_1 + 0x9e0) = param_2;
  *(uint *)(param_1 + 0x9e4) = param_3;
  return;
}
