// Name: FUN_0050e4c0
// Address: 0050e4c0
// Address Range: [[0050e4c0, 0050e500]]
// Convention: unknown
// Signature: void FUN_0050e4c0(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_0050e4c0(int param_1,int param_2,uint param_3)

{
  *(uint *)(param_2 * 0x1a0 + param_1 + 0x148) = param_3;
  if (param_2 != *(int *)(param_1 + 0x15aabc)) {
    return;
  }
  FUN_00446740(0x1fb8508,param_3);
  return;
}
