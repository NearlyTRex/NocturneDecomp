// Name: FUN_0053a830
// Address: 0053a830
// Address Range: [[0053a830, 0053a869]]
// Convention: unknown
// Signature: void FUN_0053a830(int param_1)

#include "nocturne.h"

void FUN_0053a830(int param_1)

{
  if (*(int *)(param_1 + 0x198) == 0) {
    *(uint *)(param_1 + 0x194) = 0;
    return;
  }
  FUN_005b86a0(*(int *)(param_1 + 0x198));
  *(uint *)(param_1 + 0x198) = 0;
  *(uint *)(param_1 + 0x194) = 0;
  return;
}
