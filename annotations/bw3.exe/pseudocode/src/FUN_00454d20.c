// Name: FUN_00454d20
// Address: 00454d20
// Address Range: [[00454d20, 00454fbc]]
// Convention: unknown
// Signature: void FUN_00454d20(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00454d20(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = param_1 + 0x158;
  FUN_0054e6b0(iVar3);
  uVar1 = FUN_0054eac0(iVar3);
  uVar2 = FUN_00548090(uVar1,"Bip01 Head",1);
  *(uint *)(param_1 + 0xd0e8) = uVar2;
  uVar2 = FUN_00548090(uVar1,"Bip01 L ForeArm",1);
  *(uint *)(param_1 + 0xd0f4) = uVar2;
  uVar2 = FUN_00548090(uVar1,"Bip01 R ForeArm",1);
  *(uint *)(param_1 + 0xd0f8) = uVar2;
  uVar2 = FUN_00548090(uVar1,"Bip01 L UpperArm",1);
  *(uint *)(param_1 + 0xd0fc) = uVar2;
  uVar2 = FUN_00548090(uVar1,"Bip01 R UpperArm",1);
  *(uint *)(param_1 + 0xd100) = uVar2;
  uVar2 = FUN_00548090(uVar1,"Bip01 L Foot",1);
  *(uint *)(param_1 + 0xd104) = uVar2;
  uVar2 = FUN_00548090(uVar1,"Bip01 R Foot",1);
  *(uint *)(param_1 + 0xd108) = uVar2;
  uVar2 = FUN_00548090(uVar1,"Bip01 L Hand",1);
  *(uint *)(param_1 + 0xd0ec) = uVar2;
  uVar2 = FUN_00548090(uVar1,"Bip01 R Hand",1);
  *(uint *)(param_1 + 0xd0f0) = uVar2;
  uVar2 = FUN_00548090(uVar1,"Bip01 Spine",1);
  *(uint *)(param_1 + 0xd10c) = uVar2;
  uVar1 = FUN_00548090(uVar1,"Bip01 Spine2",1);
  *(uint *)(param_1 + 0xd110) = uVar1;
  uVar1 = FUN_0054ea40(iVar3);
  uVar2 = FUN_0054a310(uVar1,&DAT_005ba475,1);
  *(uint *)(param_1 + 0xd114) = uVar2;
  uVar2 = FUN_0054a310(uVar1,"l4arm",1);
  *(uint *)(param_1 + 0xd118) = uVar2;
  uVar2 = FUN_0054a310(uVar1,&DAT_005ba480,1);
  *(uint *)(param_1 + 0xd11c) = uVar2;
  iVar3 = FUN_0054a310(uVar1,"r4arm",0);
  *(int *)(param_1 + 0xd120) = iVar3;
  if (iVar3 < 0) {
    *(uint *)(param_1 + 0xd120) = 0x3b;
  }
  uVar2 = FUN_0054a310(uVar1,"waist",0);
  *(uint *)(param_1 + 0xd124) = uVar2;
  uVar2 = FUN_0054a310(uVar1,"torso",1);
  *(uint *)(param_1 + 0xd128) = uVar2;
  uVar1 = FUN_0054a310(uVar1,&DAT_005ba497,1);
  *(uint *)(param_1 + 0x2384) = 0;
  *(uint *)(param_1 + 0xd12c) = uVar1;
  *(uint *)(param_1 + 0x25a8) = *(uint *)(param_1 + 0xd0ec);
  *(uint *)(param_1 + 0x25ac) = *(uint *)(param_1 + 0xd118);
  *(uint *)(param_1 + 0x2620) = *(uint *)(param_1 + 0xd0f0);
  *(uint *)(param_1 + 0x2624) = *(uint *)(param_1 + 0xd120);
  FUN_00489110(param_1);
  *(uint *)(param_1 + 0xfc) = (uint)(*(int *)(param_1 + 0xd0d8) != 0);
  uVar1 = FUN_0040ce40(0,0x3f800000);
  *(uint *)(param_1 + 0xd140) = uVar1;
  if ((-1 < *(int *)(param_1 + 0xd124)) && (*(float *)(param_1 + 0x3280) < 0.0)) {
    *(float *)(param_1 + 0x3280) = *(float *)(param_1 + 0x2490) + (float)_DAT_005ba4a2;
  }
  *(uint *)(param_1 + 0xd0e4) = 0;
  *(uint *)(param_1 + 0xd138) = 0;
  *(uint *)(param_1 + 0xd13c) = 0;
  *(uint *)(param_1 + 0xd134) = 0;
  return;
}
