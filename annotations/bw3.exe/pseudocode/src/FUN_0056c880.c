// Name: FUN_0056c880
// Address: 0056c880
// Address Range: [[0056c880, 0056c8b2]]
// Convention: unknown
// Signature: undefined4 FUN_0056c880(int param_1)

#include "nocturne.h"

uint FUN_0056c880(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0x70))(param_1);
  if ((iVar1 != 0) && (*(int *)(0x01D81080 + 0x1008) == 0)) {
    return 0;
  }
  uVar2 = FUN_0042e220(param_1);
  return uVar2;
}
