// Name: FUN_004b5920
// Address: 004b5920
// Address Range: [[004b5920, 004b594f]]
// Convention: unknown
// Signature: void FUN_004b5920(int param_1)

#include "nocturne.h"

void FUN_004b5920(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1fa18);
  if (iVar1 == 0) {
    return;
  }
  (**(code **)(*(int *)(iVar1 + 0x14c) + 0x9c))(iVar1,param_1);
  *(uint *)(param_1 + 0x1fa18) = 0;
  return;
}
