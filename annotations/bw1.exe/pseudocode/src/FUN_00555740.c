// Name: FUN_00555740
// Address: 00555740
// Address Range: [[00555740, 0055576e]]
// Convention: unknown
// Signature: void FUN_00555740(int param_1)

#include "nocturne.h"

void FUN_00555740(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x15aebc);
  FUN_0054f0d0(param_1,*(uint *)(param_1 + 0x15aeb8));
  *(uint *)(param_1 + 0x15aec0) = 0;
  *(uint *)(param_1 + 0x15aebc) = uVar1;
  return;
}
