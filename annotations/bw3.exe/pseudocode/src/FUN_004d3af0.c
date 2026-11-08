// Name: FUN_004d3af0
// Address: 004d3af0
// Address Range: [[004d3af0, 004d3b1f]]
// Convention: unknown
// Signature: void FUN_004d3af0(int param_1)

#include "nocturne.h"

void FUN_004d3af0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20ba8);
  if (iVar1 == 0) {
    return;
  }
  (**(code **)(*(int *)(iVar1 + 0x154) + 0xa4))(iVar1,param_1);
  *(uint *)(param_1 + 0x20ba8) = 0;
  return;
}
