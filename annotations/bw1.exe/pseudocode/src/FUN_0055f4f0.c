// Name: FUN_0055f4f0
// Address: 0055f4f0
// Address Range: [[0055f4f0, 0055f53b]]
// Convention: unknown
// Signature: void FUN_0055f4f0(int param_1)

#include "nocturne.h"

void FUN_0055f4f0(int param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  iVar1 = FUN_005735a0(*(uint *)(param_1 + 0xc29c));
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0xc2d4) == 1) {
      pcVar3 = "shb_damage??.wav";
    }
    else {
      pcVar3 = "child-cry?.wav";
    }
    uVar2 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,pcVar3);
    *(uint *)(param_1 + 0xc29c) = uVar2;
    *(uint *)(param_1 + 0xc298) = 0x40800000;
  }
  return;
}
