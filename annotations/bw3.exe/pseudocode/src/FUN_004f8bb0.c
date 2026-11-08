// Name: FUN_004f8bb0
// Address: 004f8bb0
// Address Range: [[004f8bb0, 004f8c98]]
// Convention: unknown
// Signature: void FUN_004f8bb0(int param_1)

#include "nocturne.h"

void FUN_004f8bb0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = param_1 + 0x158;
  FUN_0054e6b0(iVar1);
  uVar2 = FUN_0054eac0(iVar1);
  uVar3 = FUN_00548090(uVar2,"Bip01 Spine2",1);
  *(uint *)(param_1 + 0xcdcc) = uVar3;
  uVar2 = FUN_00548090(uVar2,"Bip01 Head",1);
  *(uint *)(param_1 + 0xcdd0) = uVar2;
  FUN_0042b0e0(param_1);
  uVar2 = FUN_0054ea40(iVar1);
  uVar3 = FUN_0054a310(uVar2,&DAT_005c918f,1);
  *(uint *)(param_1 + 0xcdd8) = uVar3;
  uVar3 = FUN_0054a310(uVar2,"lforearm",1);
  *(uint *)(param_1 + 0xcddc) = uVar3;
  uVar3 = FUN_0054a310(uVar2,"rforearm",1);
  *(uint *)(param_1 + 0xcde0) = uVar3;
  uVar3 = FUN_0054a310(uVar2,"lshin",1);
  *(uint *)(param_1 + 0xcde4) = uVar3;
  uVar3 = FUN_0054a310(uVar2,"rshin",1);
  *(uint *)(param_1 + 0xcde8) = uVar3;
  uVar2 = FUN_0054a310(uVar2,"torso",1);
  *(uint *)(param_1 + 0xcdec) = uVar2;
  return;
}
