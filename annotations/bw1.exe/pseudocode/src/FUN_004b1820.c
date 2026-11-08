// Name: FUN_004b1820
// Address: 004b1820
// Address Range: [[004b1820, 004b1864]]
// Convention: unknown
// Signature: void FUN_004b1820(int param_1)

#include "nocturne.h"

void FUN_004b1820(int param_1)

{
  float fVar1;
  
  if ((0.0 < *(float *)(param_1 + 0xc)) &&
     (fVar1 = *(float *)(param_1 + 0xc) - *(float *)(0x01CCF390 + 0x294),
     *(float *)(param_1 + 0xc) = fVar1, fVar1 < 0.0)) {
    *(uint *)(param_1 + 0xc) = 0;
    return;
  }
  return;
}
