// Name: FUN_004a0630
// Address: 004a0630
// Address Range: [[004a0630, 004a067a]]
// Convention: unknown
// Signature: void FUN_004a0630(int param_1)

#include "nocturne.h"

void FUN_004a0630(int param_1)

{
  if (0.0 < *(float *)(param_1 + 0x10)) {
    *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) - *(float *)(0x01D2130C + 0x314);
    if (0.0 <= *(float *)(param_1 + 0x10)) {
      *(float *)(param_1 + 0x14) =
           (1.0 - (*(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x10)) /
                  *(float *)(param_1 + 0x18)) * *(float *)(param_1 + 0x1c);
      return;
    }
    *(uint *)(param_1 + 0x10) = 0;
  }
  return;
}
