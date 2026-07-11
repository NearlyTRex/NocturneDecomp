// Name: FUN_00489310
// Address: 00489310
// Address Range: [[00489310, 0048935a]]
// Convention: unknown
// Signature: void FUN_00489310(int param_1)

#include "nocturne.h"

void FUN_00489310(int param_1)

{
  if (0.0 < *(float *)(param_1 + 0x10)) {
    *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) - *(float *)(0x01C775EC + 0x264);
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
