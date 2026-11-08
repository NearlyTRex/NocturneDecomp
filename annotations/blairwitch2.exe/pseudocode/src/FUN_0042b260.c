// Name: FUN_0042b260
// Address: 0042b260
// Address Range: [[0042b260, 0042b290]]
// Convention: unknown
// Signature: void FUN_0042b260(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0042b260(int param_1,uint param_2)

{
  if (0.0 < *(float *)(param_1 + 0x3050)) {
    return;
  }
  *(uint *)(param_1 + 0x3050) = 0x3dcccccd;
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,param_2);
  return;
}
