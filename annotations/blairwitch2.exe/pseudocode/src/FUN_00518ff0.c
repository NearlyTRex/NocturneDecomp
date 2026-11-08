// Name: FUN_00518ff0
// Address: 00518ff0
// Address Range: [[00518ff0, 0051907f]]
// Convention: unknown
// Signature: void FUN_00518ff0(int param_1,float param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00518ff0(int param_1,float param_2,uint param_3)

{
  *(float *)(param_1 + 0x43c) = param_2;
  if (*(float *)(param_1 + 0x43c) < 0.0) {
    *(uint *)(param_1 + 0x43c) = 0;
  }
  if (1.0 < *(float *)(param_1 + 0x43c)) {
    *(uint *)(param_1 + 0x43c) = 0x3f800000;
  }
  *(uint *)(param_1 + 0x440) = param_3;
  if (*(float *)(param_1 + 0x438) < param_2) {
    *(uint *)(param_1 + 0x430) = 3;
  }
  if (param_2 < *(float *)(param_1 + 0x438)) {
    *(uint *)(param_1 + 0x430) = 4;
  }
  if (*(char *)(param_1 + 0x5dc) == '\0') {
    return;
  }
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x38))(param_1,param_1 + 0x5dc);
  return;
}
