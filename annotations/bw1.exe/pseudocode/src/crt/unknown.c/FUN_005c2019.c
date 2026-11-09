// Name: crt_unknown.c_FUN_005c2019
// Address: 005c2019
// Address Range: [[005c2019, 005c2077]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c2019(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_005c2019(int *param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 4) + (int)param_1;
  if (*(int *)(iVar1 + 4) != 0) {
    iVar1 = FUN_005c8e7a(*(int *)(iVar1 + 4),param_2,param_3,param_4);
    if (iVar1 != 0) {
      FUN_005c1fd7((int)param_1 + *(int *)(*param_1 + 4),0);
      return;
    }
    iVar1 = (int)param_1 + *(int *)(*param_1 + 4);
  }
  FUN_005c8e45(iVar1,2);
  return;
}
