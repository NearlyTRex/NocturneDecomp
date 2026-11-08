// Name: FUN_0042ccf0
// Address: 0042ccf0
// Address Range: [[0042ccf0, 0042cd2b]]
// Convention: unknown
// Signature: undefined4 FUN_0042ccf0(int param_1)

#include "nocturne.h"

uint FUN_0042ccf0(int param_1)

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
