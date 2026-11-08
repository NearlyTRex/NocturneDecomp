// Name: FUN_005a6030
// Address: 005a6030
// Address Range: [[005a6030, 005a60c1]]
// Convention: unknown
// Signature: void FUN_005a6030(int param_1)

#include "nocturne.h"

void FUN_005a6030(int param_1)

{
  uint uVar1;
  
  FUN_005a4870(param_1);
  uVar1 = FUN_00540e80(*(uint *)(param_1 + 0x113b0),"Bip01 Head",1);
  *(uint *)(param_1 + 0x11850) = uVar1;
  *(uint *)(param_1 + 0x10a24) = uVar1;
  uVar1 = FUN_00540e80(*(uint *)(param_1 + 0x113b0),"Bip01 R Hand",1);
  *(uint *)(param_1 + 0x11854) = uVar1;
  *(uint *)(param_1 + 0x2618) = uVar1;
  FUN_005a8030(param_1 + 0x154,0x100);
  FUN_005a8050(param_1 + 0x154,param_1);
  FUN_005a8030(param_1 + 0x198,0x100);
  FUN_005a8050(param_1 + 0x198,param_1);
  return;
}
