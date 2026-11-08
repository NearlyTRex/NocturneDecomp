// Name: FUN_0058e8d0
// Address: 0058e8d0
// Address Range: [[0058e8d0, 0058e904]]
// Convention: unknown
// Signature: undefined4 FUN_0058e8d0(int param_1)

#include "nocturne.h"

uint FUN_0058e8d0(int param_1)

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
