// Name: FUN_0058b830
// Address: 0058b830
// Address Range: [[0058b830, 0058b94a]]
// Convention: unknown
// Signature: void FUN_0058b830(int param_1)

#include "nocturne.h"

void FUN_0058b830(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  FUN_00547480(param_1 + 0x2b4);
  uVar1 = FUN_00547890(param_1 + 0x2b4);
  uVar2 = FUN_00540e80(uVar1,"Bip01 Spine3",1);
  *(uint *)(param_1 + 0x10afc) = uVar2;
  uVar2 = FUN_00540e80(uVar1,"Bip01 L Finger1",1);
  *(uint *)(param_1 + 0x10b00) = uVar2;
  uVar2 = FUN_00540e80(uVar1,"Bip01 R Finger1",1);
  *(uint *)(param_1 + 0x10b04) = uVar2;
  uVar2 = FUN_00540e80(uVar1,"Bip01jaw2",1);
  *(uint *)(param_1 + 0x10b08) = uVar2;
  uVar1 = FUN_00540e80(uVar1,"Bip01 Head",1);
  *(uint *)(param_1 + 0x10b0c) = uVar1;
  FUN_00487eb0(param_1);
  *(uint *)(param_1 + 0xfc) = *(uint *)(param_1 + 0x10b10);
  uVar1 = FUN_0040cf60(0,0x3f800000);
  *(uint *)(param_1 + 0x10b3c) = uVar1;
  if (*(int *)(param_1 + 0x10af8) == 0) {
    *(uint *)(param_1 + 0x3434) = 0x3fc00000;
  }
  *(uint *)(param_1 + 0x10b14) = 0;
  uVar1 = FUN_0040cf60(0x41200000,0x41f00000);
  *(uint *)(param_1 + 0x10b1c) = 0;
  *(uint *)(param_1 + 0x10b20) = 0;
  *(uint *)(param_1 + 0x10b18) = uVar1;
  return;
}
