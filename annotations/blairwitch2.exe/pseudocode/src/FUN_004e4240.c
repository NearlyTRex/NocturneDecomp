// Name: FUN_004e4240
// Address: 004e4240
// Address Range: [[004e4240, 004e429f]]
// Convention: unknown
// Signature: void FUN_004e4240(int param_1)

#include "nocturne.h"

void FUN_004e4240(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 700) == 0) {
    iVar1 = FUN_0048e340(0x01C38BC0,param_1 + 0x2c0);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 700) = 1;
      return;
    }
  }
  else {
    iVar1 = FUN_0048e340(0x01C38BC0,param_1 + 0x324);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 700) = 0;
      return;
    }
  }
  return;
}
