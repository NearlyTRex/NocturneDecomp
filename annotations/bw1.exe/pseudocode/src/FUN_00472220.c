// Name: FUN_00472220
// Address: 00472220
// Address Range: [[00472220, 00472254]]
// Convention: unknown
// Signature: undefined4 FUN_00472220(int param_1)

#include "nocturne.h"

uint FUN_00472220(int param_1)

{
  int iVar1;
  
  FUN_004301e0(param_1);
  iVar1 = *(int *)(param_1 + 0x20004);
  if (iVar1 == 0) {
    return 1;
  }
  (**(code **)(*(int *)(iVar1 + 0x154) + 0x14))(iVar1);
  return 1;
}
