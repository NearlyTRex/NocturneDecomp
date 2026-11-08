// Name: FUN_0055dbf0
// Address: 0055dbf0
// Address Range: [[0055dbf0, 0055ddf1]]
// Convention: unknown
// Signature: void FUN_0055dbf0(int param_1)

#include "nocturne.h"

void FUN_0055dbf0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_00569b20(param_1 + 0x158);
  iVar1 = FUN_004a6c30(0x01C51D80,"COMBATMODEHARD");
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0xc310) = 0x3f400000;
  }
  else {
    *(uint *)(param_1 + 0xc310) = 0x3f800000;
  }
  *(uint *)(param_1 + 0xc2d4) = 0;
  *(uint *)(param_1 + 0xc2fc) = 0;
  iVar1 = FUN_005c04e0(param_1 + 0x24a8,"SHADOWBEAST.DFM");
  if ((iVar1 == 0) ||
     (iVar1 = FUN_005c04e0(param_1 + 0x24a8,"WERE_HEADLESS.DFM"), iVar1 == 0)) {
    *(uint *)(param_1 + 0xc2d4) = 1;
  }
  uVar2 = FUN_00569f30(param_1 + 0x158);
  uVar3 = FUN_005634f0(uVar2,"Bip01 Pelvis",1);
  *(uint *)(param_1 + 0xc284) = uVar3;
  uVar3 = FUN_005634f0(uVar2,"Bip01 Spine2",1);
  *(uint *)(param_1 + 0xc288) = uVar3;
  uVar3 = FUN_005634f0(uVar2,"Bip01 Head",1);
  *(uint *)(param_1 + 0xc28c) = uVar3;
  uVar3 = FUN_005634f0(uVar2,"Bip01 Spine2",1);
  *(uint *)(param_1 + 0xc26c) = uVar3;
  uVar3 = FUN_005634f0(uVar2,"Bip01 L Finger1",1);
  *(uint *)(param_1 + 0xc270) = uVar3;
  uVar3 = FUN_005634f0(uVar2,"Bip01 R Finger1",1);
  *(uint *)(param_1 + 0xc274) = uVar3;
  uVar3 = FUN_005634f0(uVar2,"Bip01 Head",1);
  *(uint *)(param_1 + 0xc278) = uVar3;
  uVar3 = FUN_005634f0(uVar2,"Bip01 L Foot",1);
  *(uint *)(param_1 + 0xc280) = uVar3;
  uVar2 = FUN_005634f0(uVar2,"Bip01 R Foot",1);
  *(uint *)(param_1 + 0xc27c) = uVar2;
  FUN_004a0510(param_1);
  *(uint *)(param_1 + 0xfc) = 1;
  *(uint *)(param_1 + 0xf8) = 0;
  if (*(int *)(param_1 + 0xc268) == 0) {
    *(uint *)(param_1 + 0x2ff0) = 0x3fc00000;
  }
  *(uint *)(param_1 + 0xc29c) = 0;
  *(uint *)(param_1 + 0xc2a0) = 0;
  *(uint *)(param_1 + 0xc2a4) = 0;
  *(uint *)(param_1 + 0xc2a8) = 0;
  *(uint *)(param_1 + 0xc2b4) = 0;
  uVar2 = FUN_0040cc00(0x41200000,0x41f00000);
  *(uint *)(param_1 + 0xc298) = uVar2;
  return;
}
