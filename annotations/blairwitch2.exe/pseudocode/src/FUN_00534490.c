// Name: FUN_00534490
// Address: 00534490
// Address Range: [[00534490, 005344be]]
// Convention: unknown
// Signature: void FUN_00534490(int param_1)

#include "nocturne.h"

void FUN_00534490(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x15aebc);
  FUN_0052ddf0(param_1,*(uint *)(param_1 + 0x15aeb8));
  *(uint *)(param_1 + 0x15aec0) = 0;
  *(uint *)(param_1 + 0x15aebc) = uVar1;
  return;
}
