// Name: FUN_005863e0
// Address: 005863e0
// Address Range: [[005863e0, 005864a5]]
// Convention: unknown
// Signature: void FUN_005863e0(int param_1)

#include "nocturne.h"

void FUN_005863e0(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  FUN_0054e6b0(param_1 + 0x158);
  uVar1 = FUN_0054eac0(param_1 + 0x158);
  uVar2 = FUN_00548090(uVar1,"Bip01 Spine1",1);
  *(uint *)(param_1 + 0xd054) = uVar2;
  uVar2 = FUN_00548090(uVar1,"Bip01 Head",1);
  *(uint *)(param_1 + 0xd058) = uVar2;
  uVar2 = FUN_00548090(uVar1,"Bip01 Pelvis",1);
  *(uint *)(param_1 + 0xd05c) = uVar2;
  uVar2 = FUN_00548090(uVar1,"Bip01 Spine",1);
  *(uint *)(param_1 + 0xd060) = uVar2;
  uVar2 = FUN_00548090(uVar1,"Bip01 Spine1",1);
  *(uint *)(param_1 + 0xd064) = uVar2;
  uVar2 = FUN_00548090(uVar1,"Bip01 Spine2",1);
  *(uint *)(param_1 + 0xd068) = uVar2;
  uVar1 = FUN_00548090(uVar1,"Bip01 Head",1);
  *(uint *)(param_1 + 0xd06c) = uVar1;
  FUN_00489110(param_1);
  return;
}
