// Name: FUN_0056b3c2
// Address: 0056b3c2
// Address Range: [[0056b3c2, 0056b404]]
// Convention: unknown
// Signature: int * FUN_0056b3c2(int *param_1)

#include "nocturne.h"

int * FUN_0056b3c2(int *param_1)

{
  int iVar1;
  
  if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x10) == 0) {
    iVar1 = *(int *)((int)param_1 + *(int *)(*param_1 + 4) + 4);
    iVar1 = (**(code **)(*(int *)(iVar1 + 0x28) + 0x20))(iVar1);
    if (iVar1 == -1) {
      FUN_0056b327(*(int *)(*param_1 + 4) + (int)param_1,2);
      return param_1;
    }
  }
  return param_1;
}
