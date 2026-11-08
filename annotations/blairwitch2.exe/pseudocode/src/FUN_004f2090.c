// Name: FUN_004f2090
// Address: 004f2090
// Address Range: [[004f2090, 004f20fe]]
// Convention: unknown
// Signature: void FUN_004f2090(int param_1,float param_2)

#include "nocturne.h"

void FUN_004f2090(int param_1,float param_2)

{
  FUN_005184c0(param_1,param_2);
  if (((*(int *)(param_1 + 0x430) == 3) || (*(int *)(param_1 + 0x430) == 4)) &&
     (param_2 = *(float *)(param_1 + 0x884) - param_2, *(float *)(param_1 + 0x884) = param_2,
     param_2 < 0.0)) {
    *(uint *)(param_1 + 0x884) = 0x3dcccccd;
    FUN_0049d090(0x01C3DEB4,param_1 + 0x20,0,0x4000,0x10000,0,0xffff);
    return;
  }
  return;
}
