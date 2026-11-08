// Name: FUN_004425f0
// Address: 004425f0
// Address Range: [[004425f0, 004429d2]]
// Convention: unknown
// Signature: void FUN_004425f0(int param_1)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004428a4) */
/* WARNING: Removing unreachable block (ram,0x0044296f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004425f0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  
  iVar2 = FUN_00491aa0(0x01C6E360,"COMBATMODEHARD");
  if (iVar2 == 0) {
    *(uint *)(param_1 + 0xd858) = 0x3f400000;
  }
  else {
    *(uint *)(param_1 + 0xd858) = 0x3f800000;
  }
  FUN_00489110(param_1);
  iVar2 = param_1 + 0x158;
  FUN_0054e6b0(iVar2);
  fVar5 = (float10)*(float *)(param_1 + 0x2538);
  FUN_005a3120();
  *(int *)(param_1 + 0xd17c) = (int)ROUND(fVar5);
  uVar3 = FUN_0054eac0(iVar2);
  DAT_007f8e64 = FUN_00548090(uVar3,"Bip01 Head",1);
  DAT_007f8e68 = FUN_00548090(uVar3,"Dummy05",1);
  _DAT_007f8e7c = FUN_00548090(uVar3,"Bip01 L Forearm",1);
  _DAT_007f8e80 = FUN_00548090(uVar3,"Bip01 R ForeArm",1);
  _DAT_007f8e84 = FUN_00548090(uVar3,"Bip01 L UpperArm",1);
  _DAT_007f8e88 = FUN_00548090(uVar3,"Bip01 R UpperArm",1);
  _DAT_007f8e8c = FUN_00548090(uVar3,"Bip01 L Foot",1);
  _DAT_007f8e90 = FUN_00548090(uVar3,"Bip01 R Foot",1);
  DAT_007f8e6c = FUN_00548090(uVar3,"Bip01 L Hand",1);
  _DAT_007f8e70 = FUN_00548090(uVar3,"Bip01 R Hand",1);
  DAT_007f8e74 = FUN_00548090(uVar3,"Bip01 R Finger0",1);
  _DAT_007f8e78 = FUN_00548090(uVar3,"Bip01 L Finger0",1);
  DAT_007f8e94 = FUN_00548090(uVar3,"Bip01 Spine",1);
  _DAT_007f8e98 = FUN_00548090(uVar3,"Bip01 Spine1",1);
  uVar3 = FUN_0054ea40(iVar2);
  uVar4 = FUN_0054a310(uVar3,&DAT_005b9506,1);
  *(uint *)(param_1 + 0xd0b8) = uVar4;
  uVar4 = FUN_0054a310(uVar3,"torso",1);
  *(uint *)(param_1 + 0xd0bc) = uVar4;
  uVar4 = FUN_0054a310(uVar3,"lforearm",1);
  *(uint *)(param_1 + 0xd0c0) = uVar4;
  uVar4 = FUN_0054a310(uVar3,&DAT_005b951a,1);
  *(uint *)(param_1 + 0xd0c4) = uVar4;
  uVar4 = FUN_0054a310(uVar3,"rforearm",1);
  *(uint *)(param_1 + 0xd0c8) = uVar4;
  uVar4 = FUN_0054a310(uVar3,&DAT_005b9528,1);
  *(uint *)(param_1 + 0xd0cc) = uVar4;
  uVar4 = FUN_0054a310(uVar3,"waist",1);
  *(uint *)(param_1 + 0xd0d0) = uVar4;
  uVar4 = FUN_0054a310(uVar3,"lthigh",1);
  *(uint *)(param_1 + 0xd0d8) = uVar4;
  uVar4 = FUN_0054a310(uVar3,"lshin",1);
  *(uint *)(param_1 + 0xd0dc) = uVar4;
  uVar4 = FUN_0054a310(uVar3,"rthigh",1);
  *(uint *)(param_1 + 0xd0e0) = uVar4;
  uVar3 = FUN_0054a310(uVar3,"rshin",1);
  *(uint *)(param_1 + 0xd0f0) = 0;
  *(uint *)(param_1 + 0xd0e4) = uVar3;
  if (*(int *)(param_1 + 0x3268) == 0) {
    uVar1 = *(uint *)(param_1 + 0xd84c);
    if (uVar1 == 0) {
      *(uint *)(param_1 + 0xce5c) = 0x41200000;
      *(uint *)(param_1 + 0xce60) = 0x41200000;
      *(uint *)(param_1 + 0x2538) = 0x42340000;
      fVar5 = (float10)*(float *)(param_1 + 0x2538);
      FUN_005a3120();
      *(int *)(param_1 + 0xd17c) = (int)ROUND(fVar5);
      return;
    }
    if (1 < uVar1) {
      if (uVar1 == 2) {
        *(uint *)(param_1 + 0xce5c) = 0x41a00000;
        *(uint *)(param_1 + 0xce60) = 0x41200000;
        *(uint *)(param_1 + 0x2538) = 0x42820000;
        *(uint *)(param_1 + 0xd85c) = 2;
        fVar5 = (float10)*(float *)(param_1 + 0x2538);
        FUN_005a3120();
        *(int *)(param_1 + 0xd17c) = (int)ROUND(fVar5);
        return;
      }
      fVar5 = (float10)*(float *)(param_1 + 0x2538);
      FUN_005a3120();
      *(int *)(param_1 + 0xd17c) = (int)ROUND(fVar5);
      return;
    }
    *(uint *)(param_1 + 0xce5c) = 0x41700000;
    *(uint *)(param_1 + 0xce60) = 0x41200000;
    *(uint *)(param_1 + 0xd85c) = 3;
    *(uint *)(param_1 + 0x2538) = 0x425c0000;
    fVar5 = (float10)*(float *)(param_1 + 0x2538);
    FUN_005a3120();
    *(int *)(param_1 + 0xd17c) = (int)ROUND(fVar5);
    return;
  }
  uVar1 = *(uint *)(param_1 + 0xd84c);
  if (uVar1 == 0) {
    *(uint *)(param_1 + 0xd17c) = 0x2d;
    return;
  }
  if (1 < uVar1) {
    if (uVar1 == 2) {
      *(uint *)(param_1 + 0xd17c) = 0x41;
      return;
    }
    return;
  }
  *(uint *)(param_1 + 0xd17c) = 0x37;
  return;
}
