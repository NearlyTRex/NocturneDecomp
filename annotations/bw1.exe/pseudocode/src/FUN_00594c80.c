// Name: FUN_00594c80
// Address: 00594c80
// Address Range: [[00594c80, 00594cae]]
// Convention: unknown
// Signature: void FUN_00594c80(int param_1,int param_2)

#include "nocturne.h"

void FUN_00594c80(int param_1,int param_2)

{
  float fVar1;
  
  if ((*(int *)(param_1 + 0x27b0) == 0) &&
     (fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4),
     *(float *)(param_1 + 0x2538) = fVar1, fVar1 <= 0.0)) {
    *(uint *)(param_1 + 0x2538) = 0;
    FUN_005247c0(param_1 + 0x158,3,1);
    return;
  }
  return;
}
