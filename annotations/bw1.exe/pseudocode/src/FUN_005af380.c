// Name: FUN_005af380
// Address: 005af380
// Address Range: [[005af380, 005af49a]]
// Convention: unknown
// Signature: void FUN_005af380(int param_1)

#include "nocturne.h"

void FUN_005af380(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  FUN_00569b20(param_1 + 0x158);
  uVar1 = FUN_00569f30(param_1 + 0x158);
  uVar2 = FUN_005634f0(uVar1,"Bip01 Spine3",1);
  *(uint *)(param_1 + 0xc26c) = uVar2;
  uVar2 = FUN_005634f0(uVar1,"Bip01 L Finger1",1);
  *(uint *)(param_1 + 0xc270) = uVar2;
  uVar2 = FUN_005634f0(uVar1,"Bip01 R Finger1",1);
  *(uint *)(param_1 + 0xc274) = uVar2;
  uVar2 = FUN_005634f0(uVar1,"Bip01jaw2",1);
  *(uint *)(param_1 + 0xc278) = uVar2;
  uVar1 = FUN_005634f0(uVar1,"Bip01 Head",1);
  *(uint *)(param_1 + 0xc27c) = uVar1;
  FUN_004a0510(param_1);
  *(uint *)(param_1 + 0xfc) = *(uint *)(param_1 + 0xc280);
  uVar1 = FUN_0040cc00(0,0x3f800000);
  *(uint *)(param_1 + 0xc2ac) = uVar1;
  if (*(int *)(param_1 + 0xc268) == 0) {
    *(uint *)(param_1 + 0x2ff0) = 0x3fc00000;
  }
  *(uint *)(param_1 + 0xc284) = 0;
  uVar1 = FUN_0040cc00(0x41200000,0x41f00000);
  *(uint *)(param_1 + 0xc28c) = 0;
  *(uint *)(param_1 + 0xc290) = 0;
  *(uint *)(param_1 + 0xc288) = uVar1;
  return;
}
