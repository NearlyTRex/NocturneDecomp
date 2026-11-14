// Name: crt_unknown.c_FUN_005c599c
// Address: 005c599c
// Address Range: [[005c599c, 005c59de]]
// Convention: unknown
// Signature: int * crt_unknown_c_FUN_005c599c(int *param_1)

#include "nocturne.h"

int * FUN_005c599c(int *param_1)

{
  int iVar1;
  
  if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x10) == 0) {
    iVar1 = *(int *)((int)param_1 + *(int *)(*param_1 + 4) + 4);
    iVar1 = (**(code **)(*(int *)(iVar1 + 0x28) + 0x20))(iVar1);
    if (iVar1 == -1) {
      FUN_005c0b85(*(int *)(*param_1 + 4) + (int)param_1,2);
      return param_1;
    }
  }
  return param_1;
}
