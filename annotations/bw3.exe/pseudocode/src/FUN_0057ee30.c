// Name: FUN_0057ee30
// Address: 0057ee30
// Address Range: [[0057ee30, 0057ee77]]
// Convention: unknown
// Signature: void FUN_0057ee30(int param_1)

#include "nocturne.h"

void FUN_0057ee30(int param_1)

{
  int iVar1;
  uint uVar2;
  
  *(uint *)(param_1 + 0xd074) = 0x41200000;
  iVar1 = FUN_00556700(*(uint *)(param_1 + 0xd070));
  if (iVar1 != 0) {
    return;
  }
  uVar2 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"were?.wav");
  *(uint *)(param_1 + 0xd074) = 0x41a00000;
  *(uint *)(param_1 + 0xd070) = uVar2;
  return;
}
