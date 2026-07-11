// Name: FUN_00425960
// Address: 00425960
// Address Range: [[00425960, 0042599b]]
// Convention: unknown
// Signature: undefined4 FUN_00425960(int param_1)

#include "nocturne.h"

uint FUN_00425960(int param_1)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0xdc) == 0) &&
      (*(float *)(param_1 + 0x24) == *(float *)(param_1 + 0x240c))) &&
     (*(int *)(param_1 + 0x2408) != 0)) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x54))(param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}
