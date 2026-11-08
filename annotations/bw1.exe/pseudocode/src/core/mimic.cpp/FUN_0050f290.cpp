// Name: FUN_0050f290
// Address: 0050f290
// Address Range: [[0050f290, 0050f62b]]
// Convention: unknown
// Signature: void FUN_0050f290(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050f290(int param_1)

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
  if (*0x01D51C20 != 0) {
    _DAT_01d1d400 = "..\\core\\mimic.cpp";
    _DAT_01d1d404 = 0xb6;
    FUN_005030e0("CMimic::setup - can't use mimic in multi-player!");
  }
  iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  if (iVar4 == 0) {
    pcVar8 = "stranger.dfm";
  }
  else {
    pcVar8 = (char *)(iVar4 + 0x24a8);
  }
  FUN_00569f50(param_1 + 0x158,pcVar8);
  iVar4 = param_1 + 0x158;
  FUN_00569b20(iVar4);
  uVar3 = FUN_00569f30(iVar4);
  _DAT_01d22424 = FUN_005634f0(uVar3,"Bip01 head",1);
  _DAT_01d22428 = FUN_005634f0(uVar3,"Bip01 L Clavicle",1);
  _DAT_01d2242c = FUN_005634f0(uVar3,"Bip01 R Clavicle",1);
  _DAT_01d22430 = FUN_005634f0(uVar3,"Bip01 L UpperArm",1);
  _DAT_01d22434 = FUN_005634f0(uVar3,"Bip01 R UpperArm",1);
  _DAT_01d22438 = FUN_005634f0(uVar3,"Bip01 L ForeArm",1);
  _DAT_01d2243c = FUN_005634f0(uVar3,"Bip01 R ForeArm",1);
  _DAT_01d22440 = FUN_005634f0(uVar3,"Bip01 L Foot",1);
  _DAT_01d22444 = FUN_005634f0(uVar3,"Bip01 R Foot",1);
  _DAT_01d22448 = FUN_005634f0(uVar3,"Bip01 L Thigh",1);
  _DAT_01d2244c = FUN_005634f0(uVar3,"Bip01 R Thigh",1);
  _DAT_01d22450 = FUN_005634f0(uVar3,"Bip01 L Calf",1);
  _DAT_01d22454 = FUN_005634f0(uVar3,"Bip01 R Calf",1);
  _DAT_01d22464 = FUN_005634f0(uVar3,"Bip01 L Hand",1);
  _DAT_01d22468 = FUN_005634f0(uVar3,"Bip01 R Hand",1);
  _DAT_01d2246c = FUN_005634f0(uVar3,"Bip01 Spine2",1);
  _DAT_01d22470 = FUN_005634f0(uVar3,"Bip01 Spine",1);
  FUN_004a0510(param_1);
  FUN_0043e6d0(param_1 + 0xc330,"strcoat.cth");
  FUN_0043eea0(param_1 + 0xc330,param_1 + 0x20,param_1 + 0x30,iVar4);
  uVar3 = FUN_0040c2b0(param_1 + 0x46e68,_DAT_01c3f6a0);
  iVar4 = FUN_0040c600(uVar3);
  *(int *)(param_1 + 0x47ac0) = iVar4;
  if (iVar4 == 0) {
    _DAT_01d1d400 = "..\\core\\mimic.cpp";
    _DAT_01d1d404 = 0x101;
    FUN_005030e0("CMimic failed to create morph target actor!");
  }
  (*(code *)**(uint **)(*(int *)(param_1 + 0x47ac0) + 0x154))(*(int *)(param_1 + 0x47ac0));
  iVar4 = param_1 + 0x158;
  FUN_00567500(iVar4);
  FUN_00569180(iVar4);
  FUN_005230c0(param_1 + 0x46e90,0,iVar4);
  FUN_00567580(iVar4);
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x46ee4)) {
    iVar5 = 0;
    do {
      iVar4 = iVar4 + 1;
      *(float *)(*(int *)(param_1 + 0x46ee8) + 4 + iVar5) =
           -*(float *)(*(int *)(param_1 + 0x46ee8) + 4 + iVar5);
      iVar5 = iVar5 + 0x10;
    } while (iVar4 < *(int *)(param_1 + 0x46ee4));
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x46eec)) {
    iVar5 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x46ef0);
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
    } while (iVar4 < *(int *)(param_1 + 0x46eec));
  }
  FUN_00567500(*(int *)(param_1 + 0x47ac0) + 0x158);
  FUN_00569180(*(int *)(param_1 + 0x47ac0) + 0x158);
  FUN_005230c0(param_1 + 0x46e90,1,*(int *)(param_1 + 0x47ac0) + 0x158);
  FUN_00567580(*(int *)(param_1 + 0x47ac0) + 0x158);
  FUN_00523310(param_1 + 0x46e90);
  return;
}
