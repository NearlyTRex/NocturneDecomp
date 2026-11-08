// Name: FUN_00462790
// Address: 00462790
// Address Range: [[00462790, 0046284c]]
// Convention: unknown
// Signature: void FUN_00462790(int param_1)

#include "nocturne.h"

void FUN_00462790(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  FUN_0054e6b0(param_1 + 0x158);
  uVar1 = FUN_0054eac0(param_1 + 0x158);
  uVar2 = FUN_00548090(uVar1,"Bip01 Spine1",1);
  *(uint *)(param_1 + 0xd054) = uVar2;
  uVar1 = FUN_00548090(uVar1,"Bip01 Head",1);
  *(uint *)(param_1 + 0xd058) = uVar1;
  FUN_00489110(param_1);
  *(uint *)(param_1 + 0xcde0) = 0;
  if (*(int *)(param_1 + 0x3268) == 0) {
    switch(*(uint *)(param_1 + 0xd060)) {
    case 0:
    case 1:
      *(uint *)(param_1 + 0xce5c) = 0x40a00000;
      *(uint *)(param_1 + 0xce60) = 0x41200000;
      *(uint *)(param_1 + 0x2538) = 0x41a00000;
      break;
    case 2:
    case 3:
      *(uint *)(param_1 + 0xce5c) = 0x41200000;
      *(uint *)(param_1 + 0xce60) = 0x41200000;
      *(uint *)(param_1 + 0x2538) = 0x41f00000;
      return;
    }
  }
  return;
}
