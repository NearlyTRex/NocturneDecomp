// Name: FUN_005b81d0
// Address: 005b81d0
// Address Range: [[005b81d0, 005b83d9]]
// Convention: unknown
// Signature: void FUN_005b81d0(int param_1)

#include "nocturne.h"

void FUN_005b81d0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_00569b20(param_1 + 0x158);
  iVar1 = FUN_004a6c30(0x01C51D80,"COMBATMODEHARD");
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0xc2b4) = 0x3f400000;
  }
  else {
    *(uint *)(param_1 + 0xc2b4) = 0x3f800000;
  }
  uVar2 = FUN_00569f30(param_1 + 0x158);
  uVar3 = FUN_005634f0(uVar2,"Bip01 Spine1",1);
  *(uint *)(param_1 + 0xc268) = uVar3;
  uVar3 = FUN_005634f0(uVar2,"Bip01 Head",1);
  *(uint *)(param_1 + 0xc26c) = uVar3;
  uVar3 = FUN_005634f0(uVar2,"Bip01 Pelvis",1);
  *(uint *)(param_1 + 0xc270) = uVar3;
  uVar3 = FUN_005634f0(uVar2,"Bip01 Spine",1);
  *(uint *)(param_1 + 0xc274) = uVar3;
  uVar3 = FUN_005634f0(uVar2,"Bip01 Spine1",1);
  *(uint *)(param_1 + 0xc278) = uVar3;
  uVar3 = FUN_005634f0(uVar2,"Bip01 Spine2",1);
  *(uint *)(param_1 + 0xc27c) = uVar3;
  uVar2 = FUN_005634f0(uVar2,"Bip01 Head",1);
  *(uint *)(param_1 + 0xc280) = uVar2;
  uVar2 = FUN_00569eb0(param_1 + 0x158);
  uVar3 = FUN_00565780(uVar2,&DAT_005fa23b,1);
  *(uint *)(param_1 + 0xc284) = uVar3;
  uVar3 = FUN_00565780(uVar2,&DAT_005fa240,1);
  *(uint *)(param_1 + 0xc288) = uVar3;
  uVar3 = FUN_00565780(uVar2,"l4arm",1);
  *(uint *)(param_1 + 0xc28c) = uVar3;
  uVar3 = FUN_00565780(uVar2,"r4arm",1);
  *(uint *)(param_1 + 0xc290) = uVar3;
  uVar3 = FUN_00565780(uVar2,"waist",1);
  *(uint *)(param_1 + 0xc294) = uVar3;
  uVar3 = FUN_00565780(uVar2,"torso",1);
  *(uint *)(param_1 + 0xc298) = uVar3;
  uVar3 = FUN_00565780(uVar2,&DAT_005fa25d,1);
  *(uint *)(param_1 + 0xc29c) = uVar3;
  uVar3 = FUN_00565780(uVar2,"rshin",1);
  *(uint *)(param_1 + 0xc2a0) = uVar3;
  uVar3 = FUN_00565780(uVar2,"lshin",1);
  *(uint *)(param_1 + 0xc2a4) = uVar3;
  uVar3 = FUN_00565780(uVar2,"rthigh",1);
  *(uint *)(param_1 + 0xc2a8) = uVar3;
  uVar2 = FUN_00565780(uVar2,"lthigh",1);
  *(uint *)(param_1 + 0x2384) = 0;
  *(uint *)(param_1 + 0xc2ac) = uVar2;
  FUN_004a0510(param_1);
  return;
}
