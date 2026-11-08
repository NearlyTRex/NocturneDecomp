// Name: FUN_00512020
// Address: 00512020
// Address Range: [[00512020, 005120af]]
// Convention: unknown
// Signature: void FUN_00512020(int param_1,float param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00512020(int param_1,float param_2,uint param_3)

{
  *(float *)(param_1 + 0x2e0) = param_2;
  if (*(float *)(param_1 + 0x2e0) < 0.0) {
    *(uint *)(param_1 + 0x2e0) = 0;
  }
  if (1.0 < *(float *)(param_1 + 0x2e0)) {
    *(uint *)(param_1 + 0x2e0) = 0x3f800000;
  }
  *(uint *)(param_1 + 0x2e4) = param_3;
  if (*(float *)(param_1 + 0x2dc) < param_2) {
    *(uint *)(param_1 + 0x2d4) = 3;
  }
  if (param_2 < *(float *)(param_1 + 0x2dc)) {
    *(uint *)(param_1 + 0x2d4) = 4;
  }
  if (*(char *)(param_1 + 0x480) == '\0') {
    return;
  }
  (**(code **)(*(int *)(param_1 + 0x154) + 0x30))(param_1,param_1 + 0x480);
  return;
}
