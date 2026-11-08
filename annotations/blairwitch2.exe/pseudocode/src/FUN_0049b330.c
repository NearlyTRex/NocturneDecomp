// Name: FUN_0049b330
// Address: 0049b330
// Address Range: [[0049b330, 0049b37a]]
// Convention: unknown
// Signature: void FUN_0049b330(int param_1)

#include "nocturne.h"

void FUN_0049b330(int param_1)

{
  if (0.0 < *(float *)(param_1 + 0x10)) {
    *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) - *(float *)(0x01CB6900 + 0x284);
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
