// Name: FUN_00450620
// Address: 00450620
// Address Range: [[00450620, 00450a5b]]
// Convention: unknown
// Signature: void FUN_00450620(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00450620(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  uint auStackY_102c [1012];
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_20;
  uint uStack_14;
  
  bVar6 = 0;
  FUN_004ce4a0(param_1);
  iVar3 = param_1 + 0x2b4;
  uVar2 = FUN_00547890(iVar3);
  uStack_14 = uVar2;
  _DAT_01b4d258 = FUN_00540e80(uVar2,"Bip01 head",1);
  _DAT_01b4d25c = FUN_00540e80(uVar2,"Bip01 L Clavicle",1);
  _DAT_01b4d260 = FUN_00540e80(uVar2,"Bip01 R Clavicle",1);
  _DAT_01b4d264 = FUN_00540e80(uVar2,"Bip01 L UpperArm",1);
  _DAT_01b4d268 = FUN_00540e80(uVar2,"Bip01 R UpperArm",1);
  _DAT_01b4d26c = FUN_00540e80(uVar2,"Bip01 L ForeArm",1);
  _DAT_01b4d270 = FUN_00540e80(uVar2,"Bip01 R ForeArm",1);
  _DAT_01b4d274 = FUN_00540e80(uVar2,"Bip01 L Foot",1);
  _DAT_01b4d278 = FUN_00540e80(uVar2,"Bip01 R Foot",1);
  _DAT_01b4d27c = FUN_00540e80(uVar2,"Bip01 L Thigh",1);
  _DAT_01b4d280 = FUN_00540e80(uVar2,"Bip01 R Thigh",1);
  _DAT_01b4d284 = FUN_00540e80(uVar2,"Bip01 L Calf",1);
  _DAT_01b4d288 = FUN_00540e80(uVar2,"Bip01 R Calf",1);
  _DAT_01b4d28c = FUN_00540e80(uVar2,"Bip01 L Hand",1);
  _DAT_01b4d290 = FUN_00540e80(uVar2,"Bip01 R Hand",1);
  _DAT_01b4d294 = FUN_00540e80(uVar2,"Bip01 Neck",1);
  _DAT_01b4d298 = FUN_00540e80(uVar2,"Bip01 Spine2",1);
  _DAT_01b4d29c = FUN_00540e80(uVar2,"Bip01 Spine1",1);
  _DAT_01b4d2a0 = FUN_00540e80(uVar2,"Bip01 Spine",1);
  _DAT_01b4d2a4 = FUN_00540e80(uVar2,"Bip01 Pelvis",1);
  *(uint *)(param_1 + 0x2618) = _DAT_01b4d28c;
  *(uint *)(param_1 + 0x2690) = _DAT_01b4d290;
  uVar2 = FUN_00503860(iVar3,"turnlstart",1);
  _DAT_01b4d2a8 = FUN_00502f10(uVar2);
  uVar2 = FUN_00503860(iVar3,"turnrstart",1);
  _DAT_01b4d2ac = FUN_00502f10(uVar2);
  uVar2 = FUN_00503860(iVar3,"pickup",1);
  uVar2 = FUN_00502f10(uVar2);
  FUN_00544f50(iVar3,uVar2,0x41b00000);
  FUN_005469a0(iVar3,_DAT_01b4d290);
  uStack_44 = uStack_2c;
  *(uint *)((int)&stack0xffffffc0 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffffd8 + (uint)bVar6 * -8);
  *(uint *)((int)&stack0xffffffc4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  if ((uint *)(param_1 + 0x25724) != &stack0xffffffbc) {
    *(uint *)(param_1 + 0x25724) = uStack_44;
    *(uint *)(param_1 + 0x25728) = uStack_40;
    *(uint *)(param_1 + 0x2572c) = uStack_3c;
  }
  FUN_005469a0(param_1 + 0x2b4,_DAT_01b4d268);
  uStack_38 = uStack_20;
  *(uint *)((int)&stack0xffffffcc + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffffe4 + (uint)bVar6 * -8);
  *(uint *)((int)&stack0xffffffd0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffffe8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  if ((uint *)(param_1 + 0x25730) != &stack0xffffffc8) {
    *(uint *)(param_1 + 0x25730) = uStack_38;
    *(uint *)(param_1 + 0x25734) = uStack_34;
    *(uint *)(param_1 + 0x25738) = uStack_30;
  }
  FUN_00453d80(param_1);
  *(uint *)(param_1 + 0x2573c) = 0;
  *(uint *)(param_1 + 0x25750) = 0;
  *(uint *)(param_1 + 0x257a8) = 0;
  *(uint *)(param_1 + 0x256b0) = 0;
  *(uint *)(param_1 + 0x256b4) = 0;
  FUN_00547810(param_1 + 0x2b4);
  _DAT_01b4d2b0 = 0;
  iVar3 = FUN_005b8c30(param_1 + 0x2514,param_1 + 0x257b0);
  if (iVar3 == 0) {
    iVar3 = FUN_005b8c30(param_1 + 0x2d10,param_1 + 0x258b0);
    if (iVar3 == 0) goto LAB_0045096f;
  }
  FUN_005478b0(param_1 + 0x2b4,&DAT_005cfe17);
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x148))(param_1,param_1 + 0x257b0,param_1 + 0x258b0);
LAB_0045096f:
  uVar2 = FUN_00540e80(uStack_14,"Bip01 head",1);
  *(uint *)(param_1 + 0x10a24) = uVar2;
  FUN_005b1780(param_1 + 0x2d0c,param_1 + 0x20,param_1 + 0x30,0x41200000,
               *(uint *)(param_1 + 0x2574),param_1 + 0x2b4);
  FUN_005a8030(param_1 + 0x154,0x100);
  FUN_005a8050(param_1 + 0x154,param_1);
  pcVar4 = "LANTERN";
  pcVar5 = (char *)(param_1 + 0x259b4);
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  FUN_0044fd70(param_1 + 0x25c68,"Lantern.kfm");
  FUN_0044fd00(param_1 + 0x25c68);
  FUN_0041be70((char *)(param_1 + 0x259b4));
  return;
}
