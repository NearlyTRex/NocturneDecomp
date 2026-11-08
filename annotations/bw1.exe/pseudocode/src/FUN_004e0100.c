// Name: FUN_004e0100
// Address: 004e0100
// Address Range: [[004e0100, 004e0127]]
// Convention: unknown
// Signature: void FUN_004e0100(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004e0100(int param_1,uint param_2)

{
  if ((*(int *)(param_1 + 0xc288) == 0) && (*(int *)(param_1 + 0xc284) < 1)) {
    FUN_004a0fb0(param_1,param_2);
    return;
  }
  return;
}
