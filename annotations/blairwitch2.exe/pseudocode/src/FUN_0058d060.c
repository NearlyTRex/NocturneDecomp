// Name: FUN_0058d060
// Address: 0058d060
// Address Range: [[0058d060, 0058d0a7]]
// Convention: unknown
// Signature: void FUN_0058d060(int param_1)

#include "nocturne.h"

void FUN_0058d060(int param_1)

{
  int iVar1;
  uint uVar2;
  
  *(uint *)(param_1 + 0x10b18) = 0x41200000;
  iVar1 = FUN_00550b70(*(uint *)(param_1 + 0x10b14));
  if (iVar1 != 0) {
    return;
  }
  uVar2 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"were?.wav");
  *(uint *)(param_1 + 0x10b18) = 0x41a00000;
  *(uint *)(param_1 + 0x10b14) = uVar2;
  return;
}
