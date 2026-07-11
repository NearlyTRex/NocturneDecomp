// Name: FUN_0056ce57
// Address: 0056ce57
// Address Range: [[0056ce57, 0056ce9f]]
// Convention: unknown
// Signature: undefined4 FUN_0056ce57(int *param_1,int param_2)

#include "nocturne.h"

uint FUN_0056ce57(int *param_1,int param_2)

{
  uint uVar1;
  
  if ((((param_2 != 0) || ((*(uint *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) & 1) == 0)) &&
      (*(int *)(*(int *)(*param_1 + 4) + 0x10 + (int)param_1) == 0)) &&
     (*(int *)(*(int *)(*param_1 + 4) + 8 + (int)param_1) == 0)) {
    return 1;
  }
  uVar1 = FUN_0056b227(param_1,param_2);
  return uVar1;
}
