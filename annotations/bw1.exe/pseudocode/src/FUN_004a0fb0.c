// Name: FUN_004a0fb0
// Address: 004a0fb0
// Address Range: [[004a0fb0, 004a0fd9]]
// Convention: unknown
// Signature: void FUN_004a0fb0(int param_1,int param_2)

#include "nocturne.h"

void FUN_004a0fb0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc1d4) != 0) {
    if (param_2 != 0) {
      *(uint *)(param_1 + 0x24fc) = 1;
    }
    FUN_0042f320(param_1,param_2);
  }
  return;
}
