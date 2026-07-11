// Name: FUN_00557060
// Address: 00557060
// Address Range: [[00557060, 005570a7]]
// Convention: unknown
// Signature: void FUN_00557060(int param_1)

#include "nocturne.h"

void FUN_00557060(int param_1)

{
  int iVar1;
  uint uVar2;
  
  *(uint *)(param_1 + 0xbd44) = 0x41200000;
  iVar1 = FUN_00526c50(*(uint *)(param_1 + 0xbd40));
  if (iVar1 != 0) {
    return;
  }
  uVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"were?.wav");
  *(uint *)(param_1 + 0xbd44) = 0x41a00000;
  *(uint *)(param_1 + 0xbd40) = uVar2;
  return;
}
