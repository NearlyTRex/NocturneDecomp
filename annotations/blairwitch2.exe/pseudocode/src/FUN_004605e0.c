// Name: FUN_004605e0
// Address: 004605e0
// Address Range: [[004605e0, 00460618]]
// Convention: unknown
// Signature: void FUN_004605e0(int param_1)

#include "nocturne.h"

void FUN_004605e0(int param_1)

{
  if ((*(int *)(0x01D182F0 + 0x1008) == 0) && (*(int *)(param_1 + 0x43c) == 0)) {
    FUN_0045f030(param_1);
    FUN_00538020(0x01E661B8,param_1);
    return;
  }
  return;
}
