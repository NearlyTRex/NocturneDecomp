// Name: FUN_005a1ed0
// Address: 005a1ed0
// Address Range: [[005a1ed0, 005a1f37]]
// Convention: unknown
// Signature: void FUN_005a1ed0(int param_1)

#include "nocturne.h"

void FUN_005a1ed0(int param_1)

{
  *(uint *)(param_1 + 0x342c) = 0;
  FUN_00503620(param_1 + 0x2b4,5,1);
  *(uint *)(param_1 + 0x2814) = 1;
  if ((*(int *)(param_1 + 0x113b8) == 0) && (0.0 < *(float *)(param_1 + 0x113c4))) {
    FUN_005a01a0(param_1,*(uint *)(param_1 + 0x113c4),0,0x400ccccd);
    FUN_0059f570(param_1);
    return;
  }
  return;
}
