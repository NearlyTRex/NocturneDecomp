// Name: FUN_0046b920
// Address: 0046b920
// Address Range: [[0046b920, 0046b930]]
// Convention: unknown
// Signature: void FUN_0046b920(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0046b920(int param_1,uint param_2)

{
  DAT_006141e0 = param_2;
  *(uint *)(param_1 + 0x10) = param_2;
  return;
}
