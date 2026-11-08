// Name: FUN_0047abd0
// Address: 0047abd0
// Address Range: [[0047abd0, 0047ac08]]
// Convention: unknown
// Signature: void FUN_0047abd0(int param_1)

#include "nocturne.h"

void FUN_0047abd0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x134);
  if (iVar1 < 1) {
    FUN_0047aa60(param_1);
    return;
  }
  *(int *)(param_1 + 0x134) = iVar1 + -1;
  FUN_0047ab10(param_1,iVar1 + -1,iVar1);
  FUN_0047aa60(param_1);
  return;
}
