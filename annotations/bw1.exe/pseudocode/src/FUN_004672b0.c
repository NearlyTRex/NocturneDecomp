// Name: FUN_004672b0
// Address: 004672b0
// Address Range: [[004672b0, 004672ee]]
// Convention: unknown
// Signature: int FUN_004672b0(int param_1,int param_2)

#include "nocturne.h"

int FUN_004672b0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x100) <= param_2) {
    param_2 = *(int *)(param_1 + 0x100) + -1;
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  return *(int *)(param_1 + 0x10c) + *(int *)(param_1 + 0x104) * param_2 * 0xc;
}
