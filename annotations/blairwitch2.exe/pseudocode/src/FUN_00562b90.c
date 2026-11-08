// Name: FUN_00562b90
// Address: 00562b90
// Address Range: [[00562b90, 00562edb]]
// Convention: unknown
// Signature: void FUN_00562b90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00562b90(int param_1)

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
  FUN_004ce4a0(param_1);
  iVar1 = param_1 + 0x2b4;
  uVar2 = FUN_00547890(iVar1);
  _DAT_0264be30 = FUN_00540e80(uVar2,"Bip01 head",1);
  _DAT_0264be34 = FUN_00540e80(uVar2,"Bip01 L Clavicle",1);
  _DAT_0264be38 = FUN_00540e80(uVar2,"Bip01 R Clavicle",1);
  _DAT_0264be3c = FUN_00540e80(uVar2,"Bip01 L UpperArm",1);
  _DAT_0264be40 = FUN_00540e80(uVar2,"Bip01 R UpperArm",1);
  _DAT_0264be44 = FUN_00540e80(uVar2,"Bip01 L ForeArm",1);
  _DAT_0264be48 = FUN_00540e80(uVar2,"Bip01 R ForeArm",1);
  _DAT_0264be4c = FUN_00540e80(uVar2,"Bip01 L Foot",1);
  _DAT_0264be50 = FUN_00540e80(uVar2,"Bip01 R Foot",1);
  _DAT_0264be54 = FUN_00540e80(uVar2,"Bip01 L Thigh",1);
  _DAT_0264be58 = FUN_00540e80(uVar2,"Bip01 R Thigh",1);
  _DAT_0264be5c = FUN_00540e80(uVar2,"Bip01 L Calf",1);
  _DAT_0264be60 = FUN_00540e80(uVar2,"Bip01 R Calf",1);
  _DAT_0264be64 = FUN_00540e80(uVar2,"Bip01 L Hand",1);
  _DAT_0264be68 = FUN_00540e80(uVar2,"Bip01 R Hand",1);
  _DAT_0264be6c = FUN_00540e80(uVar2,"Bip01 Neck",1);
  _DAT_0264be70 = FUN_00540e80(uVar2,"Bip01 Spine2",1);
  _DAT_0264be74 = FUN_00540e80(uVar2,"Bip01 Spine1",1);
  _DAT_0264be78 = FUN_00540e80(uVar2,"Bip01 Spine",1);
  _DAT_0264be7c = FUN_00540e80(uVar2,"Bip01 Pelvis",1);
  *(uint *)(param_1 + 0x2618) = _DAT_0264be64;
  *(uint *)(param_1 + 0x2690) = _DAT_0264be68;
  uVar2 = FUN_00503860(iVar1,"turnlstart",1);
  _DAT_0264be80 = FUN_00502f10(uVar2);
  uVar2 = FUN_00503860(iVar1,"turnrstart",1);
  _DAT_0264be84 = FUN_00502f10(uVar2);
  uVar2 = FUN_00503860(iVar1,"pickup",1);
  uVar2 = FUN_00502f10(uVar2);
  FUN_00544f50(iVar1,uVar2,0x41b00000);
  FUN_005469a0(iVar1,_DAT_0264be68);
  uStack_40 = uStack_1c;
  *(uint *)((int)&stack0xffffffc4 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffffe8 + (uint)bVar3 * -8);
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  if ((uint *)(param_1 + 0x25728) != &stack0xffffffc0) {
    *(uint *)(param_1 + 0x25728) = uStack_40;
    *(uint *)(param_1 + 0x2572c) = uStack_3c;
    *(uint *)(param_1 + 0x25730) = uStack_38;
  }
  FUN_005469a0(param_1 + 0x2b4,_DAT_0264be40);
  uStack_28 = uStack_34;
  *(uint *)((int)&stack0xffffffdc + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffffd0 + (uint)bVar3 * -8);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffffd4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  if ((uint *)(param_1 + 0x25734) != &stack0xffffffd8) {
    *(uint *)(param_1 + 0x25734) = uStack_28;
    *(uint *)(param_1 + 0x25738) = uStack_24;
    *(uint *)(param_1 + 0x2573c) = uStack_20;
  }
  FUN_00565ff0(param_1);
  *(uint *)(param_1 + 0x25740) = 0;
  *(uint *)(param_1 + 0x258d0) = 0;
  FUN_0044fd70(param_1 + 0x25744,"stranger-hat.kfm");
  FUN_0044fd00(param_1 + 0x25744);
  *(uint *)(param_1 + 0x258d8) = 0;
  *(uint *)(param_1 + 0x256b4) = 0;
  *(uint *)(param_1 + 0x256b8) = 0;
  uVar2 = FUN_00547810(param_1 + 0x2b4);
  _DAT_0264be88 = FUN_00543100(uVar2,&DAT_005eb493,1);
  return;
}
