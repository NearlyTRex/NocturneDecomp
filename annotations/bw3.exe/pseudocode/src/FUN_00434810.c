// Name: FUN_00434810
// Address: 00434810
// Address Range: [[00434810, 00434840]]
// Convention: unknown
// Signature: void FUN_00434810(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00434810(int param_1,uint param_2)

{
  if (0.0 < *(float *)(param_1 + 0x324c)) {
    return;
  }
  *(uint *)(param_1 + 0x324c) = 0x3dcccccd;
  (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,param_2);
  return;
}
