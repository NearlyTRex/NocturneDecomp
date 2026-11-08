// Name: FUN_0042e120
// Address: 0042e120
// Address Range: [[0042e120, 0042e15b]]
// Convention: unknown
// Signature: undefined4 FUN_0042e120(int param_1)

#include "nocturne.h"

uint FUN_0042e120(int param_1)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0xdc) == 0) &&
      (*(float *)(param_1 + 0x24) == *(float *)(param_1 + 0x2504))) &&
     (*(int *)(param_1 + 0x2500) != 0)) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0x5c))(param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}
