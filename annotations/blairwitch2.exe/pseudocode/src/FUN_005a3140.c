// Name: FUN_005a3140
// Address: 005a3140
// Address Range: [[005a3140, 005a31ba]]
// Convention: unknown
// Signature: void FUN_005a3140(int param_1)

#include "nocturne.h"

void FUN_005a3140(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  FUN_0059e6a0(param_1);
  uVar1 = FUN_00547890(param_1 + 0x2b4);
  uVar2 = FUN_00540e80(uVar1,"Bip01 Tongue",1);
  *(uint *)(param_1 + 0x11850) = uVar2;
  uVar2 = FUN_00540e80(uVar1,"Dummy07",1);
  *(uint *)(param_1 + 0x11854) = uVar2;
  uVar2 = FUN_00540e80(uVar1,"Bip01 Tongue",1);
  *(uint *)(param_1 + 0x11858) = uVar2;
  uVar1 = FUN_00540e80(uVar1,"Bip01 R Finger0",1);
  *(uint *)(param_1 + 0x1185c) = uVar1;
  return;
}
