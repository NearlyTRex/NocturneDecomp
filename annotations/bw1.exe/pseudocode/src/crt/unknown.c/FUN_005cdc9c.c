// Name: crt_unknown.c_FUN_005cdc9c
// Address: 005cdc9c
// Address Range: [[005cdc9c, 005cdcde]]
// Convention: unknown
// Signature: int * crt_unknown_c_FUN_005cdc9c(int *param_1)

#include "nocturne.h"

int * FUN_005cdc9c(int *param_1)

{
  int iVar1;
  
  if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x10) == 0) {
    iVar1 = *(int *)((int)param_1 + *(int *)(*param_1 + 4) + 4);
    iVar1 = (**(code **)(*(int *)(iVar1 + 0x28) + 0x20))(iVar1);
    if (iVar1 == -1) {
      FUN_005c8e45(*(int *)(*param_1 + 4) + (int)param_1,2);
      return param_1;
    }
  }
  return param_1;
}
