// Name: FUN_00593e80
// Address: 00593e80
// Address Range: [[00593e80, 00593ff2]]
// Convention: unknown
// Signature: void FUN_00593e80(int param_1)

#include "nocturne.h"

void FUN_00593e80(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x3268) == 0) {
    *(uint *)(param_1 + 0xce5c) = 0x41700000;
    *(uint *)(param_1 + 0xce60) = 0x41200000;
    *(uint *)(param_1 + 0x2538) = 0x42c80000;
  }
  FUN_0054e6b0(param_1 + 0x158);
  uVar1 = FUN_0054eac0(param_1 + 0x158);
  uVar2 = FUN_00548090(uVar1,"Bip01 Spine3",1);
  *(uint *)(param_1 + 0xd058) = uVar2;
  uVar2 = FUN_00548090(uVar1,"Bip01 L Finger1",1);
  *(uint *)(param_1 + 0xd05c) = uVar2;
  uVar2 = FUN_00548090(uVar1,"Bip01 R Finger1",1);
  *(uint *)(param_1 + 0xd060) = uVar2;
  uVar2 = FUN_00548090(uVar1,"Bip01jaw2",1);
  *(uint *)(param_1 + 0xd064) = uVar2;
  uVar1 = FUN_00548090(uVar1,"Bip01 Head",1);
  *(uint *)(param_1 + 0xd068) = uVar1;
  FUN_00489110(param_1);
  *(uint *)(param_1 + 0xfc) = *(uint *)(param_1 + 0xd06c);
  uVar1 = FUN_0040ce40(0,0x3f800000);
  *(uint *)(param_1 + 0xd098) = uVar1;
  if (*(int *)(param_1 + 0xd054) == 0) {
    *(uint *)(param_1 + 0x3270) = 0x3fc00000;
  }
  *(uint *)(param_1 + 0xd070) = 0;
  uVar1 = FUN_0040ce40(0x41200000,0x41f00000);
  *(uint *)(param_1 + 0xd078) = 0;
  *(uint *)(param_1 + 0xd07c) = 0;
  *(uint *)(param_1 + 0xd074) = uVar1;
  iVar3 = FUN_004fc070(param_1 + 0x158);
  if (*(int *)(iVar3 + 0x24) == 0xd) {
    *(uint *)(param_1 + 0x2540) = 0;
    return;
  }
  *(uint *)(param_1 + 0x2540) = 2;
  return;
}
