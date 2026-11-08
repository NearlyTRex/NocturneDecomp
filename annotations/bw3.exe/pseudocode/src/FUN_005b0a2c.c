// Name: FUN_005b0a2c
// Address: 005b0a2c
// Address Range: [[005b0a2c, 005b0a6e]]
// Convention: unknown
// Signature: int * FUN_005b0a2c(int *param_1)

#include "nocturne.h"

int * FUN_005b0a2c(int *param_1)

{
  int iVar1;
  
  if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x10) == 0) {
    iVar1 = *(int *)((int)param_1 + *(int *)(*param_1 + 4) + 4);
    iVar1 = (**(code **)(*(int *)(iVar1 + 0x28) + 0x20))(iVar1);
    if (iVar1 == -1) {
      FUN_005abc85(*(int *)(*param_1 + 4) + (int)param_1,2);
      return param_1;
    }
  }
  return param_1;
}
