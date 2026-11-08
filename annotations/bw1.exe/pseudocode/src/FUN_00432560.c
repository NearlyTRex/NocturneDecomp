// Name: FUN_00432560
// Address: 00432560
// Address Range: [[00432560, 00432585]]
// Convention: unknown
// Signature: void FUN_00432560(int param_1)

#include "nocturne.h"

void FUN_00432560(int param_1)

{
  if (*(int *)(param_1 + 0x2740) == 0) {
    return;
  }
  FUN_004774d0(*(int *)(param_1 + 0x2740));
  *(uint *)(param_1 + 0x2740) = 0;
  return;
}
