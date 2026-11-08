// Name: FUN_0053b0d0
// Address: 0053b0d0
// Address Range: [[0053b0d0, 0053b0fe]]
// Convention: unknown
// Signature: void FUN_0053b0d0(int param_1)

#include "nocturne.h"

void FUN_0053b0d0(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x15aebc);
  FUN_00534890(param_1,*(uint *)(param_1 + 0x15aeb8));
  *(uint *)(param_1 + 0x15aec0) = 0;
  *(uint *)(param_1 + 0x15aebc) = uVar1;
  return;
}
