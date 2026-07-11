// Name: FUN_004613a0
// Address: 004613a0
// Address Range: [[004613a0, 004613ae]]
// Convention: unknown
// Signature: void FUN_004613a0(int param_1,int param_2)

#include "nocturne.h"

void FUN_004613a0(int param_1,int param_2)

{
  *(int *)(param_1 + 0x14) = param_2 << 0x18;
  return;
}
