// Name: FUN_004c8c90
// Address: 004c8c90
// Address Range: [[004c8c90, 004c8cb7]]
// Convention: unknown
// Signature: void FUN_004c8c90(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004c8c90(int param_1,uint param_2)

{
  if ((*(int *)(param_1 + 0xd074) == 0) && (*(int *)(param_1 + 0xd070) < 1)) {
    FUN_00489fc0(param_1,param_2);
    return;
  }
  return;
}
