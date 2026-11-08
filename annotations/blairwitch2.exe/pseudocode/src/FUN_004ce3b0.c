// Name: FUN_004ce3b0
// Address: 004ce3b0
// Address Range: [[004ce3b0, 004ce3c4]]
// Convention: unknown
// Signature: void FUN_004ce3b0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004ce3b0(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x247e4) = param_2;
  *(uint *)(param_1 + 0x2563c) = param_2;
  return;
}
