// Name: FUN_00521370
// Address: 00521370
// Address Range: [[00521370, 00521458]]
// Convention: unknown
// Signature: void FUN_00521370(int param_1)

#include "nocturne.h"

void FUN_00521370(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = param_1 + 0x158;
  FUN_00569b20(iVar1);
  uVar2 = FUN_00569f30(iVar1);
  uVar3 = FUN_005634f0(uVar2,"Bip01 Spine2",1);
  *(uint *)(param_1 + 0xc1d0) = uVar3;
  uVar2 = FUN_005634f0(uVar2,"Bip01 Head",1);
  *(uint *)(param_1 + 0xc1d4) = uVar2;
  FUN_0042c510(param_1);
  uVar2 = FUN_00569eb0(iVar1);
  uVar3 = FUN_00565780(uVar2,&DAT_005ea355,1);
  *(uint *)(param_1 + 0xc1dc) = uVar3;
  uVar3 = FUN_00565780(uVar2,"lforearm",1);
  *(uint *)(param_1 + 0xc1e0) = uVar3;
  uVar3 = FUN_00565780(uVar2,"rforearm",1);
  *(uint *)(param_1 + 0xc1e4) = uVar3;
  uVar3 = FUN_00565780(uVar2,"lshin",1);
  *(uint *)(param_1 + 0xc1e8) = uVar3;
  uVar3 = FUN_00565780(uVar2,"rshin",1);
  *(uint *)(param_1 + 0xc1ec) = uVar3;
  uVar2 = FUN_00565780(uVar2,"torso",1);
  *(uint *)(param_1 + 0xc1f0) = uVar2;
  return;
}
