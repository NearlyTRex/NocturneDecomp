// Name: FUN_004ebe80
// Address: 004ebe80
// Address Range: [[004ebe80, 004ebeaf]]
// Convention: unknown
// Signature: void FUN_004ebe80(int param_1)

#include "nocturne.h"

void FUN_004ebe80(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1ff88);
  if (iVar1 == 0) {
    return;
  }
  (**(code **)(*(int *)(iVar1 + 0x154) + 0xa4))(iVar1,param_1);
  *(uint *)(param_1 + 0x1ff88) = 0;
  return;
}
