// Name: FUN_00585670
// Address: 00585670
// Address Range: [[00585670, 005859bb]]
// Convention: unknown
// Signature: void FUN_00585670(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00585670(int param_1)

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
  FUN_004eaa10(param_1);
  iVar1 = param_1 + 0x158;
  uVar2 = FUN_00569f30(iVar1);
  _DAT_02c83600 = FUN_005634f0(uVar2,"Bip01 head",1);
  _DAT_02c83604 = FUN_005634f0(uVar2,"Bip01 L Clavicle",1);
  _DAT_02c83608 = FUN_005634f0(uVar2,"Bip01 R Clavicle",1);
  _DAT_02c8360c = FUN_005634f0(uVar2,"Bip01 L UpperArm",1);
  _DAT_02c83610 = FUN_005634f0(uVar2,"Bip01 R UpperArm",1);
  _DAT_02c83614 = FUN_005634f0(uVar2,"Bip01 L ForeArm",1);
  _DAT_02c83618 = FUN_005634f0(uVar2,"Bip01 R ForeArm",1);
  _DAT_02c8361c = FUN_005634f0(uVar2,"Bip01 L Foot",1);
  _DAT_02c83620 = FUN_005634f0(uVar2,"Bip01 R Foot",1);
  _DAT_02c83624 = FUN_005634f0(uVar2,"Bip01 L Thigh",1);
  _DAT_02c83628 = FUN_005634f0(uVar2,"Bip01 R Thigh",1);
  _DAT_02c8362c = FUN_005634f0(uVar2,"Bip01 L Calf",1);
  _DAT_02c83630 = FUN_005634f0(uVar2,"Bip01 R Calf",1);
  _DAT_02c83634 = FUN_005634f0(uVar2,"Bip01 L Hand",1);
  _DAT_02c83638 = FUN_005634f0(uVar2,"Bip01 R Hand",1);
  _DAT_02c8363c = FUN_005634f0(uVar2,"Bip01 Neck",1);
  _DAT_02c83640 = FUN_005634f0(uVar2,"Bip01 Spine2",1);
  _DAT_02c83644 = FUN_005634f0(uVar2,"Bip01 Spine1",1);
  _DAT_02c83648 = FUN_005634f0(uVar2,"Bip01 Spine",1);
  _DAT_02c8364c = FUN_005634f0(uVar2,"Bip01 Pelvis",1);
  *(uint *)(param_1 + 0x25a8) = _DAT_02c83634;
  *(uint *)(param_1 + 0x2620) = _DAT_02c83638;
  uVar2 = FUN_00524a00(iVar1,"turnlstart",1);
  _DAT_02c83650 = FUN_005240c0(uVar2);
  uVar2 = FUN_00524a00(iVar1,"turnrstart",1);
  _DAT_02c83654 = FUN_005240c0(uVar2);
  uVar2 = FUN_00524a00(iVar1,"pickup",1);
  uVar2 = FUN_005240c0(uVar2);
  FUN_005675f0(iVar1,uVar2,0x41b00000);
  FUN_00569040(iVar1,_DAT_02c83638);
  uStack_40 = uStack_1c;
  *(uint *)((int)&stack0xffffffc4 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffffe8 + (uint)bVar3 * -8);
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  if ((uint *)(param_1 + 0x20090) != &stack0xffffffc0) {
    *(uint *)(param_1 + 0x20090) = uStack_40;
    *(uint *)(param_1 + 0x20094) = uStack_3c;
    *(uint *)(param_1 + 0x20098) = uStack_38;
  }
  FUN_00569040(param_1 + 0x158,_DAT_02c83610);
  uStack_28 = uStack_34;
  *(uint *)((int)&stack0xffffffdc + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffffd0 + (uint)bVar3 * -8);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffffd4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  if ((uint *)(param_1 + 0x2009c) != &stack0xffffffd8) {
    *(uint *)(param_1 + 0x2009c) = uStack_28;
    *(uint *)(param_1 + 0x200a0) = uStack_24;
    *(uint *)(param_1 + 0x200a4) = uStack_20;
  }
  FUN_00588ad0(param_1);
  *(uint *)(param_1 + 0x200a8) = 0;
  *(uint *)(param_1 + 0x20238) = 0;
  FUN_00468950(param_1 + 0x200ac,"stranger-hat.kfm");
  FUN_004688e0(param_1 + 0x200ac);
  *(uint *)(param_1 + 0x20240) = 0;
  *(uint *)(param_1 + 0x2001c) = 0;
  *(uint *)(param_1 + 0x20020) = 0;
  uVar2 = FUN_00569eb0(param_1 + 0x158);
  _DAT_02c83658 = FUN_00565780(uVar2,&DAT_005f6706,1);
  return;
}
