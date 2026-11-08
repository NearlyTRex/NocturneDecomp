// Name: FUN_004e73b0
// Address: 004e73b0
// Address Range: [[004e73b0, 004e73de]]
// Convention: unknown
// Signature: void FUN_004e73b0(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_004e73b0(int param_1,uint param_2,uint param_3)

{
  *(uint *)(param_1 + 0x5b4) = 0x3f800000;
  *(uint *)(param_1 + 0x5a8) = param_3;
  *(uint *)(param_1 + 0x5b0) = *(uint *)(param_1 + 0x5b4);
  *(uint *)(param_1 + 0x5ac) = param_2;
  return;
}
