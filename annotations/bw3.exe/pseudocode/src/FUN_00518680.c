// Name: FUN_00518680
// Address: 00518680
// Address Range: [[00518680, 00518a70]]
// Convention: unknown
// Signature: void FUN_00518680(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00518680(int param_1)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint auStackY_1028 [1015];
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  bVar3 = 0;
  FUN_004d26b0(param_1);
  iVar1 = param_1 + 0x158;
  uVar2 = FUN_0054eac0(iVar1);
  _DAT_01ed36dc = FUN_00548090(uVar2,"Bip01 head",1);
  _DAT_01ed36e0 = FUN_00548090(uVar2,"Bip01 L Clavicle",1);
  _DAT_01ed36e4 = FUN_00548090(uVar2,"Bip01 R Clavicle",1);
  _DAT_01ed36e8 = FUN_00548090(uVar2,"Bip01 L UpperArm",1);
  _DAT_01ed36ec = FUN_00548090(uVar2,"Bip01 R UpperArm",1);
  _DAT_01ed36f0 = FUN_00548090(uVar2,"Bip01 L ForeArm",1);
  _DAT_01ed36f4 = FUN_00548090(uVar2,"Bip01 R ForeArm",1);
  _DAT_01ed36f8 = FUN_00548090(uVar2,"Bip01 L Foot",1);
  _DAT_01ed36fc = FUN_00548090(uVar2,"Bip01 R Foot",1);
  _DAT_01ed3700 = FUN_00548090(uVar2,"Bip01 L Thigh",1);
  _DAT_01ed3704 = FUN_00548090(uVar2,"Bip01 R Thigh",1);
  _DAT_01ed3708 = FUN_00548090(uVar2,"Bip01 L Calf",1);
  _DAT_01ed370c = FUN_00548090(uVar2,"Bip01 R Calf",1);
  _DAT_01ed3710 = FUN_00548090(uVar2,"Bip01 L Hand",1);
  _DAT_01ed3714 = FUN_00548090(uVar2,"Bip01 R Hand",1);
  _DAT_01ed3718 = FUN_00548090(uVar2,"Bip01 Neck",1);
  _DAT_01ed371c = FUN_00548090(uVar2,"Bip01 Spine2",1);
  _DAT_01ed3720 = FUN_00548090(uVar2,"Bip01 Spine1",1);
  _DAT_01ed3724 = FUN_00548090(uVar2,"Bip01 Spine",1);
  _DAT_01ed3728 = FUN_00548090(uVar2,"Bip01 Pelvis",1);
  _DAT_01ed372c = FUN_00548090(uVar2,"Bip01 L Finger1",1);
  _DAT_01ed3730 = FUN_00548090(uVar2,"Bip01 L Finger11",1);
  _DAT_01ed3734 = FUN_00548090(uVar2,"Bip01 R Finger1",1);
  _DAT_01ed3738 = FUN_00548090(uVar2,"Bip01 R Finger11",1);
  *(uint *)(param_1 + 0x25a8) = _DAT_01ed3710;
  *(uint *)(param_1 + 0x2620) = _DAT_01ed3714;
  uVar2 = FUN_004fc310(iVar1,"turnlstart",1);
  _DAT_01ed373c = FUN_004fb9c0(uVar2);
  uVar2 = FUN_004fc310(iVar1,"turnrstart",1);
  _DAT_01ed3740 = FUN_004fb9c0(uVar2);
  uVar2 = FUN_004fc310(iVar1,"pickup",1);
  uVar2 = FUN_004fb9c0(uVar2);
  FUN_0054c180(iVar1,uVar2,0x41b00000);
  FUN_0054dbd0(iVar1,_DAT_01ed3714);
  uStack_28 = uStack_34;
  *(uint *)((int)&stack0xffffffdc + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffffd0 + (uint)bVar3 * -8);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffffd4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  if ((uint *)(param_1 + 0x20cb0) != &stack0xffffffd8) {
    *(uint *)(param_1 + 0x20cb0) = uStack_28;
    *(uint *)(param_1 + 0x20cb4) = uStack_24;
    *(uint *)(param_1 + 0x20cb8) = uStack_20;
  }
  FUN_0054dbd0(param_1 + 0x158,_DAT_01ed36ec);
  uStack_40 = uStack_1c;
  *(uint *)((int)&stack0xffffffc4 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffffe8 + (uint)bVar3 * -8);
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  if ((uint *)(param_1 + 0x20cbc) != &stack0xffffffc0) {
    *(uint *)(param_1 + 0x20cbc) = uStack_40;
    *(uint *)(param_1 + 0x20cc0) = uStack_3c;
    *(uint *)(param_1 + 0x20cc4) = uStack_38;
  }
  FUN_0051c1c0(param_1);
  *(uint *)(param_1 + 0x20cc8) = 0;
  *(uint *)(param_1 + 0x20cdc) = 0;
  *(uint *)(param_1 + 0x20cf0) = 0;
  *(uint *)(param_1 + 0x20c40) = 0;
  *(uint *)(param_1 + 0x20d00) = 0;
  *(uint *)(param_1 + 0x20c38) = 0;
  *(uint *)(param_1 + 0x20c3c) = 0;
  FUN_0054ea40(param_1 + 0x158);
  *(uint *)(param_1 + 0x20cf8) = 0;
  _DAT_01ed3744 = 0;
  *(uint *)(param_1 + 0x20cfc) = 0;
  FUN_00556230("prye-pain1.wav");
  FUN_00556230("prye-pain2.wav");
  FUN_00556230("prye-pain3.wav");
  FUN_00556230("prye-death1.wav");
  FUN_00556230("prye-death2.wav");
  FUN_00556230("prye-death3.wav");
  FUN_00556230("fall-1.wav");
  return;
}
