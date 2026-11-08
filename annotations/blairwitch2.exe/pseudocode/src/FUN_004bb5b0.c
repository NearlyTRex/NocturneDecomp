// Name: FUN_004bb5b0
// Address: 004bb5b0
// Address Range: [[004bb5b0, 004bb61a]]
// Convention: unknown
// Signature: void FUN_004bb5b0(int param_1)

#include "nocturne.h"

void FUN_004bb5b0(int param_1)

{
  if (*(int *)(param_1 + 0xb14) != 0) {
    *(float *)(param_1 + 0xb04) = *(float *)(param_1 + 0xb04) - *(float *)(param_1 + 0x284);
    if (*(float *)(param_1 + 0xb04) <= 0.0) {
      *(uint *)(param_1 + 0xb14) = 0;
      *(uint *)(param_1 + 0xb04) = 0;
    }
    *(float *)(param_1 + 0xaf4) =
         (*(float *)(param_1 + 0xafc) - *(float *)(param_1 + 0xaf8)) *
         (1.0 - *(float *)(param_1 + 0xb04) / *(float *)(param_1 + 0xb00)) +
         *(float *)(param_1 + 0xaf8);
  }
  return;
}
