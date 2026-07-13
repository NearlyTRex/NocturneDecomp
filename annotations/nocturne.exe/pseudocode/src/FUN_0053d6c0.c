// Name: FUN_0053d6c0
// Address: 0053d6c0
// Address Range: [[0053d6c0, 0053d6f4]]
// Convention: unknown
// Signature: undefined4 FUN_0053d6c0(int param_1)

#include "nocturne.h"

uint FUN_0053d6c0(int param_1)

{
  int iVar1;
  
  FUN_00427260(param_1);
  iVar1 = *(int *)(param_1 + 0x1fa94);
  if (iVar1 == 0) {
    return 1;
  }
  (**(code **)(*(int *)(iVar1 + 0x14c) + 0xc))(iVar1);
  return 1;
}
