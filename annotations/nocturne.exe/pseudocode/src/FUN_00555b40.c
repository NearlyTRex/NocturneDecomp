// Name: FUN_00555b40
// Address: 00555b40
// Address Range: [[00555b40, 00555c5a]]
// Convention: unknown
// Signature: void FUN_00555b40(int param_1)

#include "nocturne.h"

void FUN_00555b40(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  FUN_0051dcd0(param_1 + 0x150);
  uVar1 = FUN_0051e0a0(param_1 + 0x150);
  uVar2 = FUN_005179d0(uVar1,"Bip01 Spine3",1);
  *(uint *)(param_1 + 0xbd28) = uVar2;
  uVar2 = FUN_005179d0(uVar1,"Bip01 L Finger1",1);
  *(uint *)(param_1 + 0xbd2c) = uVar2;
  uVar2 = FUN_005179d0(uVar1,"Bip01 R Finger1",1);
  *(uint *)(param_1 + 0xbd30) = uVar2;
  uVar2 = FUN_005179d0(uVar1,"Bip01jaw2",1);
  *(uint *)(param_1 + 0xbd34) = uVar2;
  uVar1 = FUN_005179d0(uVar1,"Bip01 Head",1);
  *(uint *)(param_1 + 0xbd38) = uVar1;
  FUN_004796b0(param_1);
  *(uint *)(param_1 + 0xfc) = *(uint *)(param_1 + 0xbd3c);
  uVar1 = FUN_0040dda0(0,0x3f800000);
  *(uint *)(param_1 + 0xbd68) = uVar1;
  if (*(int *)(param_1 + 0xbd24) == 0) {
    *(uint *)(param_1 + 0x2dd8) = 0x3fc00000;
  }
  *(uint *)(param_1 + 0xbd40) = 0;
  uVar1 = FUN_0040dda0(0x41200000,0x41f00000);
  *(uint *)(param_1 + 0xbd48) = 0;
  *(uint *)(param_1 + 0xbd4c) = 0;
  *(uint *)(param_1 + 0xbd44) = uVar1;
  return;
}
