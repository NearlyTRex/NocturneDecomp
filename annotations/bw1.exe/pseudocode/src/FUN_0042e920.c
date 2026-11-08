// Name: FUN_0042e920
// Address: 0042e920
// Address Range: [[0042e920, 0042e938]]
// Convention: unknown
// Signature: void FUN_0042e920(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_0042e920(int param_1,uint param_2,uint param_3)

{
  *(uint *)(param_1 + 0xc18c) = param_2;
  *(uint *)(param_1 + 0xc198) = param_3;
  return;
}
