// Name: FUN_004f04f0
// Address: 004f04f0
// Address Range: [[004f04f0, 004f089b]]
// Convention: unknown
// Signature: void FUN_004f04f0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f04f0(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  byte bVar7;
  uint auStackY_1010 [1014];
  char *pcVar8;
  uint uStack_28;
  uint uStack_1c;
  
  bVar7 = 0;
  if (*0x01D34CB0 != 0) {
    _DAT_01d046a0 = "..\\core\\mimic.cpp";
    _DAT_01d046a4 = 0xb6;
    FUN_004e4500("CMimic::setup - can't use mimic in multi-player!");
  }
  iVar4 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  if (iVar4 == 0) {
    pcVar8 = "stranger.dfm";
  }
  else {
    pcVar8 = (char *)(iVar4 + 0x2514);
  }
  FUN_005478b0(param_1 + 0x2b4,pcVar8);
  iVar4 = param_1 + 0x2b4;
  FUN_00547480(iVar4);
  uVar3 = FUN_00547890(iVar4);
  _DAT_01d097c4 = FUN_00540e80(uVar3,"Bip01 head",1);
  _DAT_01d097c8 = FUN_00540e80(uVar3,"Bip01 L Clavicle",1);
  _DAT_01d097cc = FUN_00540e80(uVar3,"Bip01 R Clavicle",1);
  _DAT_01d097d0 = FUN_00540e80(uVar3,"Bip01 L UpperArm",1);
  _DAT_01d097d4 = FUN_00540e80(uVar3,"Bip01 R UpperArm",1);
  _DAT_01d097d8 = FUN_00540e80(uVar3,"Bip01 L ForeArm",1);
  _DAT_01d097dc = FUN_00540e80(uVar3,"Bip01 R ForeArm",1);
  _DAT_01d097e0 = FUN_00540e80(uVar3,"Bip01 L Foot",1);
  _DAT_01d097e4 = FUN_00540e80(uVar3,"Bip01 R Foot",1);
  _DAT_01d097e8 = FUN_00540e80(uVar3,"Bip01 L Thigh",1);
  _DAT_01d097ec = FUN_00540e80(uVar3,"Bip01 R Thigh",1);
  _DAT_01d097f0 = FUN_00540e80(uVar3,"Bip01 L Calf",1);
  _DAT_01d097f4 = FUN_00540e80(uVar3,"Bip01 R Calf",1);
  _DAT_01d09804 = FUN_00540e80(uVar3,"Bip01 L Hand",1);
  _DAT_01d09808 = FUN_00540e80(uVar3,"Bip01 R Hand",1);
  _DAT_01d0980c = FUN_00540e80(uVar3,"Bip01 Spine2",1);
  _DAT_01d09810 = FUN_00540e80(uVar3,"Bip01 Spine",1);
  FUN_00487eb0(param_1);
  FUN_005adeb0(param_1 + 0x10bc0,"strcoat.cth");
  FUN_005ae680(param_1 + 0x10bc0,param_1 + 0x20,param_1 + 0x30,iVar4);
  uVar3 = FUN_0040c5a0(param_1 + 0x4b6f8,_DAT_01c264e0);
  iVar4 = FUN_0040c8f0(uVar3);
  *(int *)(param_1 + 0x4c350) = iVar4;
  if (iVar4 == 0) {
    _DAT_01d046a0 = "..\\core\\mimic.cpp";
    _DAT_01d046a4 = 0x101;
    FUN_004e4500("CMimic failed to create morph target actor!");
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 0x4c350) + 0x2b0) + 8))(*(int *)(param_1 + 0x4c350));
  iVar4 = param_1 + 0x2b4;
  FUN_00544e60(iVar4);
  FUN_00546ae0(iVar4);
  FUN_005b6f80(param_1 + 0x4b720,0,iVar4);
  FUN_00544ee0(iVar4);
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x4b774)) {
    iVar5 = 0;
    do {
      iVar4 = iVar4 + 1;
      *(float *)(*(int *)(param_1 + 0x4b778) + 4 + iVar5) =
           -*(float *)(*(int *)(param_1 + 0x4b778) + 4 + iVar5);
      iVar5 = iVar5 + 0x10;
    } while (iVar4 < *(int *)(param_1 + 0x4b774));
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x4b77c)) {
    iVar5 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x4b780);
      puVar1 = (uint *)(iVar5 + 0x30 + iVar2);
      puVar6 = puVar1 + (uint)bVar7 * -2 + 1;
      uStack_1c = *puVar1;
      *(uint *)(&stack0xffffffe8 + (uint)bVar7 * -8) = *puVar6;
      *(uint *)(&stack0xffffffec + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
           puVar6[(uint)bVar7 * -2 + 1];
      puVar1 = (uint *)(iVar5 + 0x18 + iVar2);
      puVar6 = puVar1 + (uint)bVar7 * -2 + 1;
      uStack_28 = *puVar1;
      *(uint *)(&stack0xffffffdc + (uint)bVar7 * -8) = *puVar6;
      *(uint *)(&stack0xffffffe0 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
           puVar6[(uint)bVar7 * -2 + 1];
      puVar1 = (uint *)(iVar5 + 0x18 + iVar2);
      puVar6 = puVar1 + (uint)bVar7 * -2 + 1;
      *puVar1 = uStack_1c;
      *puVar6 = *(uint *)(&stack0xffffffe8 + (uint)bVar7 * -8);
      puVar6[(uint)bVar7 * -2 + 1] =
           *(uint *)(&stack0xffffffec + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      puVar1 = (uint *)(iVar5 + 0x30 + iVar2);
      puVar6 = puVar1 + (uint)bVar7 * -2 + 1;
      *puVar1 = uStack_28;
      *puVar6 = *(uint *)(&stack0xffffffdc + (uint)bVar7 * -8);
      puVar6[(uint)bVar7 * -2 + 1] =
           *(uint *)(&stack0xffffffe0 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x3c;
    } while (iVar4 < *(int *)(param_1 + 0x4b77c));
  }
  FUN_00544e60(*(int *)(param_1 + 0x4c350) + 0x2b4);
  FUN_00546ae0(*(int *)(param_1 + 0x4c350) + 0x2b4);
  FUN_005b6f80(param_1 + 0x4b720,1,*(int *)(param_1 + 0x4c350) + 0x2b4);
  FUN_00544ee0(*(int *)(param_1 + 0x4c350) + 0x2b4);
  FUN_005b71d0(param_1 + 0x4b720);
  return;
}
