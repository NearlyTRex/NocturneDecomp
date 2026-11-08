// Name: FUN_005a9dd0
// Address: 005a9dd0
// Address Range: [[005a9dd0, 005a9e01]]
// Convention: unknown
// Signature: void FUN_005a9dd0(int param_1)

#include "nocturne.h"

void FUN_005a9dd0(int param_1)

{
  uint uVar1;
  
  FUN_0059e6a0(param_1);
  uVar1 = FUN_00540e80(*(uint *)(param_1 + 0x113b0),"Bip01 R Hand",1);
  *(uint *)(param_1 + 0x11850) = uVar1;
  *(uint *)(param_1 + 0x1137c) = uVar1;
  return;
}
