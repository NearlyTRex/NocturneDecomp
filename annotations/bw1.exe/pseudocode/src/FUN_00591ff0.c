// Name: FUN_00591ff0
// Address: 00591ff0
// Address Range: [[00591ff0, 00592315]]
// Convention: unknown
// Signature: void FUN_00591ff0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00591ff0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(0x01CCF390 + 0x18) == 0) {
    FUN_00569f50(param_1 + 0x158,"succubusx.dfm");
    pcVar4 = "hotdemonx.dfm";
  }
  else {
    FUN_00569f50(param_1 + 0x158,"succubus.dfm");
    pcVar4 = "hotdemon.dfm";
  }
  FUN_00569f50(param_1 + 0xc268,pcVar4);
  FUN_004a0510(param_1);
  iVar1 = param_1 + 0x158;
  FUN_00569b20(iVar1);
  iVar2 = param_1 + 0xc268;
  FUN_00569b20(iVar2);
  FUN_00441cc0(param_1 + 0xe60c);
  iVar5 = param_1 + 0x30;
  iVar6 = param_1 + 0x20;
  FUN_00441f60(param_1 + 0xe60c,iVar6,iVar5,iVar2,iVar5,iVar6);
  FUN_00441fa0(param_1 + 0x2ca0,iVar6,iVar5,0x3d4ccccd,*(uint *)(param_1 + 0x2504),iVar2);
  uVar3 = FUN_00569f30(iVar1);
  _DAT_02c8369c = FUN_005634f0(uVar3,"Bip01 Head",1);
  _DAT_02c836a8 = FUN_005634f0(uVar3,"Bip01 L ForeArm",1);
  _DAT_02c836ac = FUN_005634f0(uVar3,"Bip01 R ForeArm",1);
  _DAT_02c836b0 = FUN_005634f0(uVar3,"Bip01 L UpperArm",1);
  _DAT_02c836b4 = FUN_005634f0(uVar3,"Bip01 R UpperArm",1);
  _DAT_02c836b8 = FUN_005634f0(uVar3,"Bip01 L Foot",1);
  _DAT_02c836bc = FUN_005634f0(uVar3,"Bip01 R Foot",1);
  _DAT_02c836a0 = FUN_005634f0(uVar3,"Bip01 L Hand",1);
  _DAT_02c836a4 = FUN_005634f0(uVar3,"Bip01 R Hand",1);
  _DAT_02c836c0 = FUN_005634f0(uVar3,"Bip01 Spine",1);
  _DAT_02c836c4 = FUN_005634f0(uVar3,"Bip01 Spine1",1);
  _DAT_02c836c8 = FUN_005634f0(uVar3,"Bip01 Spine2",1);
  _DAT_02c8369c = FUN_005634f0(uVar3,"Bip01 Head",1);
  _DAT_02c836b0 = FUN_005634f0(uVar3,"Bip01 L UpperArm",1);
  _DAT_02c836b4 = FUN_005634f0(uVar3,"Bip01 R UpperArm",1);
  _DAT_02c836c0 = FUN_005634f0(uVar3,"Bip01 Spine",1);
  _DAT_02c836c8 = FUN_005634f0(uVar3,"Bip01 Spine2",1);
  FUN_00567500(iVar2);
  FUN_00567500(iVar1);
  *(float *)(param_1 + 0x804) = *(float *)(param_1 + 0x804) + _DAT_005f7352;
  FUN_00569180(iVar1);
  FUN_00569180(iVar2);
  iVar5 = param_1 + 0xe7d8;
  FUN_005230c0(iVar5,0,iVar1);
  FUN_005230c0(iVar5,1,iVar2);
  _DAT_01d39d30 = 0;
  FUN_00523210(iVar5,1,*(uint *)(param_1 + 0xe7a0),0);
  _DAT_01d39d30 = 1;
  FUN_00523210(iVar5,1,*(uint *)(param_1 + 0xe7a0),0);
  _DAT_01d39d30 = 0;
  *(uint *)(param_1 + 0xf400) = 0;
  FUN_00523310(iVar5);
  *(uint *)(param_1 + 0xe7d0) = 0;
  *(uint *)(param_1 + 0xe7d4) = 0;
  *(uint *)(param_1 + 0xe7c8) = 0;
  *(uint *)(param_1 + 0xe7cc) = 0x40a00000;
  FUN_00567580(iVar2);
  FUN_00567580(iVar1);
  return;
}
