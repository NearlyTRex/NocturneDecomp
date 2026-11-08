// Name: FUN_00474ef0
// Address: 00474ef0
// Address Range: [[00474ef0, 00474f61]]
// Convention: unknown
// Signature: void FUN_00474ef0(int param_1)

#include "nocturne.h"

void FUN_00474ef0(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0xc1e4) != 0) && (*(int *)(param_1 + 0x1ff5c) == 0)) {
    iVar1 = FUN_00475890(param_1);
    if ((iVar1 == 0) && (*(int *)(param_1 + 0x1ffac) == 0)) {
      iVar1 = FUN_004eca10(param_1,0);
      if (iVar1 != 0) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x158))(param_1);
        return;
      }
      iVar1 = FUN_004712b0(param_1);
      if (iVar1 != 0) {
        *(uint *)(param_1 + 0xc1e4) = 0;
        return;
      }
      *(uint *)(param_1 + 0xc1e4) = 0;
      return;
    }
  }
  return;
}
