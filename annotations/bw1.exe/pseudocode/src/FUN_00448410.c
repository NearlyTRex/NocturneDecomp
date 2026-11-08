// Name: FUN_00448410
// Address: 00448410
// Address Range: [[00448410, 00448550]]
// Convention: unknown
// Signature: void FUN_00448410(int param_1)

#include "nocturne.h"

void FUN_00448410(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = param_1 + 0x158;
  FUN_00569b20(iVar1);
  uVar2 = FUN_00569f30(iVar1);
  uVar3 = FUN_005634f0(uVar2,"Bip01 Spine2",1);
  *(uint *)(param_1 + 0xc268) = uVar3;
  uVar2 = FUN_005634f0(uVar2,"Bip01 Head",1);
  *(uint *)(param_1 + 0xc26c) = uVar2;
  FUN_004a0510(param_1);
  uVar2 = FUN_00569eb0(iVar1);
  uVar3 = FUN_00565780(uVar2,"head01",1);
  *(uint *)(param_1 + 0xc274) = uVar3;
  uVar3 = FUN_00565780(uVar2,"neck01",1);
  *(uint *)(param_1 + 0xc278) = uVar3;
  uVar3 = FUN_00565780(uVar2,"lfrontleg01",1);
  *(uint *)(param_1 + 0xc27c) = uVar3;
  uVar3 = FUN_00565780(uVar2,"rfrontleg01",1);
  *(uint *)(param_1 + 0xc280) = uVar3;
  uVar3 = FUN_00565780(uVar2,"rbackleg01",1);
  *(uint *)(param_1 + 0xc284) = uVar3;
  uVar3 = FUN_00565780(uVar2,"lbackleg01",1);
  *(uint *)(param_1 + 0xc288) = uVar3;
  uVar3 = FUN_00565780(uVar2,"torso01",1);
  *(uint *)(param_1 + 0xc28c) = uVar3;
  uVar3 = FUN_00565780(uVar2,"utter01",1);
  *(uint *)(param_1 + 0xc290) = uVar3;
  uVar3 = FUN_00565780(uVar2,"back01",1);
  *(uint *)(param_1 + 0xc294) = uVar3;
  uVar2 = FUN_00565780(uVar2,"tail01",1);
  *(uint *)(param_1 + 0xc298) = uVar2;
  return;
}
