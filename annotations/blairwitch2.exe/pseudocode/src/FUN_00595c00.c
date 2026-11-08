// Name: FUN_00595c00
// Address: 00595c00
// Address Range: [[00595c00, 00595f22]]
// Convention: unknown
// Signature: void FUN_00595c00(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00595c00(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1 + 0x2b4;
  FUN_00547480(iVar3);
  uVar1 = FUN_00547890(iVar3);
  uVar2 = FUN_00540e80(uVar1,"Bip01 Head",1);
  *(uint *)(param_1 + 0x10b88) = uVar2;
  uVar2 = FUN_00540e80(uVar1,"Bip01 L ForeArm",1);
  *(uint *)(param_1 + 0x10b94) = uVar2;
  uVar2 = FUN_00540e80(uVar1,"Bip01 R ForeArm",1);
  *(uint *)(param_1 + 0x10b98) = uVar2;
  uVar2 = FUN_00540e80(uVar1,"Bip01 L UpperArm",1);
  *(uint *)(param_1 + 0x10b9c) = uVar2;
  uVar2 = FUN_00540e80(uVar1,"Bip01 R UpperArm",1);
  *(uint *)(param_1 + 0x10ba0) = uVar2;
  uVar2 = FUN_00540e80(uVar1,"Bip01 L Foot",1);
  *(uint *)(param_1 + 0x10ba4) = uVar2;
  uVar2 = FUN_00540e80(uVar1,"Bip01 R Foot",1);
  *(uint *)(param_1 + 0x10ba8) = uVar2;
  uVar2 = FUN_00540e80(uVar1,"Bip01 L Hand",1);
  *(uint *)(param_1 + 0x10b8c) = uVar2;
  uVar2 = FUN_00540e80(uVar1,"Bip01 R Hand",1);
  *(uint *)(param_1 + 0x10b90) = uVar2;
  uVar2 = FUN_00540e80(uVar1,"Bip01 Spine",1);
  *(uint *)(param_1 + 0x10bac) = uVar2;
  uVar1 = FUN_00540e80(uVar1,"Bip01 Spine2",1);
  *(uint *)(param_1 + 0x10bb0) = uVar1;
  uVar1 = FUN_00547810(iVar3);
  uVar2 = FUN_00543100(uVar1,"larm01",1);
  *(uint *)(param_1 + 0x10bb4) = uVar2;
  uVar2 = FUN_00543100(uVar1,"l4arm01",1);
  *(uint *)(param_1 + 0x10bb8) = uVar2;
  uVar2 = FUN_00543100(uVar1,"rarm01",1);
  *(uint *)(param_1 + 0x10bbc) = uVar2;
  iVar3 = FUN_00543100(uVar1,"r4arm01",0);
  *(int *)(param_1 + 0x10bc0) = iVar3;
  if (iVar3 < 0) {
    *(uint *)(param_1 + 0x10bc0) = 0x1d;
  }
  uVar2 = FUN_00543100(uVar1,"waist01",0);
  *(uint *)(param_1 + 0x10bc4) = uVar2;
  uVar2 = FUN_00543100(uVar1,"torso01",1);
  *(uint *)(param_1 + 0x10bc8) = uVar2;
  uVar1 = FUN_00543100(uVar1,"head01",1);
  *(uint *)(param_1 + 0x10bcc) = uVar1;
  *(uint *)(param_1 + 0x2468) = 0;
  iVar3 = FUN_005b8130(param_1 + 0x2514,"newzomb1.dfm");
  if (iVar3 == 0) {
    uVar1 = *(uint *)(param_1 + 0x10bb4);
    *(uint *)(param_1 + 0x10bb4) = *(uint *)(param_1 + 0x10bbc);
    *(uint *)(param_1 + 0x10bbc) = uVar1;
    uVar1 = *(uint *)(param_1 + 0x10bb8);
    *(uint *)(param_1 + 0x10bb8) = *(uint *)(param_1 + 0x10bc0);
    *(uint *)(param_1 + 0x10bc0) = uVar1;
  }
  *(uint *)(param_1 + 0x2618) = *(uint *)(param_1 + 0x10b8c);
  *(uint *)(param_1 + 0x261c) = *(uint *)(param_1 + 0x10bb8);
  *(uint *)(param_1 + 0x2690) = *(uint *)(param_1 + 0x10b90);
  *(uint *)(param_1 + 0x2694) = *(uint *)(param_1 + 0x10bc0);
  FUN_00487eb0(param_1);
  *(uint *)(param_1 + 0xfc) = (uint)(*(int *)(param_1 + 0x10b7c) != 0);
  uVar1 = FUN_0040cf60(0,0x3f800000);
  *(uint *)(param_1 + 0x10be0) = uVar1;
  if ((-1 < *(int *)(param_1 + 0x10bc4)) && (*(float *)(param_1 + 0x3444) < 0.0)) {
    *(float *)(param_1 + 0x3444) = *(float *)(param_1 + 0x24fc) + (float)_DAT_005eef62;
  }
  iVar3 = param_1 + 0x2514;
  *(uint *)(param_1 + 0x10bd4) = 0;
  *(uint *)(param_1 + 0x10b84) = 0;
  iVar4 = FUN_005b8130(iVar3,"newzchik.dfm");
  if (((iVar4 == 0) || (iVar4 = FUN_005b8130(iVar3,"zombho1.dfm"), iVar4 == 0)) ||
     (iVar3 = FUN_005b8130(iVar3,"zombho2.dfm"), iVar3 == 0)) {
    *(uint *)(param_1 + 0x10b84) = 1;
  }
  *(uint *)(param_1 + 0x10bdc) = 0;
  *(uint *)(param_1 + 0x10bd8) = 0;
  return;
}
