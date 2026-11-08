// Name: FUN_005bac80
// Address: 005bac80
// Address Range: [[005bac80, 005bafa2]]
// Convention: unknown
// Signature: void FUN_005bac80(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005bac80(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1 + 0x158;
  FUN_00569b20(iVar3);
  uVar1 = FUN_00569f30(iVar3);
  uVar2 = FUN_005634f0(uVar1,"Bip01 Head",1);
  *(uint *)(param_1 + 0xc2f8) = uVar2;
  uVar2 = FUN_005634f0(uVar1,"Bip01 L ForeArm",1);
  *(uint *)(param_1 + 0xc304) = uVar2;
  uVar2 = FUN_005634f0(uVar1,"Bip01 R ForeArm",1);
  *(uint *)(param_1 + 0xc308) = uVar2;
  uVar2 = FUN_005634f0(uVar1,"Bip01 L UpperArm",1);
  *(uint *)(param_1 + 0xc30c) = uVar2;
  uVar2 = FUN_005634f0(uVar1,"Bip01 R UpperArm",1);
  *(uint *)(param_1 + 0xc310) = uVar2;
  uVar2 = FUN_005634f0(uVar1,"Bip01 L Foot",1);
  *(uint *)(param_1 + 0xc314) = uVar2;
  uVar2 = FUN_005634f0(uVar1,"Bip01 R Foot",1);
  *(uint *)(param_1 + 0xc318) = uVar2;
  uVar2 = FUN_005634f0(uVar1,"Bip01 L Hand",1);
  *(uint *)(param_1 + 0xc2fc) = uVar2;
  uVar2 = FUN_005634f0(uVar1,"Bip01 R Hand",1);
  *(uint *)(param_1 + 0xc300) = uVar2;
  uVar2 = FUN_005634f0(uVar1,"Bip01 Spine",1);
  *(uint *)(param_1 + 0xc31c) = uVar2;
  uVar1 = FUN_005634f0(uVar1,"Bip01 Spine2",1);
  *(uint *)(param_1 + 0xc320) = uVar1;
  uVar1 = FUN_00569eb0(iVar3);
  uVar2 = FUN_00565780(uVar1,"larm01",1);
  *(uint *)(param_1 + 0xc324) = uVar2;
  uVar2 = FUN_00565780(uVar1,"l4arm01",1);
  *(uint *)(param_1 + 0xc328) = uVar2;
  uVar2 = FUN_00565780(uVar1,"rarm01",1);
  *(uint *)(param_1 + 0xc32c) = uVar2;
  iVar3 = FUN_00565780(uVar1,"r4arm01",0);
  *(int *)(param_1 + 0xc330) = iVar3;
  if (iVar3 < 0) {
    *(uint *)(param_1 + 0xc330) = 0x3b;
  }
  uVar2 = FUN_00565780(uVar1,"waist01",0);
  *(uint *)(param_1 + 0xc334) = uVar2;
  uVar2 = FUN_00565780(uVar1,"torso01",1);
  *(uint *)(param_1 + 0xc338) = uVar2;
  uVar1 = FUN_00565780(uVar1,"head01",1);
  *(uint *)(param_1 + 0xc33c) = uVar1;
  *(uint *)(param_1 + 0x2384) = 0;
  iVar3 = FUN_005c04e0(param_1 + 0x24a8,"newzomb1.dfm");
  if (iVar3 == 0) {
    uVar1 = *(uint *)(param_1 + 0xc324);
    *(uint *)(param_1 + 0xc324) = *(uint *)(param_1 + 0xc32c);
    *(uint *)(param_1 + 0xc32c) = uVar1;
    uVar1 = *(uint *)(param_1 + 0xc328);
    *(uint *)(param_1 + 0xc328) = *(uint *)(param_1 + 0xc330);
    *(uint *)(param_1 + 0xc330) = uVar1;
  }
  *(uint *)(param_1 + 0x25a8) = *(uint *)(param_1 + 0xc2fc);
  *(uint *)(param_1 + 0x25ac) = *(uint *)(param_1 + 0xc328);
  *(uint *)(param_1 + 0x2620) = *(uint *)(param_1 + 0xc300);
  *(uint *)(param_1 + 0x2624) = *(uint *)(param_1 + 0xc330);
  FUN_004a0510(param_1);
  *(uint *)(param_1 + 0xfc) = (uint)(*(int *)(param_1 + 0xc2ec) != 0);
  uVar1 = FUN_0040cc00(0,0x3f800000);
  *(uint *)(param_1 + 50000) = uVar1;
  if ((-1 < *(int *)(param_1 + 0xc334)) && (*(float *)(param_1 + 0x3000) < 0.0)) {
    *(float *)(param_1 + 0x3000) = *(float *)(param_1 + 0x2490) + (float)_DAT_005fa534;
  }
  iVar3 = param_1 + 0x24a8;
  *(uint *)(param_1 + 0xc344) = 0;
  *(uint *)(param_1 + 0xc2f4) = 0;
  iVar4 = FUN_005c04e0(iVar3,"newzchik.dfm");
  if (((iVar4 == 0) || (iVar4 = FUN_005c04e0(iVar3,"zombho1.dfm"), iVar4 == 0)) ||
     (iVar3 = FUN_005c04e0(iVar3,"zombho2.dfm"), iVar3 == 0)) {
    *(uint *)(param_1 + 0xc2f4) = 1;
  }
  *(uint *)(param_1 + 0xc34c) = 0;
  *(uint *)(param_1 + 0xc348) = 0;
  return;
}
