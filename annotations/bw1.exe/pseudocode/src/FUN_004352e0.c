// Name: FUN_004352e0
// Address: 004352e0
// Address Range: [[004352e0, 00435310]]
// Convention: unknown
// Signature: void FUN_004352e0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004352e0(int param_1,uint param_2)

{
  if (0.0 < *(float *)(param_1 + 0x2fe4)) {
    return;
  }
  *(uint *)(param_1 + 0x2fe4) = 0x3dcccccd;
  (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,param_2);
  return;
}
