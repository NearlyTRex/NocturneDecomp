// Name: FUN_00510e20
// Address: 00510e20
// Address Range: [[00510e20, 00510e8e]]
// Convention: unknown
// Signature: void FUN_00510e20(int param_1,float param_2)

#include "nocturne.h"

void FUN_00510e20(int param_1,float param_2)

{
  FUN_00539810(param_1,param_2);
  if (((*(int *)(param_1 + 0x2d4) == 3) || (*(int *)(param_1 + 0x2d4) == 4)) &&
     (param_2 = *(float *)(param_1 + 0x728) - param_2, *(float *)(param_1 + 0x728) = param_2,
     param_2 < 0.0)) {
    *(uint *)(param_1 + 0x728) = 0x3dcccccd;
    FUN_004b59e0(0x01C57074,param_1 + 0x20,0,0x4000,0x10000,0,0xffff);
    return;
  }
  return;
}
