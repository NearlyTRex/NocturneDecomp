// Name: FUN_005a0a90
// Address: 005a0a90
// Address Range: [[005a0a90, 005a0b18]]
// Convention: unknown
// Signature: void FUN_005a0a90(int param_1)

#include "nocturne.h"

void FUN_005a0a90(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  FUN_0059e6a0(param_1);
  uVar1 = FUN_00547890(param_1 + 0x2b4);
  uVar2 = FUN_00540e80(uVar1,"Bip01 gun1",1);
  *(uint *)(param_1 + 0x11858) = uVar2;
  uVar1 = FUN_00540e80(uVar1,"Bip01 gun12",1);
  *(uint *)(param_1 + 0x1185c) = uVar1;
  uVar1 = FUN_00540e80(*(uint *)(param_1 + 0x113b0),"Bip01 Spine",1);
  *(uint *)(param_1 + 0x11860) = uVar1;
  FUN_005a8030(param_1 + 0x154,0x100);
  FUN_005a8050(param_1 + 0x154,param_1);
  return;
}
