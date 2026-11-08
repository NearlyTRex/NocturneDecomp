// Name: FUN_004930c0
// Address: 004930c0
// Address Range: [[004930c0, 004930f8]]
// Convention: unknown
// Signature: void FUN_004930c0(int param_1)

#include "nocturne.h"

void FUN_004930c0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x134);
  if (iVar1 < 1) {
    FUN_00492f50(param_1);
    return;
  }
  *(int *)(param_1 + 0x134) = iVar1 + -1;
  FUN_00493000(param_1,iVar1 + -1,iVar1);
  FUN_00492f50(param_1);
  return;
}
