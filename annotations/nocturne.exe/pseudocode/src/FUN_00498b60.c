// Name: FUN_00498b60
// Address: 00498b60
// Address Range: [[00498b60, 00498bca]]
// Convention: unknown
// Signature: void FUN_00498b60(int param_1)

#include "nocturne.h"

void FUN_00498b60(int param_1)

{
  int iVar1;
  
  FUN_00511780(0x01E57284,param_1);
  iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x1f8d0) + 0x14c) + 0xdc))
                    (*(int *)(param_1 + 0x1f8d0));
  if ((iVar1 != 0) && (*(int *)(*(int *)(param_1 + 0x1f8d0) + 0x2d4) == 1)) {
    *(uint *)(param_1 + 0x1fa74) = 0x3f800000;
  }
  FUN_00511750(0x01E57284);
  *(uint *)(param_1 + 0x1fa54) = 0;
  return;
}
