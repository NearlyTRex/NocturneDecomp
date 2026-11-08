// Name: FUN_0056bef0
// Address: 0056bef0
// Address Range: [[0056bef0, 0056c1ef]]
// Convention: unknown
// Signature: void FUN_0056bef0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056bef0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  FUN_004a0510(param_1);
  iVar3 = param_1 + 0x158;
  FUN_00569b20(iVar3);
  uVar1 = FUN_00569f30(iVar3);
  _DAT_02c5fcd8 = FUN_005634f0(uVar1,"Bip01 Head",1);
  _DAT_02c5fce4 = FUN_005634f0(uVar1,"Bip01 L ForeArm",1);
  _DAT_02c5fce8 = FUN_005634f0(uVar1,"Bip01 R ForeArm",1);
  _DAT_02c5fcec = FUN_005634f0(uVar1,"Bip01 L UpperArm",1);
  _DAT_02c5fcf0 = FUN_005634f0(uVar1,"Bip01 R UpperArm",1);
  _DAT_02c5fcf4 = FUN_005634f0(uVar1,"Bip01 L Foot",1);
  _DAT_02c5fcf8 = FUN_005634f0(uVar1,"Bip01 R Foot",1);
  _DAT_02c5fcdc = FUN_005634f0(uVar1,"Bip01 L Hand",1);
  _DAT_02c5fce0 = FUN_005634f0(uVar1,"Bip01 R Hand",1);
  _DAT_02c5fcfc = FUN_005634f0(uVar1,"Bip01 Spine",1);
  _DAT_02c5fd00 = FUN_005634f0(uVar1,"Bip01 Spine1",1);
  _DAT_02c5fd04 = FUN_005634f0(uVar1,"Bip01 Spine2",1);
  _DAT_02c5fcd8 = FUN_005634f0(uVar1,"Bip01 Head",1);
  _DAT_02c5fcec = FUN_005634f0(uVar1,"Bip01 L UpperArm",1);
  _DAT_02c5fcf0 = FUN_005634f0(uVar1,"Bip01 R UpperArm",1);
  _DAT_02c5fcfc = FUN_005634f0(uVar1,"Bip01 Spine",1);
  _DAT_02c5fd04 = FUN_005634f0(uVar1,"Bip01 Spine2",1);
  uVar1 = FUN_00569eb0(iVar3);
  uVar2 = FUN_00565780(uVar1,"larm01",1);
  *(uint *)(param_1 + 0xc270) = uVar2;
  uVar2 = FUN_00565780(uVar1,"l4arm01",1);
  *(uint *)(param_1 + 0xc274) = uVar2;
  uVar2 = FUN_00565780(uVar1,"rarm01",1);
  *(uint *)(param_1 + 0xc278) = uVar2;
  uVar2 = FUN_00565780(uVar1,"r4arm01",1);
  *(uint *)(param_1 + 0xc27c) = uVar2;
  uVar2 = FUN_00565780(uVar1,"rthigh01",1);
  *(uint *)(param_1 + 0xc280) = uVar2;
  uVar2 = FUN_00565780(uVar1,"rshin01",1);
  *(uint *)(param_1 + 0xc284) = uVar2;
  uVar2 = FUN_00565780(uVar1,"lthigh01",1);
  *(uint *)(param_1 + 0xc288) = uVar2;
  uVar2 = FUN_00565780(uVar1,"lshin01",1);
  *(uint *)(param_1 + 0xc28c) = uVar2;
  uVar2 = FUN_00565780(uVar1,"ass01",1);
  *(uint *)(param_1 + 0xc290) = uVar2;
  uVar2 = FUN_00565780(uVar1,"torso01",1);
  *(uint *)(param_1 + 0xc294) = uVar2;
  uVar1 = FUN_00565780(uVar1,"head01",1);
  *(uint *)(param_1 + 0xc29c) = 0;
  *(uint *)(param_1 + 0xc298) = uVar1;
  *(uint *)(param_1 + 0xc2a0) = 0;
  *(uint *)(param_1 + 0xc2a8) = 1;
  iVar3 = FUN_005c04e0(param_1 + 0x24a8,"smiley2.dfm");
  if (iVar3 == 0) {
    *(uint *)(param_1 + 0xc2a8) = 2;
  }
  iVar3 = FUN_005c04e0(param_1 + 0x24a8,"smiley3.dfm");
  if (iVar3 != 0) {
    return;
  }
  *(uint *)(param_1 + 0xc2a8) = 3;
  *(uint *)(param_1 + 0x27c0) = 0;
  return;
}
