// Name: FUN_00599890
// Address: 00599890
// Address Range: [[00599890, 005998c2]]
// Convention: unknown
// Signature: undefined4 FUN_00599890(int param_1)

#include "nocturne.h"

uint FUN_00599890(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0x70))(param_1);
  if ((iVar1 != 0) && (*(int *)(0x01D2C900 + 0x1008) == 0)) {
    return 0;
  }
  uVar2 = FUN_0042f240(param_1);
  return uVar2;
}
