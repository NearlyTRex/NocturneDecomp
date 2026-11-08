// Name: FUN_0045ff00
// Address: 0045ff00
// Address Range: [[0045ff00, 00460224]]
// Convention: unknown
// Signature: void FUN_0045ff00(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045ff00(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  
  FUN_00569b20(param_1 + 0x158);
  iVar1 = FUN_004a6c30(0x01C51D80,"COMBATMODEHARD");
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0xc2cc) = 0x3f400000;
  }
  else {
    *(uint *)(param_1 + 0xc2cc) = 0x3f800000;
  }
  iVar1 = param_1;
  do {
    iVar2 = iVar1 + 4;
    *(uint *)(iVar1 + 0xc2d8) = 0;
    iVar1 = iVar2;
  } while (iVar2 != param_1 + 0x18);
  uVar3 = FUN_00569f30(param_1 + 0x158);
  uVar4 = FUN_005634f0(uVar3,"Bip01 Spine1",1);
  *(uint *)(param_1 + 0xc268) = uVar4;
  uVar4 = FUN_005634f0(uVar3,"Bip01 Head",1);
  *(uint *)(param_1 + 0xc26c) = uVar4;
  uVar4 = FUN_005634f0(uVar3,"Bip01 Ponytail12",1);
  *(uint *)(param_1 + 0xc270) = uVar4;
  uVar4 = FUN_005634f0(uVar3,"Bip01 Ponytail22",1);
  *(uint *)(param_1 + 0xc274) = uVar4;
  uVar4 = FUN_005634f0(uVar3,"Dummy22",1);
  *(uint *)(param_1 + 0xc278) = uVar4;
  uVar4 = FUN_005634f0(uVar3,"Dummy23",1);
  *(uint *)(param_1 + 0xc27c) = uVar4;
  uVar4 = FUN_005634f0(uVar3,"Bip01 Sack01",1);
  *(uint *)(param_1 + 0xc280) = uVar4;
  uVar4 = FUN_005634f0(uVar3,"Bip01 Sack02",1);
  *(uint *)(param_1 + 0xc284) = uVar4;
  uVar4 = FUN_005634f0(uVar3,"Bip01 Sack03",1);
  *(uint *)(param_1 + 0xc288) = uVar4;
  uVar4 = FUN_005634f0(uVar3,"Bip01 Sack04",1);
  *(uint *)(param_1 + 0xc28c) = uVar4;
  uVar4 = FUN_005634f0(uVar3,"Bip01 Sack05",1);
  *(uint *)(param_1 + 0xc290) = uVar4;
  uVar4 = FUN_005634f0(uVar3,"Bip01 Sack06",1);
  *(uint *)(param_1 + 0xc294) = uVar4;
  uVar4 = FUN_005634f0(uVar3,"Dummy4",1);
  *(uint *)(param_1 + 0xc298) = uVar4;
  uVar4 = FUN_005634f0(uVar3,"Dummy24",1);
  *(uint *)(param_1 + 0xc29c) = uVar4;
  uVar4 = FUN_005634f0(uVar3,"Dummy25",1);
  *(uint *)(param_1 + 0xc2a0) = uVar4;
  uVar4 = FUN_005634f0(uVar3,"Dummy26",1);
  *(uint *)(param_1 + 0xc2a4) = uVar4;
  uVar4 = FUN_005634f0(uVar3,"Dummy27",1);
  *(uint *)(param_1 + 0xc2a8) = uVar4;
  uVar3 = FUN_005634f0(uVar3,"Dummy28",1);
  *(uint *)(param_1 + 0xc2ac) = uVar3;
  uVar3 = FUN_00569eb0(param_1 + 0x158);
  uVar4 = FUN_00565780(uVar3,"sack01",1);
  *(uint *)(param_1 + 0xc2b0) = uVar4;
  uVar4 = FUN_00565780(uVar3,"sack02",1);
  *(uint *)(param_1 + 0xc2b4) = uVar4;
  uVar4 = FUN_00565780(uVar3,"sack03",1);
  *(uint *)(param_1 + 0xc2b8) = uVar4;
  uVar4 = FUN_00565780(uVar3,"sack04",1);
  *(uint *)(param_1 + 0xc2bc) = uVar4;
  uVar4 = FUN_00565780(uVar3,"sack05",1);
  *(uint *)(param_1 + 0xc2c0) = uVar4;
  uVar3 = FUN_00565780(uVar3,"sack06",1);
  *(uint *)(param_1 + 0xc2c4) = uVar3;
  if (*(int *)(0x01D2C900 + 0x1008) == 0) {
    iVar1 = FUN_004a6c30(0x01C51D80,"PuzzleModeHard");
    if (iVar1 == 0) {
      *(uint *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc2bc) * 4) = 0;
      *(uint *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc2c0) * 4) = 0;
      *(uint *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc2c4) * 4) = 0;
      *(uint *)(param_1 + 0xc2d4) = 3;
    }
    else {
      *(uint *)(param_1 + 0xc2d4) = 6;
    }
  }
  fVar5 = (float10)*(float *)(param_1 + 0x2538);
  FUN_005c03a0();
  *(uint *)(param_1 + 0xc9c4) = 0;
  _DAT_00612270 = (int)ROUND(fVar5);
  FUN_004a0510(param_1);
  return;
}
