// Name: FUN_00424430
// Address: 00424430
// Address Range: [[00424430, 0042446b]]
// Convention: unknown
// Signature: undefined4 FUN_00424430(int param_1)

#include "nocturne.h"

uint FUN_00424430(int param_1)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0xdc) == 0) &&
      (*(float *)(param_1 + 0x24) == *(float *)(param_1 + 0x2574))) &&
     (*(int *)(param_1 + 0x2570) != 0)) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x2b0) + 100))(param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}
