// Name: FUN_00469060
// Address: 00469060
// Address Range: [[00469060, 004693a4]]
// Convention: unknown
// Signature: void FUN_00469060(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00469060(int param_1)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint auStackY_1028 [1015];
  uint uStack_40;
  uint uStack_34;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  bVar3 = 0;
  FUN_004eaa10(param_1);
  iVar1 = param_1 + 0x158;
  uVar2 = FUN_00569f30(iVar1);
  _DAT_01b68814 = FUN_005634f0(uVar2,"Bip01 head",1);
  _DAT_01b68818 = FUN_005634f0(uVar2,"Bip01 L Clavicle",1);
  _DAT_01b6881c = FUN_005634f0(uVar2,"Bip01 R Clavicle",1);
  _DAT_01b68820 = FUN_005634f0(uVar2,"Bip01 L UpperArm",1);
  _DAT_01b68824 = FUN_005634f0(uVar2,"Bip01 R UpperArm",1);
  _DAT_01b68828 = FUN_005634f0(uVar2,"Bip01 L ForeArm",1);
  _DAT_01b6882c = FUN_005634f0(uVar2,"Bip01 R ForeArm",1);
  _DAT_01b68830 = FUN_005634f0(uVar2,"Bip01 L Foot",1);
  _DAT_01b68834 = FUN_005634f0(uVar2,"Bip01 R Foot",1);
  _DAT_01b68838 = FUN_005634f0(uVar2,"Bip01 L Thigh",1);
  _DAT_01b6883c = FUN_005634f0(uVar2,"Bip01 R Thigh",1);
  _DAT_01b68840 = FUN_005634f0(uVar2,"Bip01 L Calf",1);
  _DAT_01b68844 = FUN_005634f0(uVar2,"Bip01 R Calf",1);
  _DAT_01b68848 = FUN_005634f0(uVar2,"Bip01 L Hand",1);
  _DAT_01b6884c = FUN_005634f0(uVar2,"Bip01 R Hand",1);
  _DAT_01b68850 = FUN_005634f0(uVar2,"Bip01 Neck",1);
  _DAT_01b68854 = FUN_005634f0(uVar2,"Bip01 Spine2",1);
  _DAT_01b68858 = FUN_005634f0(uVar2,"Bip01 Spine1",1);
  _DAT_01b6885c = FUN_005634f0(uVar2,"Bip01 Spine",1);
  _DAT_01b68860 = FUN_005634f0(uVar2,"Bip01 Pelvis",1);
  *(uint *)(param_1 + 0x25a8) = _DAT_01b68848;
  *(uint *)(param_1 + 0x2620) = _DAT_01b6884c;
  uVar2 = FUN_00524a00(iVar1,"turnlstart",1);
  _DAT_01b68864 = FUN_005240c0(uVar2);
  uVar2 = FUN_00524a00(iVar1,"turnrstart",1);
  _DAT_01b68868 = FUN_005240c0(uVar2);
  uVar2 = FUN_00524a00(iVar1,"pickup",1);
  uVar2 = FUN_005240c0(uVar2);
  FUN_005675f0(iVar1,uVar2,0x41b00000);
  FUN_00569040(iVar1,_DAT_01b6884c);
  uStack_28 = uStack_40;
  *(uint *)((int)&stack0xffffffdc + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffffc4 + (uint)bVar3 * -8);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffffc8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  if ((uint *)(param_1 + 0x20090) != &stack0xffffffd8) {
    *(uint *)(param_1 + 0x20090) = uStack_28;
    *(uint *)(param_1 + 0x20094) = uStack_24;
    *(uint *)(param_1 + 0x20098) = uStack_20;
  }
  FUN_00569040(param_1 + 0x158,_DAT_01b68824);
  uStack_1c = uStack_34;
  *(uint *)((int)&stack0xffffffe8 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffffd0 + (uint)bVar3 * -8);
  *(uint *)((int)&stack0xffffffec + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffffd4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  if ((uint *)(param_1 + 0x2009c) != &stack0xffffffe4) {
    *(uint *)(param_1 + 0x2009c) = uStack_1c;
    *(uint *)(param_1 + 0x200a0) = uStack_18;
    *(uint *)(param_1 + 0x200a4) = uStack_14;
  }
  FUN_0046caa0(param_1);
  *(uint *)(param_1 + 0x200a8) = 0;
  *(uint *)(param_1 + 0x200bc) = 0;
  *(uint *)(param_1 + 0x200d0) = 0;
  *(uint *)(param_1 + 0x20020) = 0;
  *(uint *)(param_1 + 0x200e0) = 0;
  *(uint *)(param_1 + 0x20018) = 0;
  *(uint *)(param_1 + 0x2001c) = 0;
  FUN_00569eb0(param_1 + 0x158);
  *(uint *)(param_1 + 0x200d8) = 0;
  _DAT_01b6886c = 0;
  *(uint *)(param_1 + 0x200dc) = 0;
  return;
}
