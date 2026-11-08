// Name: FUN_0049c890
// Address: 0049c890
// Address Range: [[0049c890, 0049c8d4]]
// Convention: unknown
// Signature: void FUN_0049c890(int param_1)

#include "nocturne.h"

void FUN_0049c890(int param_1)

{
  float fVar1;
  
  if ((0.0 < *(float *)(param_1 + 0xc)) &&
     (fVar1 = *(float *)(param_1 + 0xc) - *(float *)(0x01D2130C + 0x314),
     *(float *)(param_1 + 0xc) = fVar1, fVar1 < 0.0)) {
    *(uint *)(param_1 + 0xc) = 0;
    return;
  }
  return;
}
