// Name: FUN_00522880
// Address: 00522880
// Address Range: [[00522880, 005228b4]]
// Convention: unknown
// Signature: undefined4 FUN_00522880(int param_1)

#include "nocturne.h"

uint FUN_00522880(int param_1)

{
  int iVar1;
  
  FUN_0042f510(param_1);
  iVar1 = *(int *)(param_1 + 0x20c24);
  if (iVar1 == 0) {
    return 1;
  }
  (**(code **)(*(int *)(iVar1 + 0x154) + 0x14))(iVar1);
  return 1;
}
