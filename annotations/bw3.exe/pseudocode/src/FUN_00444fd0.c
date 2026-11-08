// Name: FUN_00444fd0
// Address: 00444fd0
// Address Range: [[00444fd0, 00445110]]
// Convention: unknown
// Signature: void FUN_00444fd0(int param_1)

#include "nocturne.h"

void FUN_00444fd0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = param_1 + 0x158;
  FUN_0054e6b0(iVar1);
  uVar2 = FUN_0054eac0(iVar1);
  uVar3 = FUN_00548090(uVar2,"Bip01 Spine2",1);
  *(uint *)(param_1 + 0xd054) = uVar3;
  uVar2 = FUN_00548090(uVar2,"Bip01 Head",1);
  *(uint *)(param_1 + 0xd058) = uVar2;
  FUN_00489110(param_1);
  uVar2 = FUN_0054ea40(iVar1);
  uVar3 = FUN_0054a310(uVar2,"head01",1);
  *(uint *)(param_1 + 0xd060) = uVar3;
  uVar3 = FUN_0054a310(uVar2,"neck01",1);
  *(uint *)(param_1 + 0xd064) = uVar3;
  uVar3 = FUN_0054a310(uVar2,"lfrontleg01",1);
  *(uint *)(param_1 + 0xd068) = uVar3;
  uVar3 = FUN_0054a310(uVar2,"rfrontleg01",1);
  *(uint *)(param_1 + 0xd06c) = uVar3;
  uVar3 = FUN_0054a310(uVar2,"rbackleg01",1);
  *(uint *)(param_1 + 0xd070) = uVar3;
  uVar3 = FUN_0054a310(uVar2,"lbackleg01",1);
  *(uint *)(param_1 + 0xd074) = uVar3;
  uVar3 = FUN_0054a310(uVar2,"torso01",1);
  *(uint *)(param_1 + 0xd078) = uVar3;
  uVar3 = FUN_0054a310(uVar2,"utter01",1);
  *(uint *)(param_1 + 0xd07c) = uVar3;
  uVar3 = FUN_0054a310(uVar2,"back01",1);
  *(uint *)(param_1 + 0xd080) = uVar3;
  uVar2 = FUN_0054a310(uVar2,"tail01",1);
  *(uint *)(param_1 + 0xd084) = uVar2;
  return;
}
