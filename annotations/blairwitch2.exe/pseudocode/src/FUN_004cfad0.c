// Name: FUN_004cfad0
// Address: 004cfad0
// Address Range: [[004cfad0, 004cfaff]]
// Convention: unknown
// Signature: void FUN_004cfad0(int param_1)

#include "nocturne.h"

void FUN_004cfad0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x25618);
  if (iVar1 == 0) {
    return;
  }
  (**(code **)(*(int *)(iVar1 + 0x2b0) + 0xac))(iVar1,param_1);
  *(uint *)(param_1 + 0x25618) = 0;
  return;
}
