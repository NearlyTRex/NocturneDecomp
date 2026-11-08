// Name: FUN_004b3cd0
// Address: 004b3cd0
// Address Range: [[004b3cd0, 004b3d1a]]
// Convention: unknown
// Signature: void FUN_004b3cd0(int param_1)

#include "nocturne.h"

void FUN_004b3cd0(int param_1)

{
  if (0.0 < *(float *)(param_1 + 0x10)) {
    *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) - *(float *)(0x01CCF390 + 0x294);
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
