// Name: FUN_0053c310
// Address: 0053c310
// Address Range: [[0053c310, 0053c49c]]
// Convention: unknown
// Signature: void FUN_0053c310(int param_1)

#include "nocturne.h"

void FUN_0053c310(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_00547480(param_1 + 0x2b4);
  *(uint *)(param_1 + 0x10b48) = 0;
  *(uint *)(param_1 + 0x10b70) = 0;
  iVar1 = FUN_005b8130(param_1 + 0x2514,"SHADOWBEAST.DFM");
  if ((iVar1 == 0) ||
     (iVar1 = FUN_005b8130(param_1 + 0x2514,"WERE_HEADLESS.DFM"), iVar1 == 0)) {
    *(uint *)(param_1 + 0x10b48) = 1;
  }
  uVar2 = FUN_00547890(param_1 + 0x2b4);
  uVar3 = FUN_00540e80(uVar2,"Bip01 Pelvis",1);
  *(uint *)(param_1 + 0x10b0c) = uVar3;
  uVar3 = FUN_00540e80(uVar2,"Bip01 Spine2",1);
  *(uint *)(param_1 + 0x10b10) = uVar3;
  uVar3 = FUN_00540e80(uVar2,"Bip01 Head",1);
  *(uint *)(param_1 + 0x10b14) = uVar3;
  uVar3 = FUN_00540e80(uVar2,"Bip01 Spine2",1);
  *(uint *)(param_1 + 0x10afc) = uVar3;
  uVar3 = FUN_00540e80(uVar2,"Bip01 L Finger1",1);
  *(uint *)(param_1 + 0x10b00) = uVar3;
  uVar3 = FUN_00540e80(uVar2,"Bip01 R Finger1",1);
  *(uint *)(param_1 + 0x10b04) = uVar3;
  uVar2 = FUN_00540e80(uVar2,"Bip01 Head",1);
  *(uint *)(param_1 + 0x10b08) = uVar2;
  FUN_00487eb0(param_1);
  *(uint *)(param_1 + 0xfc) = 1;
  *(uint *)(param_1 + 0xf8) = 0;
  if (*(int *)(param_1 + 0x10af8) == 0) {
    *(uint *)(param_1 + 0x3434) = 0x3fc00000;
  }
  *(uint *)(param_1 + 0x10b1c) = 0;
  uVar2 = FUN_0040cf60(0x41200000,0x41f00000);
  *(uint *)(param_1 + 0x10b24) = 0;
  *(uint *)(param_1 + 0x10b28) = 0;
  *(uint *)(param_1 + 0x10b20) = uVar2;
  return;
}
