// Name: crt_unknown.c_FUN_005a4e88
// Address: 005a4e88
// Address Range: [[005a4e88, 005a4ed6]]
// Convention: unknown
// Signature: int * crt_unknown_c_FUN_005a4e88(int *param_1,undefined4 param_2)

#include "nocturne.h"

int * FUN_005a4e88(int *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_005abd9f(param_1,1);
  if (iVar1 != 0) {
    iVar1 = *(int *)((int)param_1 + *(int *)(*param_1 + 4) + 4);
    iVar1 = (**(code **)(*(int *)(iVar1 + 0x28) + 0x18))(iVar1,param_2,0,1);
    if (iVar1 == -1) {
      FUN_005abc85(*(int *)(*param_1 + 4) + (int)param_1,2);
      return param_1;
    }
  }
  return param_1;
}
