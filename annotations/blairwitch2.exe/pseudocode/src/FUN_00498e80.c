// Name: FUN_00498e80
// Address: 00498e80
// Address Range: [[00498e80, 00498ec4]]
// Convention: unknown
// Signature: void FUN_00498e80(int param_1)

#include "nocturne.h"

void FUN_00498e80(int param_1)

{
  float fVar1;
  
  if ((0.0 < *(float *)(param_1 + 0xc)) &&
     (fVar1 = *(float *)(param_1 + 0xc) - *(float *)(0x01CB6900 + 0x284),
     *(float *)(param_1 + 0xc) = fVar1, fVar1 < 0.0)) {
    *(uint *)(param_1 + 0xc) = 0;
    return;
  }
  return;
}
