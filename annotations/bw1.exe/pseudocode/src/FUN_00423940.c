// Name: FUN_00423940
// Address: 00423940
// Address Range: [[00423940, 00423b69]]
// Convention: unknown
// Signature: void FUN_00423940(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00423940(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = param_1 + 0x158;
  FUN_00569b20(iVar1);
  *(uint *)(param_1 + 0xc28c) = 0;
  uVar2 = FUN_00569f30(iVar1);
  DAT_007c5388 = FUN_005634f0(uVar2,"Bip01 Head",1);
  DAT_007c5394 = FUN_005634f0(uVar2,"Bip01 L ForeArm",1);
  DAT_007c5398 = FUN_005634f0(uVar2,"Bip01 R ForeArm",1);
  _DAT_007c53a4 = FUN_005634f0(uVar2,"Bip01 L Foot",1);
  _DAT_007c53a8 = FUN_005634f0(uVar2,"Bip01 R Foot",1);
  DAT_007c538c = FUN_005634f0(uVar2,"Bip01 L Hand",1);
  DAT_007c5390 = FUN_005634f0(uVar2,"Bip01 R Hand",1);
  DAT_007c539c = FUN_005634f0(uVar2,"Bip01 L UpperArm",1);
  DAT_007c53a0 = FUN_005634f0(uVar2,"Bip01 R UpperArm",1);
  DAT_007c53ac = FUN_005634f0(uVar2,"Bip01 Spine",1);
  _DAT_007c53b0 = FUN_005634f0(uVar2,"Bip01 Spine2",1);
  uVar2 = FUN_00569eb0(iVar1);
  uVar3 = FUN_00565780(uVar2,"lshoulderpiece",1);
  *(uint *)(param_1 + 0xc268) = uVar3;
  uVar3 = FUN_00565780(uVar2,"l4armpiece",1);
  *(uint *)(param_1 + 0xc26c) = uVar3;
  uVar3 = FUN_00565780(uVar2,"rshoulderpiece",1);
  *(uint *)(param_1 + 0xc270) = uVar3;
  uVar3 = FUN_00565780(uVar2,"r4armpiece",1);
  *(uint *)(param_1 + 0xc274) = uVar3;
  uVar3 = FUN_00565780(uVar2,"lshinpiece",1);
  *(uint *)(param_1 + 0xc278) = uVar3;
  uVar3 = FUN_00565780(uVar2,"rshinpiece",1);
  *(uint *)(param_1 + 0xc27c) = uVar3;
  uVar3 = FUN_00565780(uVar2,"torsopiece",1);
  *(uint *)(param_1 + 0xc280) = uVar3;
  uVar3 = FUN_00565780(uVar2,"lowerbodypiece",1);
  *(uint *)(param_1 + 0xc284) = uVar3;
  uVar2 = FUN_00565780(uVar2,"headpiece",1);
  *(uint *)(param_1 + 0xc288) = uVar2;
  FUN_004a0510(param_1);
  uVar2 = FUN_0040cc00(0x40000000,0x41a00000);
  *(uint *)(param_1 + 0xc294) = 0;
  *(uint *)(param_1 + 0xc298) = 0;
  *(uint *)(param_1 + 0xc290) = uVar2;
  return;
}
