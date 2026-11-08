// Name: FUN_00595b80
// Address: 00595b80
// Address Range: [[00595b80, 00595bb2]]
// Convention: unknown
// Signature: undefined4 FUN_00595b80(int param_1)

#include "nocturne.h"

uint FUN_00595b80(int param_1)

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
